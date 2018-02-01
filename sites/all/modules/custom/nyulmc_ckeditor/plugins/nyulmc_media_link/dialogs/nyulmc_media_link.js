CKEDITOR.dialog.add('nyulmc_media_link', function(editor) {

  return {
    title: Drupal.t('Embed a Media Link'),
    minWidth: 400,
    minHeight: 200,
    contents: [
      {
        id: 'info',
        label : Drupal.t('Embed media link'),
        title : Drupal.t('Embed media link'),
        elements :
        [
          {
            id : 'href',
            type : 'text',
            label : Drupal.t('URL (required)'),
            validate: CKEDITOR.dialog.validate.notEmpty('URL cannot be empty.'),
            setup: function( widget ) {
              this.setValue( widget.data.href );
            },
            commit: function( widget ) {
              widget.setData( 'href', this.getValue() );
            }
          },
          {
            id : 'title',
            type : 'text',
            rows : 1,
            label : Drupal.t('Label for this link (required)'),
            validate: CKEDITOR.dialog.validate.notEmpty('Title cannot be empty.'),
            setup: function( widget ) {
              this.setValue( widget.data.title );
            },
            commit: function( widget ) {
              widget.setData( 'title', this.getValue() );
            }
          },
          {
            id : 'type',
            type : 'select',
            items: [
              [ 'PDF' ],
              [ 'Default' ]
            ],
            label : Drupal.t('Meda Type (required)'),
            validate: CKEDITOR.dialog.validate.notEmpty('Please select a type.'),
            setup: function( widget ) {
              this.setValue( widget.data.type );
            },
            commit: function( widget ) {
              widget.setData( 'type', this.getValue() );
            }
          }
        ]
      }
    ]
  };
});
