/*         ______   ___    ___
 *        /\  _  \ /\_ \  /\_ \
 *        \ \ \L\ \\//\ \ \//\ \      __     __   _ __   ___
 *         \ \  __ \ \ \ \  \ \ \   /'__`\ /'_ `\/\`'__\/ __`\
 *          \ \ \/\ \ \_\ \_ \_\ \_/\  __//\ \L\ \ \ \//\ \L\ \
 *           \ \_\ \_\/\____\/\____\ \____\ \____ \ \_\\ \____/
 *            \/_/\/_/\/____/\/____/\/____/\/___L\ \/_/ \/___/
 *                                           /\____/
 *                                           \_/__/
 *
 *      Compiled sprite routines for some unknown platforms.
 *
 *      By Michael Bukin.
 *
 *      See readme.txt for copyright information.
 */


#include "allegro.h"



/* get_compiled_sprite:
 *  Creates a compiled sprite based on the specified bitmap.
 */
COMPILED_SPRITE *get_compiled_sprite(AL_CONST BITMAP *bitmap, int planar)
{
   return get_rle_sprite((BITMAP *)bitmap);
}



/* destroy_compiled_sprite:
 *  Destroys a compiled sprite structure returned by get_compiled_sprite().
 */
void destroy_compiled_sprite(COMPILED_SPRITE *sprite)
{
   destroy_rle_sprite(sprite);
}



/* draw_compiled_sprite:
 *  Draws a compiled sprite onto the specified bitmap at the specified
 *  position.
 */
void draw_compiled_sprite(BITMAP *dst, AL_CONST COMPILED_SPRITE *src, int x, int y)
{
   draw_rle_sprite(dst, (COMPILED_SPRITE *)src, x, y);
}

