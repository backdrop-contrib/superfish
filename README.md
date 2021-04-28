Superfish
=========

The module integrates jQuery Superfish plug-in to Backdrop CMS.

Installation
------------
- Install this module using the official Backdrop CMS instructions at https://backdropcms.org/guide/modules.

- Visit the configuration page under Configuration > User interface > Superfish (admin/config/user-interface/superfish) and set number of Superfish blocks.

- Go to Configuration > Layouts > choose a layout > Manage blocks > add a Superfish block to any section of your Backdrop website.

- Configure the block's Superfish settings as you like, save the block and check the Superfish menu.


How to style
------------
If you know CSS, even basics of it, designing won't be a big challenge.

Here are some tips and tricks:

A) Always use a DOM inspector utility (such as Firebug).

B) Set the "Menu delay" option to a very high number such as 99999999.
   This will give you enough time to work with sub-menus.

C) If you are not using the built-in styles, set the "Style" option to "None".

D) Utilise the "Simple" style as reference; add the newly-created CSS file
   either to your theme CSS or as a new CSS file under the styles directory in
   the Superfish library (probably "sites/all/libraries/superfish/style");
   putting it in the styles folder will automatically add it to the styles list
   in the block configuration.


Issues
------

Bugs and Feature requests should be reported in the Issue Queue:
https://github.com/backdrop-contrib/foo-project/issues.


Current Maintainers
-------------------

- [Alan Mels](https://github.com/alanmels).
- Seeking additional maintainers.

Credits
-------

- Ported to Backdrop CMS by [Alan Mels](https://github.com/alanmels).
- Maintained for Drupal by [mehrpadin](https://github.com/mehrpadin).
- Sponsored by [AltaGrade](https://www.altagrade.com)

License
-------

This project is GPL v2 software.
See the LICENSE.txt file in this directory for complete text.


