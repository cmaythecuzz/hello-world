/**
 * @file Plugin for inserting NYU Location Addresses
 *
 * This is a plugin/widget for CKEditor, a javascript inline text editor.
 *
 * @see sites/all/libraries/ckeditor.
 * @see sites/all/modules/contrib/wysiwyg
 */

// Allow address and strong to be editable elements.
CKEDITOR.dtd.$editable['strong'] = 1;
CKEDITOR.dtd.$editable['address'] = 1;

/**
 * Declare our actual plugin for CKEditor.
 * Everything happens in here, or at least is declaired here.
 */
CKEDITOR.plugins.add( 'nyulmc_location', {
  requires: 'widget',

  // Our icon, which is actually defined lower down the page.
  icons: 'nyulmc_location',

  init: function( editor ) {

    // Add our dialog file, containing our dialog.
    CKEDITOR.dialog.add('nyulmc_location', this.path + 'dialogs/nyulmc_location.js');

    // Declair the actual widget, which is built on to of the plugin API.
    // Widgets link multiple elements into a single editor object
    // for WYSIWYG purposes.
    editor.widgets.add( 'nyulmc_location', {

      // Link a dialog window to this widget.
      dialog: 'nyulmc_location',

      template:
        '<address class="nyulmc_location">' +
          '<strong>Title</strong><br>' +
          '<a href="" class="nyulmc_map_link">' +
          'Address Line 1<br>' +
          'Address Line 2<br>' +
          'New York, NY<br>'+
          '</a>' +
          '<a href="tel:5555555">Call: 555 555 5555</a>' +
        '</address>',

      allowedContent:
          'address(!nyulmc_location)',

      disallowedContent: 'p br',

      requiredContent: 'address(nyulmc_location)',

      // Determine if we should load a DOM object into the widget. This is
      // generally called when loading a page, and initializing CKEditor
      // (and this widget) against existing code. The function is only performed
      // when this returns true (our element matches the DOM selector).
      upcast: function( element ) {
          return element.name == 'address' && element.hasClass( 'nyulmc_location' );
      },

      // The logic performed when our widget is initialized.
      init: function() {

        // Initialize our data model. If editing, this makes sure we pick up
        // the data to be changed.
        if(this.element.$) {
          var element = this.element.$;

          // Set our link.
          var phone = getPhone(element, false);
          if(phone) {
            this.setData('phone', getCleanPhone(phone));
          }

          // Set our title.
          var title = getTitle(element, false);
          if(title) {
            this.setData('title', title);
          }

          // Our address is muddled in with other data (title and phone link),
          // so we need to strip those out to get our actual address.
          var address = getAddress(element);

          if(jQuery.isArray(address)) {
            this.setData('address1', address[0]);
            this.setData('address2', address[1]);
            this.setData('address3', address[2]);
          }
          else {
            this.setData('address1', '');
            this.setData('address2', '');
            this.setData('address3', '');
          }
        }
      },

      // The data handling inside our widget. This gets called after each dialog
      // completion, as well as upon init, before the dialog is called.
      data: function() {
        var element = this.element.$;

        // Element is our internal CKEditor representation. If it's not set, we
        // can't do much. If it is, set our elements to our internal data
        // values. Those get set in init, and in the modal dialog.
        if(jQuery(element)) {

          // Set the title.
          setTitle(element, this.data);

          // Set the google maps link.
          setMapLink(element, this.data);

          // Set the phone number and link.
          setPhone(element, this.data);

          // As mentioned before, the address is muddled in with other elements,
          // so we have to jump through some hoops to set it. We'll actually be
          // resetting our phone and title to set our address. Don't be alarmed:
          // No logic for non-address elements need be touched in here.
          setAddress(element, this.data);
        }
      }
    });

    /**
     * Given a current plugin data array, we'll fetch the current address, and
     * build a google maps link for the current values.
     *
     * @param object element
     *   The master element representation for this widget, including all
     *   children. Found at: this.element.$
     * @param {Object} data
     *   The master data array, normally found at this.data.
     *
     * @return string | boolean
     *   A URL to goole maps, with our address plugged in. If there was an
     *   error, we'll return false.
     */
    function buildGoogleMapAddress(element, data) {
      var address = '';

      if(jQuery(element)) {

        // Assemble an array of each line of the <address>.
        var addressNew = [];

        // Only assign non-empty lines from the address.
        if(data.address1) {
          addressNew.push(data.address1);
        }
        if(data.address2) {
          addressNew.push(data.address2);
        }
        if(data.address3) {
          addressNew.push(data.address3);
        }

        // Implode the address array with break elements.
        addressNew = addressNew.join('+');

        return 'https://www.google.com/maps/place/' + addressNew;
      }
      return false;
    }

    /**
     * Get our address, without all that extra stuff, like title (<strong>) and
     * phone (<a href>). We'll also turn the address into an array, and clean
     * it up.
     *
     * @param object element
     *   The master element representation for this widget, including all
     *   children. Found at: this.element.$
     *
     * @return array
     *   An array containing all non-empty lines of the address.
     */
    function getAddress(element) {
      var addressNew = [];

      if(jQuery(element)) {

        var title = '';
        var phone = '';
        var address = '';

        if(jQuery(element).children('a').hasClass('nyulmc_map_link')) {
          console.log(' > Load Address from DOM > Detected new format...');

          // Get the address.
          address = jQuery(element).children('a')[0].innerHTML;
          console.log('address: ');
          console.log(jQuery(address));

          title = getTitle(element, true);
          link = getPhone(element, true);
          console.log('link: ' + link);
        }
        else {
          // Get the address, which is everything inside <address>. There are
          // some extra things in there we'll strip out below.
          address = jQuery(element)[0].innerHTML;

          // Get the title
          title = jQuery(element).children('strong')[0].outerHTML;

          // Get the link
          link = jQuery(element).children('a')[0].outerHTML;
        }

        // Clean any <br > tags, then explode by <br>.
        address = address.replace('<br ','<br');
        address = address.replace('<br/>','<br>');

        // Remove the title and link
        address = address.replace(title + '<br>','');
        address = address.replace(link,'');

        // Explode by <br>
        addressArray = address.split('<br>');

        // Maintain each non-blank line of the address, and remove all others.
        jQuery.each(addressArray, function(key, value){
          value = jQuery.trim(value);
          if(value !== '') {
            addressNew.push(value);
          }
        });
      }

      return addressNew;
    }

    /**
     * Determine if the <address> contains a google maps link,
     * which changes the DOM structure of our location address.
     *
     * object element
     *   The master element representation for this widget, including all
     *   children. Found at: this.element.$
     *
     * @return {Boolean}
     *   True if this is the current model, or false if this is an older
     *   model format.
     */
    function isAddressInMapFormat(element) {
      if(jQuery(element) && jQuery(element).children('a').hasClass('nyulmc_map_link')) {
        return true;
      }

      return false;
    }

    /**
     * Get the HTML formatted title, regardless of it's DOM structure.
     *
     * @param object element
     *   The master element representation for this widget, including all
     *   children. Found at: this.element.$
     * @param boolean outer_html
     *   If true, the outer html of this element will be returned. Otherwise,
     *   we'll default to inner.
     *
     * @return string
     *   The HTML-wrapped title, including <strong>
     */
    function getTitle(element, outer_html) {
      var title = '';
      if(outer_html === true) {
        title = jQuery(element).children('strong')[0].outerHTML;
      }
      else {
        title = jQuery(element).children('strong')[0].innerHTML;
      }
      return title;
    }

    /**
     * Set the address title in the editor DOM. This does not assign the title
     * inside the plugin's data array, but in the form element WYSIWYG editor.
     *
     * @param object element
     *   The master element representation for this widget, including all
     *   children. Found at: this.element.$
     * @param {Object} data
     *   The master data array, normally found at this.data.
     */
    function setTitle(element, data) {
      jQuery(element).children('strong')[0].innerHTML = data.title;
    }

    /**
     * Get the HTML formatted phone link, regardless of it's DOM structure.
     *
     * @param object element
     *   The master element representation for this widget, including all
     *   children. Found at: this.element.$
     * @param boolean outer_html
     *   If true, the outer html of this element will be returned. Otherwise,
     *   we'll default to inner.
     *
     * @return string
     *   The HTML-wrapped phone link, including <a> wrapper.
     */
    function getPhone(element, outer_html) {
      var link = '';
      if(isAddressInMapFormat(element)) {
        // Get the link, which will be the second link in our
        // map-formatted paradigm.
        if(outer_html === true) {
          link = jQuery(element).children('a')[1].outerHTML;
        }
        else {
          link = jQuery(element).children('a')[1].innerHTML;
        }
      }
      else {
        if(outer_html === true) {
          link = jQuery(element).children('a')[0].outerHTML;
        }
        else {
          link = jQuery(element).children('a')[0].innerHTML;
        }
      }

      return link;
    }

    /**
     * Set the phone and link in the editor DOM. This does not assign the phone
     * inside the plugin's data array, but in the form element WYSIWYG editor.
     *
     * @param object element
     *   The master element representation for this widget, including all
     *   children. Found at: this.element.$
     * @param {Object} data
     *   The master data array, normally found at this.data.
     */
    function setPhone(element, data) {
      if(isAddressInMapFormat(element)) {
        // Set the phone and link.
        jQuery(element).children('a')[1].text = 'Call: ' + data.phone;

        // This is not great, but CKEditor doesn't seem to define things
        // properly for some children within their object.
        if(jQuery(element).children('a')[1].href) {
          jQuery(element).children('a')[1].href = 'tel:' + data.phone;
        }
      }
      else {
        // Set the phone and link.
        jQuery(element).children('a')[0].text = 'Call: ' + data.phone;

        // This is not great, but CKEditor doesn't seem to define things
        // properly for some children within their object.
        if(jQuery(element).children('a')[0].href) {
          jQuery(element).children('a')[0].href = 'tel:' + data.phone;
        }
      }
    }

    /**
     * Generate the anchor link opening tag for a map address link.
     *
     * This does not generate a complete tag, and must be closed.
     * (i.e. add YOUR_LINK_TITLE</a>)
     *
     * @param object element
     *   The master element representation for this widget, including all
     *   children. Found at: this.element.$
     * @param {Object} data
     *   The master data array, normally found at this.data.
     *
     * @return {[type]}         [description]
     */
    function getMapLinkAnchor(element, data) {

      var link = '';

      if(isAddressInMapFormat(element)) {
        link = jQuery(element).children('a')[0].href;
      }
      else {
        link = buildGoogleMapAddress(element, data);
      }

      return '<a href="' + link + '" target="_blank" class="nyulmc_map_link">';
    }

    /**
     * Set the address map link in the editor DOM. This does not assign the value
     * inside plugin's data array, but in the form element WYSIWYG editor.
     *
     * @param object element
     *   The master element representation for this widget, including all
     *   children. Found at: this.element.$
     * @param {Object} data
     *   The master data array, normally found at this.data.
     */
    function setMapLink(element, data) {
      if(isAddressInMapFormat(element)) {

        var googleUrl = buildGoogleMapAddress(element, data);

        if(googleUrl !== false) {
          jQuery(element).children('a')[0].href = googleUrl;
        }
        else {
          jQuery(element).children('a')[0].href = '';
        }
      }
    }

    /**
     * Layer our new address into the widget's DOM.
     *
     * The address for this widget is muddled in with other elements,
     * so we have to jump through some hoops to set it. We'll actually be
     * resetting our phone and title to set our address. Don't be alarmed:
     * No logic for non-address elements need be touched in here.
     *
     * @param {Object} element
     *   The master element representation for this widget, including all
     *   children. Found at: this.element.$
     * @param {Object} data
     *   The master data array, normally found at this.data.
     *
     * @return
     *   Nothing returned. CKEditor DOM is updated.
     */
    function setAddress(element, data) {

      if(jQuery(element)) {

        // Get the title and link.
        var title = getTitle(element, true);
        var link = getPhone(element, true);

        // Assemble an array of each line of the <address>.
        var addressNew = [];

        // Only assign non-empty lines from the address.
        if(data.address1) {
          addressNew.push(data.address1);
        }
        if(data.address2) {
          addressNew.push(data.address2);
        }
        if(data.address3) {
          addressNew.push(data.address3);
        }

        // Implode the address array with break elements, then wrap with the map
        // link, and append the phone.
        addressNew = addressNew.join('<br>');
        addressNew = getMapLinkAnchor(element, data) + addressNew + '</a>';
        addressNew = title + '<br>' + addressNew;
        addressNew = addressNew + '<br>' + link;

        // Set the <address> element's html to our full model.
        jQuery(element)[0].innerHTML = addressNew;
      }
    }

    /**
     * Given a phone line, like 'Call: 555-5555', strip down to just a
     * clean phone number.
     *
     * @param  {string} phone
     *   Our complete phone line, which should be stripped to just a number.
     *
     * @return {string}
     *   A clean phone number, with no 'Call: ' label or padding.
     */
    function getCleanPhone(phone) {
      phone = phone.replace('Call:','');
      phone = jQuery.trim(phone);

      return phone;
    }

    /**
     * Menu Button
     *
     * This initializes a WYSIWYG toolbar button for our plugin.
     */
    editor.ui.addButton( 'nyulmc_location',
    {
      label : 'Create a location address',
      toolbar : 'insert',
      command : 'nyulmc_location',
      icon : this.path + 'icons/nyulmc_location.png'
    });

    /**
     * Style
     *
     * This initializes a stylesheet for our plugin.
     */
    var csspath = this.path + 'nyulmc_location.css';
    editor.on('instanceReady', function(e) {
      this.document.appendStyleSheet(csspath);
      e.editor.on('mode', function(e){
          if (e.editor.mode == 'wysiwyg') this.document.appendStyleSheet(csspath);
      });
    });
  }
});
