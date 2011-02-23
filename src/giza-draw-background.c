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
 * Copyright (C) 2010-2011 James Wetter and Daniel Price. All rights reserved.
 * Contact: wetter.j@gmail.com
 *          daniel.price@monash.edu
 *
 */

#include "giza-private.h"
#include "giza-io-private.h"
#include <giza.h>

/**
 * Drawing: giza_draw_background
 *
 * Synopsis: Redraws the background of the currently open device (erase)
 *
 */
void
giza_draw_background (void)
{
  if (!_giza_check_device_ready ("giza_draw_background"))
    return;

  int oldCi;
  giza_get_colour_index (&oldCi);

  cairo_save (context);
  cairo_reset_clip (context);
  giza_set_colour_index (0);
  cairo_paint (context);
  cairo_restore (context);

  giza_set_colour_index (oldCi);
  return;
}