; $Id: README.txt,v 1.1.2.1 2008/12/14 10:59:12 davebv Exp $

-- Sumary --

Slide Show CS is a module which provides a block with a fancy slide show effect.

The module uses jQuery plugin Cross-Slide (http://www.gruppo4.com/~tobia/cross-slide.shtml).

Several parameters can be customized such as the images to display, zooming, position, transition...

Currently, the order of the slideshow is given by the alphabetical name of the file. (Thus it is recommended you name the files 01_somethinhere.png, 02_somethinhere.png...etc)

The image formats supported are the same supported by drupal core.


-- Configuration --

To make it work, just upload the images in a server folder (with public access permission, and should be a good idea to store them in the files/slideshowcs path, default filesystem).

Then, go to http://example.com/admin/settings/slideshowcs and set the folder of the images you wan to display.

Once the folder is set properly, they should appear the images you have in it like the screenshot.

You can also tweak the height of the block (which will expand to the width of the div you are embedding it)

Fade parameter indicates the duration of the transition between pictures.

If you do not want all the images to do the slideshow, just uncheck the "enable" checkbox.

Then you can tweak the rest of the parameters:

X refers to the initial position, in percentage.
Y refers to the final position.
Zoom is the size of the shown picture relatively to its original size
Time is how long the picture is displayed
Once you have configured these parameters, you can go to admin/build/block and select "Slideshow CS block" to put on the region you want.

If you have problems with the images not being displayed, try to insert "/" at the beginning of the path, and save it again. Then, the path should be parsed ok now.

-- Customization --

If you want to tweak the CSS, oveeride:

id=slideshowcs-outer