/*
 * CG14 framebuffer - defines.
 *
 * Copyright (C) 2000 Jakub Jelinek (jakub@redhat.com)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * JAKUB JELINEK BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
/* $XFree86: xc/programs/Xserver/hw/xfree86/drivers/suncg14/cg14.h,v 1.2 2001/03/03 22:41:33 tsi Exp $ */

#ifndef CG14_H
#define CG14_H

#include "xf86.h"
#include "xf86_OSproc.h"
#include "xf86RamDac.h"
#include <X11/Xmd.h>
#include "gcstruct.h"
#include "xf86sbusBus.h"

/* Various offsets in virtual (ie. mmap()) spaces Linux and Solaris support. */
#define CG14_REGS_VOFF		0x00000000	/* registers */
#define CG14_XLUT_VOFF		0x00003000	/* X Look Up Table */
#define CG14_CLUT1_VOFF		0x00004000	/* Color Look Up Table */
#define CG14_CLUT2_VOFF		0x00005000	/* Color Look Up Table */
#define CG14_CLUT3_VOFF		0x00006000	/* Color Look Up Table */
#define CG14_DIRECT_VOFF	0x10000000
#define CG14_CTLREG_VOFF	0x20000000
#define CG14_CURSOR_VOFF	0x30000000
#define CG14_SHDW_VRT_VOFF	0x40000000
#define CG14_XBGR_VOFF		0x50000000
#define CG14_BGR_VOFF		0x60000000
#define CG14_X16_VOFF		0x70000000
#define CG14_C16_VOFF		0x80000000
#define CG14_X32_VOFF		0x90000000
#define CG14_B32_VOFF		0xa0000000
#define CG14_G32_VOFF		0xb0000000
#define CG14_R32_VOFF		0xc0000000

/* Hardware cursor map */
#define CG14_CURS_SIZE		32
struct cg14curs {
	volatile uint32_t	curs_plane0[CG14_CURS_SIZE];	/* plane 0 */
	volatile uint32_t	curs_plane1[CG14_CURS_SIZE];
	volatile uint8_t	curs_ctl;	/* control register */
#define CG14_CURS_ENABLE	0x4
#define CG14_CURS_DOUBLEBUFFER	0x2 		/* use X-channel for curs */
	volatile uint8_t	pad0[3];
	volatile uint16_t	curs_x;		/* x position */
	volatile uint16_t	curs_y;		/* y position */
	volatile uint32_t	curs_color1;	/* color register 1 */
	volatile uint32_t	curs_color2;	/* color register 2 */
	volatile uint32_t	pad[444];	/* pad to 2KB boundary */
	volatile uint32_t	curs_plane0incr[CG14_CURS_SIZE]; /* autoincr */
	volatile uint32_t	curs_plane1incr[CG14_CURS_SIZE]; /* autoincr */
};

typedef struct {
	unsigned char	*fb;
	unsigned char	*x32;
	unsigned char	*xlut;
	struct cg14curs	*curs;
	int		width;
	int		height;
	int		use_shadow;
	int		HWCursor;
	void *		shadow;
	sbusDevicePtr	psdp;
	CloseScreenProcPtr CloseScreen;
	CreateScreenResourcesProcPtr CreateScreenResources;
	OptionInfoPtr	Options;
	xf86CursorInfoPtr	CursorInfoRec;
} Cg14Rec, *Cg14Ptr;

Bool CG14SetupCursor(ScreenPtr);

#define GET_CG14_FROM_SCRN(p)    ((Cg14Ptr)((p)->driverPrivate))

/*
 * This should match corresponding definition in Solaris's
 * '/usr/include/sys/cg14io.h'.
 */
#ifdef __NetBSD__
#include <dev/sun/fbio.h>
#include <sys/ioccom.h>
#define CG14_SET_PIXELMODE	_IOW('M', 3, int)
#else
#define CG14_SET_PIXELMODE	(('M' << 8) | 3)
#endif

#endif /* CG14_H */