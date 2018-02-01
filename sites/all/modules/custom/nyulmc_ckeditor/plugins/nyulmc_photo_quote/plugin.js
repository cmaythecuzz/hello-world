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
CKEDITOR.dtd.$editable['p'] = 1;

CKEDITOR.plugins.add( 'nyulmc_photo_quote', {
    requires: 'widget',

    icons: 'nyulmc_photo_quote',

    // Enable this plugin as a widget, functionality only found in CKEditor 4+.
    // This builds upon plugins, but smartly.
    init: function( editor ) {
        editor.widgets.add( 'nyulmc_photo_quote', {

            template:
                '<figure class="giving-photo-quote giving-photo-quote-no-link">' +
                    '<div class="figure"><div class="giving-quote-photo"></div></div>' +
                    '<blockquote class="giving-quote">' +
                        '<p class="giving-quote-text">Quote Text</p>' +
                        '<div class="giving-quote-attr-wrap">' +
                            '<cite class="giving-quote-name">Attribution</cite>' +
                            '<cite class="giving-quote-title">&nbsp;- Title</cite>' +
                        '</div>' +
                    '</blockquote>' +
                '</figure>',

            editables: {
                media: {
                    selector: 'div.figure .giving-quote-photo'
                },
                quote: {
                    selector: 'blockquote p.giving-quote-text',
                    allowedContent: 'br strong em'
                },
                attribution: {
                    selector: 'blockquote div cite.giving-quote-name',
                    allowedContent: 'br strong em'
                },
                title: {
                    selector: 'blockquote div cite.giving-quote-title',
                    allowedContent: 'br strong em'
                }
            },

            allowedContent:
                'figure(!giving-photo-quote-no-link)',

            requiredContent: 'figure(!giving-photo-quote-no-link)',


            // Determine if we should load a DOM object into the widget. This is
            // generally called when loading a page, and initializing CKEditor
            // (and this widget) against existing code. The function is only performed
            // when this returns true (our element matches the DOM selector).
            upcast: function( element ) {
                return element.name == 'figure' && element.hasClass( 'giving-photo-quote-no-link' );
            }
        } );

    /**
     * Menu Button
     *
     * This initializes a WYSIWYG toolbar button for our plugin.
     */
    editor.ui.addButton( 'nyulmc_photo_quote',
    {
        label : 'Create an attributed photo quote',
        toolbar : 'links',
        command : 'nyulmc_photo_quote',
        icon : this.path + 'icons/nyulmc_photo_quote.png'
    });

    /**
     * Style
     *
     * This initializes a stylesheet for our plugin.
     */
    var csspath = this.path + 'nyulmc_photo_quote.css';
    editor.on('instanceReady', function(e) {
      this.document.appendStyleSheet(csspath);
      e.editor.on('mode', function(e){
          if (e.editor.mode == 'wysiwyg') this.document.appendStyleSheet(csspath);
      });
    });
  }
} );
