/**
 * @file Plugin for inserting NYU Media Links
 *
 * This is a plugin/widget for CKEditor, a javascript inline text editor.
 *
 * @see sites/all/libraries/ckeditor.
 * @see sites/all/modules/contrib/wysiwyg
 */

// Allow figure and figcaption to be editable elements iwthin ckEditor.
// This doesn't make them editabled when clicked, but allows them to be
// editable elements in the first place.
CKEDITOR.dtd.$editable['figure'] = 1;
CKEDITOR.dtd.$editable['figcaption'] = 1;

CKEDITOR.plugins.add( 'nyulmc_media_link', {
  requires: 'widget',

  icons: 'nyulmc_media_link',

  init: function( editor ) {

    // Add our dialog file, containing our dialog.
    CKEDITOR.dialog.add('nyulmc_media_link', this.path + 'dialogs/nyulmc_media_link.js');

    editor.widgets.add( 'nyulmc_media_link', {

      // Link a dialog window to this widget.
      dialog: 'nyulmc_media_link',

      // The template (HTML structure) our widget will output.
      template:
        '<a href="" class="nyulmc_media_link">' +
        '</a>',

      // Define what elements of our template are editable.
      editables: {
        caption: {
          selector: 'a.nyulmc_media_link',
          allowedContent: 'strong em'
        }
      },

      // What content is allowed within our widget?
      allowedContent:
          'a(!nyulmc_media_link)',

      // What minimal parts of our template are required
      // to make our widget function?
      requiredContent: 'a(nyulmc_media_link)',


      // Determine if we should load a DOM object into the widget. This is
      // generally called when loading a page, and initializing CKEditor
      // (and this widget) against existing code. The function is only performed
      // when this returns true (our element matches the DOM selector).
      upcast: function( element ) {
        return element.name == 'a' && element.hasClass( 'nyulmc_media_link' );
      },

      // Here is where we return the true data to the editor. This should
      // return our data as we expect to see it on the front end.
      // Called for each element on the page.
      downcast: function( element ) { },

      // The logic performed when our widget is initialized.
      init: function() {

        if(this.element.$) {
          var element = this.element.$;

          if(jQuery(element)) {
            // Set our link.
            if(jQuery(element).attr('href')) {
              this.setData('href', jQuery(element).attr('href'));
            }
            // Set our link text
            if(jQuery(element).text) {
              this.setData('title', jQuery(element).text());
            }
            else {
              this.setData('title', '[Title Here]');
            }
            // Set our type (PDF), if set.
            if(jQuery(element).hasClass('nyulmc_pdf')) {
              this.setData('type', 'PDF');
            }
          }
        }
      },

      // The data handling inside our widget. This gets called after each dialog
      // completion, as well as upon init, before the dialog is called.
      data: function() {
        var element = this.element.$;

        if(jQuery(element)) {
          // Set the href!
          if(this.data.href != '') {
            jQuery(element).attr('href', this.data.href);
          }
          if(this.data.title != '') {
            jQuery(element).text(this.data.title);
          }
          if(this.data.type != '') {
            if(this.data.type == 'PDF') {
              jQuery(element).addClass('nyulmc_pdf');
            }
            else {
              jQuery(element).removeClass('nyulmc_pdf');
            }
          }
        }
      }
    });

    /**
     * Menu Button
     *
     * This initializes a WYSIWYG toolbar button for our plugin.
     */
    editor.ui.addButton( 'nyulmc_media_link',
    {
      label : 'Create an embedded media link',
      toolbar : 'insert',
      command : 'nyulmc_media_link',
      icon : this.path + 'icons/nyulmc_media_link.png'
    });

    /**
     * Style
     *
     * This initializes a stylesheet for our plugin.
     */
    var csspath = this.path + 'nyulmc_media_link.css';
    editor.on('instanceReady', function(e) {
      this.document.appendStyleSheet(csspath);
      e.editor.on('mode', function(e){
          if (e.editor.mode == 'wysiwyg') this.document.appendStyleSheet(csspath);
      });
    });
  }
});
