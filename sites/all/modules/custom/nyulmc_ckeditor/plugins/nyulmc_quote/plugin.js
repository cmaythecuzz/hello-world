/**
 * @file Plugin for inserting NYU Attributed Quotes
 *
 * This is a plugin/widget for CKEditor, a javascript inline text editor.
 *
 * @see sites/all/libraries/ckeditor.
 * @see sites/all/modules/contrib/wysiwyg
 */

// Allow cite to be an editable element.
CKEDITOR.dtd.$editable['cite'] = 1;

CKEDITOR.plugins.add( 'nyulmc_quote', {
    requires: 'widget',

    icons: 'nyulmc_quote',

    // Enable this plugin as a widget, functionality only found in CKEditor 4+.
    // This builds upon plugins, but smartly.
    init: function( editor ) {
        editor.widgets.add( 'nyulmc_quote', {

            template:
                '<blockquote class="nyulmc_quote giving-quote">' +
                    '<p class="giving-quote-text">Quote</p>' +
                    '<div class="giving-quote-attr-wrap">' +
                        '<cite class="giving-quote-name">Attribution</cite>' +
                        '<cite class="giving-quote-title"> - Title</cite>' +
                    '</div>' +
                '</blockquote>',

            editables: {
                content: {
                    selector: 'p',
                    allowedContent: 'br strong em'
                },
                name: {
                    selector: 'cite',
                    allowedContent: 'br strong em'
                },
                title: {
                    selector: 'cite.giving-quote-title',
                    allowedContent: 'br strong em'
                }
            },

            allowedContent:
                'blockquote(!nyulmc_quote)',

            requiredContent: 'blockquote(nyulmc_quote)',


            // Determine if we should load a DOM object into the widget. This is
            // generally called when loading a page, and initializing CKEditor
            // (and this widget) against existing code. The function is only performed
            // when this returns true (our element matches the DOM selector).
            upcast: function( element ) {
                return element.name == 'blockquote' && element.hasClass( 'nyulmc_quote' );
            }
        } );

    /**
     * Menu Button
     *
     * This initializes a WYSIWYG toolbar button for our plugin.
     */
    editor.ui.addButton( 'nyulmc_quote',
    {
        label : 'Create an attributed quote',
        toolbar : 'insert',
        command : 'nyulmc_quote',
        icon : this.path + 'icons/nyulmc_quote.png'
    });

    /**
     * Style
     *
     * This initializes a stylesheet for our plugin.
     */
    var csspath = this.path + 'nyulmc_quote.css';
    editor.on('instanceReady', function(e) {
      this.document.appendStyleSheet(csspath);
      e.editor.on('mode', function(e){
          if (e.editor.mode == 'wysiwyg') this.document.appendStyleSheet(csspath);
      });
    });
  }
} );
