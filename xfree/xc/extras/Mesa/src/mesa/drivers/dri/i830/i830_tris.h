/*
 * GLX Hardware Device Driver for Intel i810
 * Copyright (C) 1999 Keith Whitwell
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * KEITH WHITWELL, OR ANY OTHER CONTRIBUTORS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
 * OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Adapted for use in the I830M:
 *   Jeff Hartmann <jhartmann@2d3d.com>
 */
/* $XFree86: xc/extras/Mesa/src/mesa/drivers/dri/i830/i830_tris.h,v 1.1.1.1 2004/04/08 09:17:00 alanh Exp $ */

#ifndef I830TRIS_INC
#define I830TRIS_INC

#include "mtypes.h"

extern void i830PrintRenderState( const char *msg, GLuint state );
extern void i830InitTriFuncs( GLcontext *ctx );
extern void i830RasterPrimitive( GLcontext *ctx, GLenum rprim, GLuint hwprim );

#endif
