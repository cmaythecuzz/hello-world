/**
 * @license Copyright (c) 2003-2014, CKSource - Wes Hatch. All rights reserved.
 * For licensing, see LICENSE.md or http://ckeditor.com/license
 */

/**
 * @file Plugin for inserting Statistics
 */


console.log(CKEDITOR.dtd);

/* */
// stats is a body element, so it won't be wrapped by <p> tags
CKEDITOR.dtd.body['nyu:stats'] = 1;

// declare as a block element (ie. can contain other elements)
CKEDITOR.dtd.$block['nyu:stats'] = 1;
CKEDITOR.dtd.$block['stat'] = 1;
// CKEDITOR.dtd.$block['value'] = 1;
// CKEDITOR.dtd.$block['description'] = 1;

// same as above
CKEDITOR.dtd.$blockLimit['nyu:stats'] = 1;
CKEDITOR.dtd.$blockLimit['stat'] = 1;
// CKEDITOR.dtd.$blockLimit['value'] = 1;
// CKEDITOR.dtd.$blockLimit['description'] = 1;

// declaring new elements in stats, otherwise editor crashes
CKEDITOR.dtd['nyu:stats'] = {
	'stat': 1
};
CKEDITOR.dtd['stat'] = {
	'value': 1,
	'description': 1
};

CKEDITOR.dtd['value'] = {'#': 1};					// only has to have TextNode elements
CKEDITOR.dtd['description'] = {'#': 1};	// should behaves and accepts whatever "td" accepts



//CKEDITOR.dtd['description'] = CKEDITOR.dtd['td'];	// should behaves and accepts whatever "td" accepts



//CKEDITOR.stat.allowedContent =


CKEDITOR.plugins.add( 'stat', {

	icons: 'stat',

	// requires: 'dialog',
	init: function( editor ) {
		if ( editor.blockless ) { return; }


		// ---------------------------------------------------
		// COMMANDS
		// ---------------------------------------------------

		// helpers:
		function createDef( def ) {
			return CKEDITOR.tools.extend( def || {}, {
				contextSensitive: 0,				// toggle this to have menu button be active / inactive when user is focused on the element
				refresh: function( editor, path ) {
					this.setState( path.contains( 'nyu:stats', 1 ) ? CKEDITOR.TRISTATE_OFF : CKEDITOR.TRISTATE_DISABLED );
				}
			} );
		}
		function makeElement( name ) {
			return new CKEDITOR.dom.element( name, editor.document );
		};

		editor.addCommand( 'statInsert', createDef({
			exec: function( editor ) {

				var state = editor.getCommand( 'blockquote' ).state,
					selection = editor.getSelection(),
					stats = this._.selectedElement || makeElement( 'nyu:stats' ),		// <dl> ...?
					stat = stats.append( makeElement( 'stat' ) ),
					value = stat.append( makeElement( 'value' ) ),				// <dt>
					description = stat.append( makeElement( 'description' ) );	// <dd>

				value.appendBogus();
				description.appendBogus();

				// insert the stats element
				editor.insertElement( stats );
				// Override the default cursor position after insertElement to place
				// cursor inside the first cell (#7959), IE needs a while.
				setTimeout( function() {
					var firstCell = value; // new CKEDITOR.dom.element( table.$.rows[ 0 ].cells[ 0 ] );
					var range = editor.createRange();
					range.moveToPosition( firstCell, CKEDITOR.POSITION_AFTER_START );
					range.select();
				}, 0 );

				// editor.focus();
			}
		}));

		editor.addCommand( 'statDeleteRow', createDef({
			exec: function( editor, undef ) {

				var path = editor.elementPath(),
					stat = path.contains( 'stat', 1 ),
					parent,
					range;

				if ( !stat ) { return; }

				// If the parent (stats) has only one stat, remove it as well
				var parent = stat.$.parentElement;
				if ( parent.children.length == 1 ) { stat = parent; }

				// range = editor.createRange();
				// range.moveToPosition( stat, CKEDITOR.POSITION_BEFORE_START );
				stat.remove();
				// range.select();
			}
		}) );

		editor.addCommand( 'statInsertRow', createDef({
			exec: function( editor, undef ) {
				var path = editor.elementPath(),
					stat = path.contains( 'stat', 1 ),
					newStat,
					range;

				if ( !stat ) { return; }

				// range = editor.createRange();
				// range.moveToPosition( stat, CKEDITOR.POSITION_BEFORE_START );

				newStat = makeElement( 'stat' ),
				value = newStat.append( makeElement( 'value' ) ),
				description = newStat.append( makeElement( 'description' ) );

				value.appendBogus();
				description.appendBogus();

				newStat.insertAfter(stat);


				// range.select();
			}
		}) );


		// ---------------------------------------------------
		// MENU BUTTON
		// ---------------------------------------------------
    editor.ui.addButton && editor.ui.addButton( 'stat', {
			label: 'Embed Statistic',
			command: 'statInsert',
			toolbar: 'insert,30',
			icon: this.path + 'icons/stat.png'
		});



		// ---------------------------------------------------
		// STYLE
		// ---------------------------------------------------
		var csspath = this.path + 'stat.css';
		editor.on('instanceReady', function(e) {
            this.document.appendStyleSheet(csspath);
            e.editor.on('mode', function(e){
                if (e.editor.mode == 'wysiwyg') this.document.appendStyleSheet(csspath);
            });
		});
		// CKEDITOR.config.contentsCss = csspath;
		// CKEDITOR.replace('myfield');

		// CKEDITOR.replace('mytextarea', {
		// 	contentsCss : csspath
		// });

		/* NOTE: the css is inserted _once_. So, if you toggle to Source view, the css will not be reinserted
		after the page is regenerated
		*/


		// ---------------------------------------------------
		// CONTEXTUAL MENU ITEMS
		// ---------------------------------------------------

		if (editor.addMenuItems) {
			editor.addMenuGroup('statGroup', 3);

			editor.addMenuItems({
				stat : {
					label : 'Row',
					group : 'statGroup',
					order : 21,
					getItems : function() {
						return {
							stat_insertRow : CKEDITOR.TRISTATE_OFF,
							stat_deleteRow : CKEDITOR.TRISTATE_OFF
						};
					}
				},
				stat_insertRow : {
					label : 'Insert Row',
					group : 'statGroup',
					command : 'statInsertRow',
					order : 22
				},
				stat_deleteRow : {
					label : 'Delete Row',
					group : 'statGroup',
					command : 'statDeleteRow',
					order : 23
				}
			});
		}

		// If the "contextmenu" plugin is loaded, register the listeners.
		if (editor.contextMenu) {
			editor.contextMenu.addListener( function(el, selection) {

				var parent = el.$.parentElement.tagName.toLowerCase();
				if (parent != 'stat') { return null; }

				return {
					stat: CKEDITOR.TRISTATE_OFF
				};
			} );
		}



	}
} );
