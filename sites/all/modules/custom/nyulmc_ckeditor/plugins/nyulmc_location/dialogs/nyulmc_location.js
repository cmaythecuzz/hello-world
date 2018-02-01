/**
 * Dialog logic for the NYULMC_Location Plugin/widget for CKEditor.
 *
 * @see ../plugin.js
 */

/**
 * Defines the modal/dialog form for the NYULMC_Location Plugin.
 *
 * @param  {Object} editor
 *   The editor object from CKEditor. Among other things, the data lives here,
 *   as well as represenataions of the jQuery/DOM elements.
 */
CKEDITOR.dialog.add('nyulmc_location', function(editor) {

  return {
    title: Drupal.t('Embed a Location Address'),
    minWidth: 400,
    minHeight: 200,
    contents: [
      {
        id: 'info',
        label : Drupal.t('Embed location address'),
        title : Drupal.t('Embed location address'),

        // Define elements for the form. All data is set with commit,
        // loaded from setup, and validated with validate. See the first element
        // for a description of how these things generally function.
        elements :
        [
          {
            id : 'title',
            type : 'text',
            label : Drupal.t('Title'),

            // Grab the data from our widget, and preload any defaults or
            // existing data to be edited. You should set values in the master
            // widget/plugin's init property, or later in the data property.
            setup: function( widget ) {
              this.setValue( widget.data.title );
            },

            // We set the data in widget.data.YOUR_PARAMETER_HERE. This is then
            // accessed in the init and data properties in the main plugin. There,
            // you'll update the actual WYSIWYG DOM Eleements.
            commit: function( widget ) {
              widget.setData( 'title', this.getValue() );
            }
          },
          {
            id : 'address1',
            type : 'text',
            label : Drupal.t('Address'),
            setup: function( widget ) {
              this.setValue( widget.data.address1 );
            },
            commit: function( widget ) {
              widget.setData( 'address1', this.getValue() );
            }
          },
          {
            id : 'address2',
            type : 'text',
            label : Drupal.t('Address'),
            setup: function( widget ) {
              this.setValue( widget.data.address2 );
            },
            commit: function( widget ) {
              widget.setData( 'address2', this.getValue() );
            }
          },
          {
            id : 'address3',
            type : 'text',
            label : Drupal.t('Address3'),
            setup: function( widget ) {
              this.setValue( widget.data.address3 );
            },
            commit: function( widget ) {
              widget.setData( 'address3', this.getValue() );
            }
          },
          {
            id : 'phone',
            type : 'text',
            label : Drupal.t('Phone Number'),
            setup: function( widget ) {
              this.setValue( widget.data.phone );
            },
            commit: function( widget ) {
              widget.setData( 'phone', this.getValue() );
            }
          }
        ]
      }
    ]
  };
});
