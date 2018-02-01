/**
 * @file Plugin for inserting NYU Callouts
 *
 * This is a plugin/widget for CKEditor, a javascript inline text editor.
 *
 * @see sites/all/libraries/ckeditor.
 * @see sites/all/modules/contrib/wysiwyg
 */

// Allow cite to be an editable element.
CKEDITOR.dtd.$editable['strong'] = 1;

// Add our plugin to the CKEditor instance.
CKEDITOR.plugins.add( 'nyulmc_callout', {
  requires: 'widget',

  icons: 'nyulmc_callout',

  // Enable this plugin as a widget, functionality only found in CKEditor 4+.
  // This builds upon plugins, but smartly.
  init: function( editor ) {
    editor.widgets.add( 'nyulmc_callout', {

      // The basic structure for an implementation of this widget.
      template:
        '<div class="nyulmc_callout">' +
        '<div class="nyulmc_image"><img src="' + this.path + 'images/placeholder-image.png" class="nyulmc_icon"></div>' +
        '<div><strong class="nyulmc_title">Title</strong>' +
        '<p class="nyulmc_description">Description Here</p>' +
        '</div>' +
        '</div>',

      // Which elements within the widget structure are editable, identifier by
      // DOM elements and classes.
      editables: {
        content: {
          selector: 'p.nyulmc_description',
          allowedContent: 'em a[href,alt]'
        },
        title: {
          selector: 'strong.nyulmc_title',
          allowedContent: 'em'
        },
        image: {
          selector: 'div.nyulmc_image',
          allowedContent: 'img[alt,!src]{width,height}',
          disallowedContent: 'p br &nbsp'
        }
      },

      // What content do we explicitly allow within this widget.
      allowedContent:
          'div(!nyulmc_callout), img',

      // Do not allow these elements to be entered within our widget (aside from)
      // those defained in our template.
      // @note: This is a bit buggy in CKEditor 4.4, and might not always work
      // for page and line break elements.
      disallowedContent: 'p br',

      // What structure is required in order for this element to be an instance
      // of this widget.
      requiredContent: 'div(nyulmc_callout)', //, img(nyulmc_icon)',

      // Determine if we should load a DOM object into the widget. This is
      // generally called when loading a page, and initializing CKEditor
      // (and this widget) against existing code. The function is only performed
      // when this returns true (our element matches the DOM selector).
      upcast: function( element ) {
          return element.name == 'div' && element.hasClass( 'nyulmc_callout' );
      }
  });

    /**
     * Menu Button
     *
     * This initializes a WYSIWYG toolbar button for our plugin.
     */
    editor.ui.addButton( 'nyulmc_callout',
    {
      label : 'Create a callout',
      toolbar : 'insert',
      command : 'nyulmc_callout',
      icon : this.path + 'icons/nyulmc_callout.png'
    });

    /**
     * Style
     *
     * This initializes a stylesheet for our plugin.
     */
    var csspath = this.path + 'nyulmc_callout.css';
    editor.on('instanceReady', function(e) {
      this.document.appendStyleSheet(csspath);
      e.editor.on('mode', function(e){
          if (e.editor.mode == 'wysiwyg') this.document.appendStyleSheet(csspath);
      });
    });
  }
});
