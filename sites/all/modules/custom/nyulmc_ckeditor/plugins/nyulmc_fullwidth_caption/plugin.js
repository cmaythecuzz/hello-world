/**
 * @file Plugin for inserting NYU Full-width images with caption
 *
 * This is a plugin/widget for CKEditor, a javascript inline text editor.
 *
 * @see sites/all/libraries/ckeditor.
 * @see sites/all/modules/contrib/wysiwyg
 */

// Allow figure and figcaption to be editable elements within ckEditor.
// This doesn't make them editabled when clicked, but allows them to be
// editable elements in the first place.
CKEDITOR.dtd.$editable['figure'] = 1;
CKEDITOR.dtd.$editable['figcaption'] = 1;

CKEDITOR.plugins.add( 'nyulmc_fullwidth_caption', {
  requires: 'widget',

  icons: 'nyulmc_fullwidth_caption',

  // Enable this plugin as a widget, functionality only found in CKEditor 4+.
  // This builds upon plugins, and automates a lot of the process for us.
  init: function( editor ) {
    editor.widgets.add( 'nyulmc_fullwidth_caption', {

      // The base template, in HTML, our widget structure will take when
      // inserting back into the WYSIYWG field.
      template:
          '<figure class="giving-full-width-caption">' +
              '<div class="figure"></div>' +
              '<figcaption>Enter your caption here...</figcaption>' +
          '</figure>',

      // Which elements within our template can be edited by the user.
      // Identified by the dom element/selector.
      editables: {
          caption: {
              selector: 'figcaption',
              allowedContent: 'strong em a[!href,target,rel]',
              disallowedContent: 'br'
          },
          media: {
              selector: 'div.figure'
          }
      },

      allowedContent:
          'figure(!giving-full-width-caption)',

      // A widget cannot be created without at least this content.
      requiredContent: 'figure(giving-full-width-caption)',

      // Determine if we should load a DOM object into the widget. This is
      // generally called when loading a page, and initializing CKEditor
      // (and this widget) against existing code. The function is only performed
      // when this returns true (our element matches the DOM selector).
      upcast: function( element ) {
          return element.name == 'figure' && element.hasClass( 'giving-full-width-caption' );
      }
  } );

    /**
     * Menu Button
     *
     * This initializes a WYSIWYG toolbar button for our plugin.
     */
    editor.ui.addButton( 'nyulmc_fullwidth_caption',
    {
        label : 'Create a full-width caption.',
        toolbar : 'insert',
        command : 'nyulmc_fullwidth_caption',
        icon : this.path + 'icons/nyulmc_fullwidth_caption.png'
    });

    /**
     * Style
     *
     * This initializes a stylesheet for our plugin.
     */
    var csspath = this.path + 'nyulmc_fullwidth_caption.css';
    editor.on('instanceReady', function(e) {
      this.document.appendStyleSheet(csspath);
      e.editor.on('mode', function(e){
          if (e.editor.mode == 'wysiwyg') this.document.appendStyleSheet(csspath);
      });
    });
  }
} );
