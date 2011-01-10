/* giza - a scientific plotting layer built on cairo
 *
 * This file is (or was) part of GIZA, a scientific plotting
 * layer built on cairo.
 * GIZA comes with ABSOLUTELY NO WARRANTY.
 * This is free software; and you are welcome to redistribute
 * it under the terms of the GNU General Public License
 * (see LICENSE file for details) and the provision that
 * this notice remains intact. If you modify this file, please
 * note section 2a) of the GPLv2 states that:
 *
 *  a) You must cause the modified files to carry prominent notices
 *     stating that you changed the files and the date of any change.
 *
 * Copyright (C) 2010 James Wetter. All rights reserved.
 * Contact: wetter.j@gmail.com
 *
 */

#include <giza.h>

int
main ()
{
  giza_open_device ("?", "window");

  giza_set_window (0., 10., 0., 10.);
  giza_box ("BCNT", 0., 0, "BCNT", 0., 0);
  giza_change_page ();
  giza_set_window (-10., 10., 0., 10000.);
  giza_box ("BCNT", 0., 0, "BCNT", 0., 0);
  giza_change_page ();
  giza_set_window_equal_scale (0., 10., 0., 20.);
  giza_box ("BCNT", 0., 0, "BCNT", 0., 0);
  giza_change_page ();

  giza_close_device ();
}
