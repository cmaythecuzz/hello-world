NYULMC Fixtures
---------------------------------

This directory is where we store the import files for fixtures. Any time we
want to export data to a fixture file, we'll save it here, in a precise format,
with one file for each content type. E.G. fixture_node_articles.txt contains
*ALL* articles we want to import as fixtures. If you want to add more article
fixtures, you must update (or replace) the existing file.


Namespacing:
-------------

Fixture files, like everything else in Drupal, should be namespaced. this simply means we prefix the file name wi our module name, so we don't overwite any other files.

So:

 - All fixture files should begin with: fixture, followed by the type of entity
   it is. It should almost always be a node.
 - Next, the bundle (type) or vocabulary. For an article node, we would do:

   fixture_node_articles.txt

 - Notice that even though the content type is article, we save it in the
   plural, articles. A fixture can contain one or many items, so we'll always
   make it plural.
 - There should be no more than one fixture file per entity/type of content,
   under normal circumstances.


Drush & the Command Line:
--------------------------

In all the examples below, we're on the command line. Unless told otherwise,
you should never add spaces. We add spaces between parameters. If you add a
space after an equal sign, such as (--file= my/path), Drush will assume you are
assigning file an empty value, and you may get an error.


Export:
--------

Both exporting and importing are done in DRUSH, on the command line.
For any nodes, we use the Node Export module. In drush, this is accomplished
using:

drush ne-export

We'll need to add some parameters to this, but this is the basic command. Make
sure you run this somewhere within the Drupal subdirectory.

Attributes:
  --file=path/to/export  -- This should always point to the directory of the
  fixtures, and include the target filename where these will be saved.
  E.G. In case of articles, we'd do:
    sites/all/modules/features/nyulmc_fixtures/fixture_node_articles.txt

  --uri=your_drupal_host -- This must be specified to let Drush and Drupal know
  which Drupal host you are using. In the case where we are exporting images in
  our content, not specifying this will cause an error, and export corrupt data.
  E.G. In case of our local instance, use: cms.nyulangone.dev

  --type=your_content_type -- This tells Node Export to export ALL nodes of
  this type. So, when exporting doctor profiles, our type would be:
  doctor_profile.
  <!> IMPORTANT: If you type this incorrectly, it will ignore this parameter,
  and export ALL NODES IN THE SYSTEM. ALWAYS CHECK YOUR OUTPUT,
  and confirm this type is correct.

  Examples:

  Export by node IDs:

  drush --uri=cms.nyulangone.dev ne-export 1 2 3 --file=sites/all/modules/features/nyulmc_fixtures/fixture_my_nodes.txt

     The important part here is: ne-export 1 2 3. Each NODE ID you want to
     export is listed here, with a space between each. In this example, we are
     exporting nodes with the ID or 1, 2, and 3.

  Export by node type:

  drush --uri=cms.nyulangone.dev ne-export --type=doctor_profile --file=sites/all/modules/features/nyulmc_fixtures/fixture_node_doctor_profiles.txt

     Here, we're exporting all doctor profiles, and saving them to the existing
     fixture file. We specify --type=node_type, and not individual IDs.



Import:
--------

Unless you're creating a new type of export, everything's probably set up in
Vagrant to automate the fixture import during a Vagrant provision. If you need
to do an import manually, it's another simple Drush command.

drush --uri=cms.nyulangone.dev ne-import --file=sites/all/modules/features/nyulmc_fixtures/fixture_node_doctor_profiles.txt

Here, we're simply importing everything in the specified file. If it's not in
the file, it's not being imported. Every time you run this command, all data in
the fixture file is imported. If the node already exists in the system, a new
compy is created. If the node ID already exists in the system, we import this
under a new node ID.

That's it! If you need to create an automatic fixture setup during a vagrant
provision, you simply create a task, and use this command inside the task.
Nothing special to know. Setting up a vagrant deployment task is beyond the
scope of this document.



Export Quick Tasks:
-------------------

Articles:
drush --uri=cms.nyulangone.dev ne-export --type=article --file=sites/all/modules/features/nyulmc_fixtures/fixture_node_articles.txt -y

Locations:
drush --uri=cms.nyulangone.dev ne-export --type=location --file=sites/all/modules/features/nyulmc_fixtures/fixture_node_locations.txt -y


Menu Structures -- Articles:
drush --uri=cms.nyulangone.dev menu-export sites/all/modules/features/nyulmc_fixtures/fixture_menu_articles.txt menu-articles

Menu Structures -- Locations:
drush --uri=cms.nyulangone.dev menu-export sites/all/modules/features/nyulmc_fixtures/fixture_menu_locations.txt menu-locations
