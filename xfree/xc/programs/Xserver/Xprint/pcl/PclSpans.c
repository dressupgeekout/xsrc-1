/* $XConsortium: PclSpans.c /main/2 1996/12/30 14:57:17 kaleb $ */
/*******************************************************************
**
**    *********************************************************
**    *
**    *  File:		PclSpans.c
**    *
**    *  Contents:
**    *                 Code to set and fill spans in the PCL DDX
**    *
**    *  Created:	10/23/95
**    *
**    *********************************************************
**
********************************************************************/
/*
(c) Copyright 1996 Hewlett-Packard Company
(c) Copyright 1996 International Business Machines Corp.
(c) Copyright 1996 Sun Microsystems, Inc.
(c) Copyright 1996 Novell, Inc.
(c) Copyright 1996 Digital Equipment Corp.
(c) Copyright 1996 Fujitsu Limited
(c) Copyright 1996 Hitachi, Ltd.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the names of the copyright holders shall
not be used in advertising or otherwise to promote the sale, use or other
dealings in this Software without prior written authorization from said
copyright holders.
*/
/* $XFree86: xc/programs/Xserver/Xprint/pcl/PclSpans.c,v 1.5 1999/12/13 02:12:57 robin Exp $ */


#include "Pcl.h"
#include "gcstruct.h"
#include "windowstr.h"

void
PclFillSpans(
     DrawablePtr pDrawable,
     GCPtr pGC,
     int nSpans,
     DDXPointPtr pPoints,
     int *pWidths,
     int fSorted)
{
    char t[80];
    FILE *outFile;
    int xoffset, yoffset;
    xRectangle *rects, *r;
    RegionPtr fillRegion, region = 0;
    int i;
    int nbox;
    BoxPtr pbox;

    if( PclUpdateDrawableGC( pGC, pDrawable, &outFile ) == FALSE )
      return;

    /*
     * Build a region out of the spans
     */
    rects = (xRectangle *)xalloc( nSpans * sizeof( xRectangle ) );
    xoffset = pDrawable->x;
    yoffset = pDrawable->y;

    for( i = 0, r = rects; i < nSpans; i++, r++ )
      {
	  r->x = pPoints[i].x + xoffset;
	  r->y = pPoints[i].y + yoffset;
	  r->width = pWidths[i];
	  r->height = 1;
      }
    fillRegion = RECTS_TO_REGION( pGC->pScreen, nSpans, rects, ( fSorted ) ?
				 CT_YSORTED : CT_UNSORTED );

    /*
     * Intersect this region with the clip region.  Whatever's left,
     * should be filled.
     */
    REGION_INTERSECT( pGC->pScreen, region, fillRegion, pGC->clientClip );

    pbox = REGION_RECTS( region );
    nbox = REGION_NUM_RECTS( region );

    /* Enter HP-GL/2 */
    SEND_PCL( outFile, "\27%0B" );

    while( nbox )
      {
	  sprintf( t, "PU%d,%d;RR%d,%d;", pbox->x1, pbox->y1,
		  pbox->x2, pbox->y2 );
	  SEND_PCL( outFile, t );

	  nbox--;
	  pbox++;
      }

    /* Go back to PCL */
    SEND_PCL( outFile, "\27%0A" );

    /*
     * Clean up the temporary regions
     */
    REGION_DESTROY( pGC->pScreen, fillRegion );
    REGION_DESTROY( pGC->pScreen, region );
    xfree( rects );
}

void
PclSetSpans(
     DrawablePtr pDrawable,
     GCPtr pGC,
     char *pSrc,
     DDXPointPtr pPoints,
     int *pWidths,
     int nSpans,
     int fSorted)
{
}
