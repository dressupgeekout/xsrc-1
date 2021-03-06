/*
 * Copyright 1998-2008 VIA Technologies, Inc. All Rights Reserved.
 * Copyright 2001-2008 S3 Graphics, Inc. All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sub license,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHOR(S) OR COPYRIGHT HOLDER(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

/*************************************************************************
 *
 *  File:       via_regs.c
 *  Content:    The defines of Via registers
 *
 ************************************************************************/

#ifndef _VIA_REGS_H_
#define _VIA_REGS_H_ 1

#include "via_driver.h"

/*#define VIA_SERIES(chip)  (chip == VIA_CLE266)*/


/* Chip tags.  These are used to group the adapters into
 * related families.
 */

enum VIACHIPTAGS {
    VIA_UNKNOWN = 0,
    VIA_CLE266,
    VIA_KM400,
    VIA_K8M800,
    VIA_PM800,
    VIA_P4M800PRO,  /* VT3314 */
    VIA_CX700,      /* VT3324 */
#ifdef VIA_VT3293_SUPPORT
    VIA_CN750,      /* VT3293 */
#endif
    VIA_P4M890,     /* VT3327 */
    VIA_K8M890,     /* VT3336 */
    VIA_P4M900,     /* VT3364 */
    VIA_VX800,      /* VT3353 */
    VIA_VX855,      /* VT3409*/
    VIA_VX900,      /* VT3410*/
    VIA_LAST
};


#define PCI_VIA_VENDOR_ID       0x1106

#define PCI_CHIP_CLE3122        0x3122	/* CLE266 */
#define PCI_CHIP_VT3205         0x7205	/* KM400 */
#define PCI_CHIP_VT3204         0x3108	/* K8M800 */
#define PCI_CHIP_VT3259         0x3118	/* PM800 */
#define PCI_CHIP_VT3314         0x3344	/* P4M800 Pro */
#define PCI_CHIP_VT3324         0x3157	/* CX700 */
#ifdef VIA_VT3293_SUPPORT
#define PCI_CHIP_VT3293         0x3225  /* CN750 */
#endif
#define PCI_CHIP_VT3327         0x3343	/* P4M890 */
#define PCI_CHIP_VT3336         0x3230  /* K8M890 */
#define PCI_CHIP_VT3364         0x3371	/* P4M900 */
#define PCI_CHIP_VT3353         0x1122	/* VX800 */
#define PCI_CHIP_VT3409         0x5122	/* VX855/VX875 */
#define PCI_CHIP_VT3410         0x7122	/* VX900 */

/* There is some conflicting information about the two major revisions of
 * the CLE266, often labelled Ax and Cx.  The dividing line seems to be
 * either 0x0f or 0x10. */
#define CLE266_REV_IS_AX(x) ((x) < 0x10)
#define CLE266_REV_IS_CX(x) ((x) >= 0x10)

#define BIOS_BSIZE              1024
#define BIOS_BASE               0xc0000


#define VIA_MMIO_REGSIZE        0xD000    /* DisplayPort: 0xC610~0xC7D4 */
#define VIA_MMIO_REGBASE        0x0
#define VIA_MMIO_VGABASE        0x8000
#define VIA_MMIO_BLTBASE        0x200000
#define VIA_MMIO_BLTSIZE        0x200000

#define VIA_MMIO_INTEGRATED_TV_BASE     0xC000
#define VIA_MMIO_INTEGRATED_TV_SIZE     256

/* defines for VIA 2D registers */
#define VIA_REG_GECMD           0x000
#define VIA_REG_GEMODE          0x004
#define VIA_REG_GESTATUS        0x004       /* as same as VIA_REG_GEMODE */
#define VIA_REG_SRCPOS          0x008
#define VIA_REG_DSTPOS          0x00C
#define VIA_REG_LINE_K1K2       0x008
#define VIA_REG_LINE_XY         0x00C
#define VIA_REG_DIMENSION       0x010       /* width and height */
#define VIA_REG_PATADDR         0x014
#define VIA_REG_FGCOLOR         0x018
#define VIA_REG_DSTCOLORKEY     0x018       /* as same as VIA_REG_FG */
#define VIA_REG_BGCOLOR         0x01C
#define VIA_REG_SRCCOLORKEY     0x01C       /* as same as VIA_REG_BG */
#define VIA_REG_CLIPTL          0x020       /* top and left of clipping */
#define VIA_REG_CLIPBR          0x024       /* bottom and right of clipping */
#define VIA_REG_OFFSET          0x028
#define VIA_REG_LINE_ERROR      0x028
#define VIA_REG_KEYCONTROL      0x02C       /* color key control */
#define VIA_REG_SRCBASE         0x030
#define VIA_REG_DSTBASE         0x034
#define VIA_REG_PITCH           0x038       /* pitch of src and dst */
#define VIA_REG_MONOPAT0        0x03C
#define VIA_REG_MONOPAT1        0x040
#define VIA_REG_ROT_TMP_ADDR    0x044       /* Rotation Temporary Base Address */
#define VIA_REG_ROTSRC          0x048       /* Resolution X,Y of Rotation Source */
#define VIA_REG_ROT_TMP_PITCH   0x04C       /* Pitch of Rotation Temporary Memory */
#define VIA_REG_ROTDST          0x050       /* Resolution X,Y of Rotation Destination*/
#define VIA_REG_COLORPAT        0x100       /* from 0x100 to 0x1ff */

/* defines for VIA 2D registers for vt3353 (M1 engine)*/
#define VIA_REG_GECMD_M1            0x000
#define VIA_REG_GEMODE_M1           0x004
#define VIA_REG_GESTATUS_M1         0x004       /* as same as VIA_REG_GEMODE + rotate 410*/
#define VIA_REG_PITCH_M1            0x008       /* pitch of src and dst */
#define VIA_REG_DIMENSION_M1        0x00C       /* width and height */
#define VIA_REG_DSTPOS_M1           0x010
#define VIA_REG_LINE_XY_M1          0x010
#define VIA_REG_DSTBASE_M1          0x014
#define VIA_REG_SRCPOS_M1           0x018
#define VIA_REG_LINE_K1K2_M1        0x018
#define VIA_REG_SRCBASE_M1          0x01C
#define VIA_REG_PATADDR_M1          0x020
#define VIA_REG_MONOPAT0_M1         0x024
#define VIA_REG_MONOPAT1_M1         0x028
#define VIA_REG_OFFSET_M1           0x02C
#define VIA_REG_LINE_ERROR_M1       0x02C
#define VIA_REG_CLIPTL_M1           0x040       /* top and left of clipping */
#define VIA_REG_CLIPBR_M1           0x044       /* bottom and right of clipping */
#define VIA_REG_KEYCONTROL_M1       0x048       /* color key control */
#define VIA_REG_FGCOLOR_M1          0x04C
#define VIA_REG_DSTCOLORKEY_M1      0x04C       /* as same as VIA_REG_FG */
#define VIA_REG_BGCOLOR_M1          0x050
#define VIA_REG_SRCCOLORKEY_M1      0x050       /* as same as VIA_REG_BG */
#define VIA_REG_MONOPATFGC_M1       0x058       /* VT3353 Add Backgroung color of Pattern. */
#define VIA_REG_MONOPATBGC_M1       0x05C       /* VT3353 Add Foregroung color of Pattern. */
#define VIA_REG_COLORPAT_M1         0x100       /* from 0x100 to 0x1ff */

/*410*/
#define VIA_REG_CFC                 0x030
#define VIA_REG_SCALEFACTOR         0x034
#define VIA_REG_SCALINGMODE         0x038
#define VIA_REG_23DIDCLT            0x060
#define VIA_REG_23DWAITCLT          0x06C
/* defines for VIA video registers */
#define VIA_REG_INTERRUPT       0x200
#define VIA_REG_CRTCSTART       0x214


/* defines for VIA HW cursor registers */
#define VIA_REG_CURSOR_MODE     0x2D0
#define VIA_REG_CURSOR_POS      0x2D4
#define VIA_REG_CURSOR_ORG      0x2D8
#define VIA_REG_CURSOR_BG       0x2DC
#define VIA_REG_CURSOR_FG       0x2E0


/* defines for VIA 3D registers */
#define VIA_REG_STATUS          0x400
#define VIA_REG_TRANSET         0x43C
#define VIA_REG_TRANSPACE       0x440

/* VIA_REG_STATUS(0x400): Engine Status */
#define VIA_CMD_RGTR_BUSY       0x00000080  /* Command Regulator is busy */
#define VIA_2D_ENG_BUSY         0x00000002  /* 2D Engine is busy */
#define VIA_3D_ENG_BUSY         0x00000001  /* 3D Engine is busy */
#define VIA_VR_QUEUE_EMPTY  0x00020000 /* Virtual Queue is empty */

/* VIA_REG_STATUS(0x400): Engine Status for H5 */
#define VIA_CMD_RGTR_BUSY_H5   0x00000010  /* Command Regulator is busy */
#define VIA_2D_ENG_BUSY_H5     0x00000002  /* 2D Engine is busy */
#define VIA_3D_ENG_BUSY_H5     0x00001FE1  /* 3D Engine is busy */
#define VIA_VR_QUEUE_BUSY_H5   0x00000004  /* Virtual Queue is busy */

/* VIA_REG_STATUS(0x400): Engine Status for VT3353 */
#define VIA_CMD_RGTR_BUSY_M1   0x00000010  /* Command Regulator is busy */
#define VIA_2D_ENG_BUSY_M1     0x00000002  /* 2D Engine is busy */
#define VIA_3D_ENG_BUSY_M1     0x00001FE1  /* 3D Engine is busy */
#define VIA_VR_QUEUE_BUSY_M1   0x00000004  /* Virtual Queue is busy */

/* VIA_REG_GECMD(0x00): 2D Engine Command  */
#define VIA_GEC_NOOP            0x00000000
#define VIA_GEC_BLT             0x00000001
#define VIA_GEC_LINE            0x00000005
/*410 GECMD*/
#define VIA_GEC_ALPHA               0x00000003
#define VIA_GEC_BLT_ROT             0x00000009
#define VIA_GEC_MONOTEX             0x00000002
#define VIA_GEC_ALPHA_ROT_MONOTEX   0x0000000a

#define VIA_GEC_ROT             0x00000008  /* Rotate Command */

#define VIA_GEC_SRC_XY          0x00000000
#define VIA_GEC_SRC_LINEAR      0x00000010
#define VIA_GEC_DST_XY          0x00000000
#define VIA_GEC_DST_LINRAT      0x00000020

#define VIA_GEC_SRC_FB          0x00000000
#define VIA_GEC_SRC_SYS         0x00000040
#define VIA_GEC_DST_FB          0x00000000
#define VIA_GEC_DST_SYS         0x00000080

#define VIA_GEC_SRC_MONO        0x00000100  /* source is mono */
#define VIA_GEC_PAT_MONO        0x00000200  /* pattern is mono */

#define VIA_GEC_MSRC_OPAQUE     0x00000000  /* mono src is opaque */
#define VIA_GEC_MSRC_TRANS      0x00000400  /* mono src is transparent */

#define VIA_GEC_PAT_FB          0x00000000  /* pattern is in frame buffer */
#define VIA_GEC_PAT_REG         0x00000800  /* pattern is from reg setting */

#define VIA_GEC_CLIP_DISABLE    0x00000000
#define VIA_GEC_CLIP_ENABLE     0x00001000

#define VIA_GEC_FIXCOLOR_PAT    0x00002000

#define VIA_GEC_INCX            0x00000000
#define VIA_GEC_DECY            0x00004000
#define VIA_GEC_INCY            0x00000000
#define VIA_GEC_DECX            0x00008000

#define VIA_GEC_MPAT_OPAQUE     0x00000000  /* mono pattern is opaque */
#define VIA_GEC_MPAT_TRANS      0x00010000  /* mono pattern is transparent */

#define VIA_GEC_MONO_UNPACK     0x00000000
#define VIA_GEC_MONO_PACK       0x00020000
#define VIA_GEC_MONO_DWORD      0x00000000
#define VIA_GEC_MONO_WORD       0x00040000
#define VIA_GEC_MONO_BYTE       0x00080000

#define VIA_GEC_LASTPIXEL_ON    0x00000000
#define VIA_GEC_LASTPIXEL_OFF   0x00100000
#define VIA_GEC_X_MAJOR         0x00000000
#define VIA_GEC_Y_MAJOR         0x00200000
#define VIA_GEC_QUICK_START     0x00800000


/* VIA_REG_GEMODE(0x04): GE mode */
#define VIA_GEM_8bpp            0x00000000
#define VIA_GEM_16bpp           0x00000100
#define VIA_GEM_32bpp           0x00000300
/*410 GEM*/
#define VIA_GEM_ALPHA           0x00100000
#define VIA_GEM_degree90        0x00000001
#define VIA_GEM_degree180       0x00000002
#define VIA_GEM_degree270       0x00000303
#define VIA_GEM_ALPHA_CNT_EN    0x00100000
#define VIA_GEM_SETALPHA8(cnst) (cnst>>24)<<12
/*410 SCALE*/
#define VIA_SCALEF_VFactor8(cnst)     cnst<<20
#define VIA_SCALEF_HFactor8(cnst)     cnst<<4
#define VIA_SCALEM_En                 0x80000000
#define VIA_SCALEM_Shrink             0x40000000
#define VIA_SCALEM_BW                 0x00000000
#define VIA_SCALEM_WB                 0x10000000
#define VIA_SCALEM_CC                 0x20000000
#define VIA_SCALEM_Half               0x30000000
#define VIA_SCALEM_SrcDimenH12(cnst)        (cnst-1)<<16
#define VIA_SCALEM_SrcDimenW12(cnst)        (cnst-1)<<0
/*410 CFC new 2D pipline must set ??*/
#define VIA_CFC_en                       0x80000000
#define VIA_CFC_EXT_en                   0x40000000
#define VIA_CFC_DITH_en                  0x20000000
#define VIA_CFC_DesCF16_555              0x00000000
#define VIA_CFC_DesCF16_565              0x00000100
#define VIA_CFC_DesCF32_888              0x00000000
#define VIA_CFC_DesCF32_000              0x00000100
#define VIA_CFC_SrcDep8                  0x00000000
#define VIA_CFC_SrcDep16                 0x00000050
#define VIA_CFC_SrcDep32                 0x000000c0
#define VIA_CFC_SrcCF16_555              0x00000000
#define VIA_CFC_SrcCF16_565              0x00000001
#define VIA_CFC_SrcCF32_888              0x00000000
#define VIA_CFC_SrcCF32_000              0x00000001

#define VIA_GEM_640             0x00000000   /* 640*480 */
#define VIA_GEM_800             0x00000400   /* 800*600 */
#define VIA_GEM_1024            0x00000800   /* 1024*768 */
#define VIA_GEM_1280            0x00000C00   /* 1280*1024 */
#define VIA_GEM_1600            0x00001000   /* 1600*1200 */
#define VIA_GEM_2048            0x00001400   /* 2048*1536 */

#define VIA_GEM_ROTATE_90       0x00000001   /* Rotate anticlockwise 90 degree  */
#define VIA_GEM_ROTATE_180      0x00000002   /* Rotate anticlockwise 180 degree */
#define VIA_GEM_ROTATE_270      0x00000003   /* Rotate anticlockwise 270 degree */

/* VIA_REG_PITCH(0x38): Pitch Setting */
#define VIA_PITCH_ENABLE        0x80000000


#define MAXLOOP                 0xffffff


#define VerticalRetraceWait() \
{ \
    VGAOUT8(vgaCRIndex, 0x17); \
    if (VGAIN8(vgaCRReg) & 0x80) { \
        while ((VGAIN8(vgaIOBase + 0x0a) & 0x08) == 0x00) ; \
        while ((VGAIN8(vgaIOBase + 0x0a) & 0x08) == 0x08) ; \
        while ((VGAIN8(vgaIOBase + 0x0a) & 0x08) == 0x00) ; \
    } \
}


#define VIASETREG(addr, data)   *(volatile unsigned int *)(pVia->MapBase + (addr)) = (data)
#define VIAGETREG(addr)         *(volatile unsigned int *)(pVia->MapBase + (addr))


#endif  /* _VIA_REGS_H_ */
