#ifndef NVE4_COMPUTE_XML
#define NVE4_COMPUTE_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://0x04.net/cgit/index.cgi/rules-ng-ng
git clone git://0x04.net/rules-ng-ng

The rules-ng-ng source files this header was generated from are:
- nve4_compute.xml (  10168 bytes, from 2013-06-04 13:57:02)
- copyright.xml    (   6452 bytes, from 2012-04-16 22:51:01)
- nvchipsets.xml   (   3954 bytes, from 2013-06-04 13:57:02)
- nv_object.xml    (  14395 bytes, from 2013-06-04 13:57:02)
- nv_defs.xml      (   4437 bytes, from 2012-04-16 22:51:01)
- nv50_defs.xml    (  16877 bytes, from 2013-07-17 09:10:01)
- nve4_p2mf.xml    (   2373 bytes, from 2013-06-04 13:57:02)

Copyright (C) 2006-2013 by the following authors:
- Artur Huillet <arthur.huillet@free.fr> (ahuillet)
- Ben Skeggs (darktama, darktama_)
- B. R. <koala_br@users.sourceforge.net> (koala_br)
- Carlos Martin <carlosmn@users.sf.net> (carlosmn)
- Christoph Bumiller <e0425955@student.tuwien.ac.at> (calim, chrisbmr)
- Dawid Gajownik <gajownik@users.sf.net> (gajownik)
- Dmitry Baryshkov
- Dmitry Eremin-Solenikov <lumag@users.sf.net> (lumag)
- EdB <edb_@users.sf.net> (edb_)
- Erik Waling <erikwailing@users.sf.net> (erikwaling)
- Francisco Jerez <currojerez@riseup.net> (curro)
- imirkin <imirkin@users.sf.net> (imirkin)
- jb17bsome <jb17bsome@bellsouth.net> (jb17bsome)
- Jeremy Kolb <kjeremy@users.sf.net> (kjeremy)
- Laurent Carlier <lordheavym@gmail.com> (lordheavy)
- Luca Barbieri <luca@luca-barbieri.com> (lb, lb1)
- Maarten Maathuis <madman2003@gmail.com> (stillunknown)
- Marcin Kościelnicki <koriakin@0x04.net> (mwk, koriakin)
- Mark Carey <mark.carey@gmail.com> (careym)
- Matthieu Castet <matthieu.castet@parrot.com> (mat-c)
- nvidiaman <nvidiaman@users.sf.net> (nvidiaman)
- Patrice Mandin <patmandin@gmail.com> (pmandin, pmdata)
- Pekka Paalanen <pq@iki.fi> (pq, ppaalanen)
- Peter Popov <ironpeter@users.sf.net> (ironpeter)
- Richard Hughes <hughsient@users.sf.net> (hughsient)
- Rudi Cilibrasi <cilibrar@users.sf.net> (cilibrar)
- Serge Martin
- Simon Raffeiner
- Stephane Loeuillet <leroutier@users.sf.net> (leroutier)
- Stephane Marchesin <stephane.marchesin@gmail.com> (marcheu)
- sturmflut <sturmflut@users.sf.net> (sturmflut)
- Sylvain Munaut <tnt@246tNt.com>
- Victor Stinner <victor.stinner@haypocalc.com> (haypo)
- Wladmir van der Laan <laanwj@gmail.com> (miathan6)
- Younes Manton <younes.m@gmail.com> (ymanton)

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE COPYRIGHT OWNER(S) AND/OR ITS SUPPLIERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/




#define NVE4_COMPUTE_UNK0144					0x00000144

#define NVE4_COMPUTE_UPLOAD					0x00000000

#define NVE4_COMPUTE_UPLOAD_LINE_LENGTH_IN			0x00000180

#define NVE4_COMPUTE_UPLOAD_LINE_COUNT				0x00000184

#define NVE4_COMPUTE_UPLOAD_DST_ADDRESS_HIGH			0x00000188

#define NVE4_COMPUTE_UPLOAD_DST_ADDRESS_LOW			0x0000018c

#define NVE4_COMPUTE_UPLOAD_DST_PITCH				0x00000190

#define NVE4_COMPUTE_UPLOAD_DST_TILE_MODE			0x00000194

#define NVE4_COMPUTE_UPLOAD_DST_WIDTH				0x00000198

#define NVE4_COMPUTE_UPLOAD_DST_HEIGHT				0x0000019c

#define NVE4_COMPUTE_UPLOAD_DST_DEPTH				0x000001a0

#define NVE4_COMPUTE_UPLOAD_DST_Z				0x000001a4

#define NVE4_COMPUTE_UPLOAD_DST_X				0x000001a8

#define NVE4_COMPUTE_UPLOAD_DST_Y				0x000001ac

#define NVE4_COMPUTE_UPLOAD_EXEC				0x000001b0
#define NVE4_COMPUTE_UPLOAD_EXEC_LINEAR				0x00000001
#define NVE4_COMPUTE_UPLOAD_EXEC_UNK1__MASK			0x0000007e
#define NVE4_COMPUTE_UPLOAD_EXEC_UNK1__SHIFT			1
#define NVE4_COMPUTE_UPLOAD_EXEC_BUF_NOTIFY			0x00000300
#define NVE4_COMPUTE_UPLOAD_EXEC_UNK12__MASK			0x0000f000
#define NVE4_COMPUTE_UPLOAD_EXEC_UNK12__SHIFT			12

#define NVE4_COMPUTE_UPLOAD_DATA				0x000001b4

#define NVE4_COMPUTE_UPLOAD_QUERY_ADDRESS_HIGH			0x000001dc

#define NVE4_COMPUTE_UPLOAD_QUERY_ADDRESS_LOW			0x000001e0

#define NVE4_COMPUTE_UPLOAD_QUERY_SEQUENCE			0x000001e4

#define NVE4_COMPUTE_UPLOAD_UNK01F0				0x000001f0

#define NVE4_COMPUTE_UPLOAD_UNK01F4				0x000001f4

#define NVE4_COMPUTE_UPLOAD_UNK01F8				0x000001f8

#define NVE4_COMPUTE_UPLOAD_UNK01FC				0x000001fc

#define NVE4_COMPUTE_SHARED_BASE				0x00000214

#define NVE4_COMPUTE_MEM_BARRIER				0x0000021c
#define NVE4_COMPUTE_MEM_BARRIER_UNK0__MASK			0x00000007
#define NVE4_COMPUTE_MEM_BARRIER_UNK0__SHIFT			0
#define NVE4_COMPUTE_MEM_BARRIER_UNK4				0x00000010
#define NVE4_COMPUTE_MEM_BARRIER_UNK12				0x00001000

#define NVE4_COMPUTE_UNK0240					0x00000240

#define NVE4_COMPUTE_UNK244_TIC_FLUSH				0x00000244

#define NVE4_COMPUTE_UNK0248					0x00000248
#define NVE4_COMPUTE_UNK0248_UNK0__MASK				0x0000003f
#define NVE4_COMPUTE_UNK0248_UNK0__SHIFT			0
#define NVE4_COMPUTE_UNK0248_UNK8__MASK				0x00ffff00
#define NVE4_COMPUTE_UNK0248_UNK8__SHIFT			8

#define NVE4_COMPUTE_UNK0274					0x00000274

#define NVE4_COMPUTE_UNK0278					0x00000278

#define NVE4_COMPUTE_UNK027C					0x0000027c

#define NVE4_COMPUTE_UNK0280					0x00000280

#define NVE4_COMPUTE_UNK0284					0x00000284

#define NVE4_COMPUTE_UNK0288					0x00000288

#define NVE4_COMPUTE_UNK0290					0x00000290

#define NVE4_COMPUTE_UNK02B0					0x000002b0

#define NVE4_COMPUTE_LAUNCH_DESC_ADDRESS			0x000002b4
#define NVE4_COMPUTE_LAUNCH_DESC_ADDRESS__SHR			8

#define NVE4_COMPUTE_UNK02B8					0x000002b8

#define NVE4_COMPUTE_LAUNCH					0x000002bc

#define NVE4_COMPUTE_MP_TEMP_SIZE(i0)			       (0x000002e4 + 0xc*(i0))
#define NVE4_COMPUTE_MP_TEMP_SIZE__ESIZE			0x0000000c
#define NVE4_COMPUTE_MP_TEMP_SIZE__LEN				0x00000002

#define NVE4_COMPUTE_MP_TEMP_SIZE_HIGH(i0)		       (0x000002e4 + 0xc*(i0))

#define NVE4_COMPUTE_MP_TEMP_SIZE_LOW(i0)		       (0x000002e8 + 0xc*(i0))

#define NVE4_COMPUTE_MP_TEMP_SIZE_MASK(i0)		       (0x000002ec + 0xc*(i0))

#define NVE4_COMPUTE_UNK0310					0x00000310

#define NVE4_COMPUTE_FIRMWARE(i0)			       (0x00000500 + 0x4*(i0))
#define NVE4_COMPUTE_FIRMWARE__ESIZE				0x00000004
#define NVE4_COMPUTE_FIRMWARE__LEN				0x00000020

#define NVE4_COMPUTE_LOCAL_BASE					0x0000077c

#define NVE4_COMPUTE_TEMP_ADDRESS_HIGH				0x00000790

#define NVE4_COMPUTE_TEMP_ADDRESS_LOW				0x00000794

#define NVE4_COMPUTE_UNK0D94					0x00000d94

#define NVE4_COMPUTE_WATCHDOG_TIMER				0x00000de4

#define NVE4_COMPUTE_UNK0F44(i0)			       (0x00000f44 + 0x4*(i0))
#define NVE4_COMPUTE_UNK0F44__ESIZE				0x00000004
#define NVE4_COMPUTE_UNK0F44__LEN				0x00000004

#define NVE4_COMPUTE_UNK1040(i0)			       (0x00001040 + 0x4*(i0))
#define NVE4_COMPUTE_UNK1040__ESIZE				0x00000004
#define NVE4_COMPUTE_UNK1040__LEN				0x0000000c

#define NVE4_COMPUTE_UNK1288_TIC_FLUSH				0x00001288

#define NVE4_COMPUTE_TSC_FLUSH					0x00001330
#define NVE4_COMPUTE_TSC_FLUSH_SPECIFIC				0x00000001
#define NVE4_COMPUTE_TSC_FLUSH_ENTRY__MASK			0x03fffff0
#define NVE4_COMPUTE_TSC_FLUSH_ENTRY__SHIFT			4

#define NVE4_COMPUTE_TIC_FLUSH					0x00001334
#define NVE4_COMPUTE_TIC_FLUSH_SPECIFIC				0x00000001
#define NVE4_COMPUTE_TIC_FLUSH_ENTRY__MASK			0x03fffff0
#define NVE4_COMPUTE_TIC_FLUSH_ENTRY__SHIFT			4

#define NVE4_COMPUTE_TEX_CACHE_CTL				0x00001338
#define NVE4_COMPUTE_TEX_CACHE_CTL_UNK0				0x00000001
#define NVE4_COMPUTE_TEX_CACHE_CTL_ENTRY__MASK			0x03fffff0
#define NVE4_COMPUTE_TEX_CACHE_CTL_ENTRY__SHIFT			4

#define NVE4_COMPUTE_UNK1424_TSC_FLUSH				0x00001424

#define NVE4_COMPUTE_COND_ADDRESS_HIGH				0x00001550

#define NVE4_COMPUTE_COND_ADDRESS_LOW				0x00001554

#define NVE4_COMPUTE_COND_MODE					0x00001558
#define NVE4_COMPUTE_COND_MODE_NEVER				0x00000000
#define NVE4_COMPUTE_COND_MODE_ALWAYS				0x00000001
#define NVE4_COMPUTE_COND_MODE_RES_NON_ZERO			0x00000002
#define NVE4_COMPUTE_COND_MODE_EQUAL				0x00000003
#define NVE4_COMPUTE_COND_MODE_NOT_EQUAL			0x00000004

#define NVE4_COMPUTE_TSC_ADDRESS_HIGH				0x0000155c

#define NVE4_COMPUTE_TSC_ADDRESS_LOW				0x00001560

#define NVE4_COMPUTE_TSC_LIMIT					0x00001564

#define NVE4_COMPUTE_TIC_ADDRESS_HIGH				0x00001574

#define NVE4_COMPUTE_TIC_ADDRESS_LOW				0x00001578

#define NVE4_COMPUTE_TIC_LIMIT					0x0000157c

#define NVE4_COMPUTE_CODE_ADDRESS_HIGH				0x00001608

#define NVE4_COMPUTE_CODE_ADDRESS_LOW				0x0000160c

#define NVE4_COMPUTE_UNK1690					0x00001690

#define NVE4_COMPUTE_FLUSH					0x00001698
#define NVE4_COMPUTE_FLUSH_CODE					0x00000001
#define NVE4_COMPUTE_FLUSH_GLOBAL				0x00000010
#define NVE4_COMPUTE_FLUSH_CB					0x00001000

#define NVE4_COMPUTE_UNK1944					0x00001944

#define NVE4_COMPUTE_DELAY					0x00001a24

#define NVE4_COMPUTE_UNK1A2C(i0)			       (0x00001a2c + 0x4*(i0))
#define NVE4_COMPUTE_UNK1A2C__ESIZE				0x00000004
#define NVE4_COMPUTE_UNK1A2C__LEN				0x00000005

#define NVE4_COMPUTE_QUERY_ADDRESS_HIGH				0x00001b00

#define NVE4_COMPUTE_QUERY_ADDRESS_LOW				0x00001b04

#define NVE4_COMPUTE_QUERY_SEQUENCE				0x00001b08

#define NVE4_COMPUTE_QUERY_GET					0x00001b0c
#define NVE4_COMPUTE_QUERY_GET_MODE__MASK			0x00000003
#define NVE4_COMPUTE_QUERY_GET_MODE__SHIFT			0
#define NVE4_COMPUTE_QUERY_GET_MODE_WRITE			0x00000000
#define NVE4_COMPUTE_QUERY_GET_MODE_WRITE_INTR_NRHOST		0x00000003
#define NVE4_COMPUTE_QUERY_GET_INTR				0x00100000
#define NVE4_COMPUTE_QUERY_GET_SHORT				0x10000000

#define NVE4_COMPUTE_TEX_CB_INDEX				0x00002608

#define NVE4_COMPUTE_UNK260C					0x0000260c

#define NVE4_COMPUTE_MP_PM_SET(i0)			       (0x0000335c + 0x4*(i0))
#define NVE4_COMPUTE_MP_PM_SET__ESIZE				0x00000004
#define NVE4_COMPUTE_MP_PM_SET__LEN				0x00000008

#define NVE4_COMPUTE_MP_PM_A_SIGSEL(i0)			       (0x0000337c + 0x4*(i0))
#define NVE4_COMPUTE_MP_PM_A_SIGSEL__ESIZE			0x00000004
#define NVE4_COMPUTE_MP_PM_A_SIGSEL__LEN			0x00000004
#define NVE4_COMPUTE_MP_PM_A_SIGSEL_NONE			0x00000000
#define NVE4_COMPUTE_MP_PM_A_SIGSEL_USER			0x00000001
#define NVE4_COMPUTE_MP_PM_A_SIGSEL_LAUNCH			0x00000003
#define NVE4_COMPUTE_MP_PM_A_SIGSEL_EXEC			0x00000004
#define NVE4_COMPUTE_MP_PM_A_SIGSEL_ISSUE			0x00000005
#define NVE4_COMPUTE_MP_PM_A_SIGSEL_LDST			0x0000001b
#define NVE4_COMPUTE_MP_PM_A_SIGSEL_BRANCH			0x0000001c

#define NVE4_COMPUTE_MP_PM_B_SIGSEL(i0)			       (0x0000338c + 0x4*(i0))
#define NVE4_COMPUTE_MP_PM_B_SIGSEL__ESIZE			0x00000004
#define NVE4_COMPUTE_MP_PM_B_SIGSEL__LEN			0x00000004
#define NVE4_COMPUTE_MP_PM_B_SIGSEL_NONE			0x00000000
#define NVE4_COMPUTE_MP_PM_B_SIGSEL_WARP			0x00000002
#define NVE4_COMPUTE_MP_PM_B_SIGSEL_REPLAY			0x00000008
#define NVE4_COMPUTE_MP_PM_B_SIGSEL_TRANSACTION			0x0000000e
#define NVE4_COMPUTE_MP_PM_B_SIGSEL_L1				0x00000010
#define NVE4_COMPUTE_MP_PM_B_SIGSEL_MEM				0x00000011

#define NVE4_COMPUTE_MP_PM_SRCSEL(i0)			       (0x0000339c + 0x4*(i0))
#define NVE4_COMPUTE_MP_PM_SRCSEL__ESIZE			0x00000004
#define NVE4_COMPUTE_MP_PM_SRCSEL__LEN				0x00000008
#define NVE4_COMPUTE_MP_PM_SRCSEL_GRP0__MASK			0x00000003
#define NVE4_COMPUTE_MP_PM_SRCSEL_GRP0__SHIFT			0
#define NVE4_COMPUTE_MP_PM_SRCSEL_SIG0__MASK			0x0000001c
#define NVE4_COMPUTE_MP_PM_SRCSEL_SIG0__SHIFT			2
#define NVE4_COMPUTE_MP_PM_SRCSEL_GRP1__MASK			0x00000060
#define NVE4_COMPUTE_MP_PM_SRCSEL_GRP1__SHIFT			5
#define NVE4_COMPUTE_MP_PM_SRCSEL_SIG1__MASK			0x00000380
#define NVE4_COMPUTE_MP_PM_SRCSEL_SIG1__SHIFT			7
#define NVE4_COMPUTE_MP_PM_SRCSEL_GRP2__MASK			0x00000c00
#define NVE4_COMPUTE_MP_PM_SRCSEL_GRP2__SHIFT			10
#define NVE4_COMPUTE_MP_PM_SRCSEL_SIG2__MASK			0x00007000
#define NVE4_COMPUTE_MP_PM_SRCSEL_SIG2__SHIFT			12
#define NVE4_COMPUTE_MP_PM_SRCSEL_GRP3__MASK			0x00018000
#define NVE4_COMPUTE_MP_PM_SRCSEL_GRP3__SHIFT			15
#define NVE4_COMPUTE_MP_PM_SRCSEL_SIG3__MASK			0x000e0000
#define NVE4_COMPUTE_MP_PM_SRCSEL_SIG3__SHIFT			17
#define NVE4_COMPUTE_MP_PM_SRCSEL_GRP4__MASK			0x00300000
#define NVE4_COMPUTE_MP_PM_SRCSEL_GRP4__SHIFT			20
#define NVE4_COMPUTE_MP_PM_SRCSEL_SIG4__MASK			0x01c00000
#define NVE4_COMPUTE_MP_PM_SRCSEL_SIG4__SHIFT			22
#define NVE4_COMPUTE_MP_PM_SRCSEL_GRP5__MASK			0x06000000
#define NVE4_COMPUTE_MP_PM_SRCSEL_GRP5__SHIFT			25
#define NVE4_COMPUTE_MP_PM_SRCSEL_SIG5__MASK			0x38000000
#define NVE4_COMPUTE_MP_PM_SRCSEL_SIG5__SHIFT			27

#define NVE4_COMPUTE_MP_PM_FUNC(i0)			       (0x000033bc + 0x4*(i0))
#define NVE4_COMPUTE_MP_PM_FUNC__ESIZE				0x00000004
#define NVE4_COMPUTE_MP_PM_FUNC__LEN				0x00000008
#define NVE4_COMPUTE_MP_PM_FUNC_MODE__MASK			0x0000000f
#define NVE4_COMPUTE_MP_PM_FUNC_MODE__SHIFT			0
#define NVE4_COMPUTE_MP_PM_FUNC_MODE_LOGOP			0x00000000
#define NVE4_COMPUTE_MP_PM_FUNC_MODE_LOGOP_PULSE		0x00000001
#define NVE4_COMPUTE_MP_PM_FUNC_MODE_B6				0x00000002
#define NVE4_COMPUTE_MP_PM_FUNC_MODE_UNK3			0x00000003
#define NVE4_COMPUTE_MP_PM_FUNC_MODE_LOGOP_B6			0x00000004
#define NVE4_COMPUTE_MP_PM_FUNC_MODE_LOGOP_B6_PULSE		0x00000005
#define NVE4_COMPUTE_MP_PM_FUNC_MODE_UNK6			0x00000006
#define NVE4_COMPUTE_MP_PM_FUNC_MODE_UNK7			0x00000007
#define NVE4_COMPUTE_MP_PM_FUNC_MODE_UNK8			0x00000008
#define NVE4_COMPUTE_MP_PM_FUNC_FUNC__MASK			0x000ffff0
#define NVE4_COMPUTE_MP_PM_FUNC_FUNC__SHIFT			4

#define NVE4_COMPUTE_MP_PM_UNK33DC				0x000033dc

#define NVE4_COMPUTE_LAUNCH_DESC__SIZE				0x00000100
#define NVE4_COMPUTE_LAUNCH_DESC_6				0x00000018
#define NVE4_COMPUTE_LAUNCH_DESC_6_NOTIFY__MASK			0x00000c00
#define NVE4_COMPUTE_LAUNCH_DESC_6_NOTIFY__SHIFT		10

#define NVE4_COMPUTE_LAUNCH_DESC_PROG_START			0x00000020

#define NVE4_COMPUTE_LAUNCH_DESC_12				0x00000030
#define NVE4_COMPUTE_LAUNCH_DESC_12_GRIDDIM_X__MASK		0x7fffffff
#define NVE4_COMPUTE_LAUNCH_DESC_12_GRIDDIM_X__SHIFT		0

#define NVE4_COMPUTE_LAUNCH_DESC_GRIDDIM_YZ			0x00000034
#define NVE4_COMPUTE_LAUNCH_DESC_GRIDDIM_YZ_Y__MASK		0x0000ffff
#define NVE4_COMPUTE_LAUNCH_DESC_GRIDDIM_YZ_Y__SHIFT		0
#define NVE4_COMPUTE_LAUNCH_DESC_GRIDDIM_YZ_Z__MASK		0xffff0000
#define NVE4_COMPUTE_LAUNCH_DESC_GRIDDIM_YZ_Z__SHIFT		16

#define NVE4_COMPUTE_LAUNCH_DESC_17				0x00000044
#define NVE4_COMPUTE_LAUNCH_DESC_17_SHARED_ALLOC__MASK		0x0000ffff
#define NVE4_COMPUTE_LAUNCH_DESC_17_SHARED_ALLOC__SHIFT		0

#define NVE4_COMPUTE_LAUNCH_DESC_18				0x00000048
#define NVE4_COMPUTE_LAUNCH_DESC_18_BLOCKDIM_X__MASK		0xffff0000
#define NVE4_COMPUTE_LAUNCH_DESC_18_BLOCKDIM_X__SHIFT		16

#define NVE4_COMPUTE_LAUNCH_DESC_BLOCKDIM_YZ			0x0000004c
#define NVE4_COMPUTE_LAUNCH_DESC_BLOCKDIM_YZ_Y__MASK		0x0000ffff
#define NVE4_COMPUTE_LAUNCH_DESC_BLOCKDIM_YZ_Y__SHIFT		0
#define NVE4_COMPUTE_LAUNCH_DESC_BLOCKDIM_YZ_Z__MASK		0xffff0000
#define NVE4_COMPUTE_LAUNCH_DESC_BLOCKDIM_YZ_Z__SHIFT		16

#define NVE4_COMPUTE_LAUNCH_DESC_20				0x00000050
#define NVE4_COMPUTE_LAUNCH_DESC_20_CB_VALID__MASK		0x000000ff
#define NVE4_COMPUTE_LAUNCH_DESC_20_CB_VALID__SHIFT		0
#define NVE4_COMPUTE_LAUNCH_DESC_20_CACHE_SPLIT__MASK		0x60000000
#define NVE4_COMPUTE_LAUNCH_DESC_20_CACHE_SPLIT__SHIFT		29
#define NVE4_COMPUTE_LAUNCH_DESC_20_CACHE_SPLIT_16K_SHARED_48K_L1	0x20000000
#define NVE4_COMPUTE_LAUNCH_DESC_20_CACHE_SPLIT_32K_SHARED_32K_L1	0x40000000
#define NVE4_COMPUTE_LAUNCH_DESC_20_CACHE_SPLIT_48K_SHARED_16K_L1	0x60000000

#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_0(i0)	       (0x00000074 + 0x8*(i0))
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_0__ESIZE		0x00000008
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_0__LEN		0x00000008
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_0_ADDRESS_LOW__MASK	0xffffffff
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_0_ADDRESS_LOW__SHIFT	0

#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_1(i0)	       (0x00000078 + 0x8*(i0))
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_1__ESIZE		0x00000008
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_1__LEN		0x00000008
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_1_ADDRESS_HIGH__MASK	0x000000ff
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_1_ADDRESS_HIGH__SHIFT	0
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_1_SIZE__MASK		0xffff8000
#define NVE4_COMPUTE_LAUNCH_DESC_CB_CONFIG_1_SIZE__SHIFT	15

#define NVE4_COMPUTE_LAUNCH_DESC_45				0x000000b4
#define NVE4_COMPUTE_LAUNCH_DESC_45_LOCAL_POS_ALLOC__MASK	0x000fffff
#define NVE4_COMPUTE_LAUNCH_DESC_45_LOCAL_POS_ALLOC__SHIFT	0
#define NVE4_COMPUTE_LAUNCH_DESC_45_BARRIER_ALLOC__MASK		0xf8000000
#define NVE4_COMPUTE_LAUNCH_DESC_45_BARRIER_ALLOC__SHIFT	27

#define NVE4_COMPUTE_LAUNCH_DESC_46				0x000000b8
#define NVE4_COMPUTE_LAUNCH_DESC_46_LOCAL_NEG_ALLOC__MASK	0x000fffff
#define NVE4_COMPUTE_LAUNCH_DESC_46_LOCAL_NEG_ALLOC__SHIFT	0
#define NVE4_COMPUTE_LAUNCH_DESC_46_GPR_ALLOC__MASK		0x3f000000
#define NVE4_COMPUTE_LAUNCH_DESC_46_GPR_ALLOC__SHIFT		24

#define NVE4_COMPUTE_LAUNCH_DESC_47				0x000000bc
#define NVE4_COMPUTE_LAUNCH_DESC_47_WARP_CSTACK_SIZE__MASK	0x000fffff
#define NVE4_COMPUTE_LAUNCH_DESC_47_WARP_CSTACK_SIZE__SHIFT	0


#endif /* NVE4_COMPUTE_XML */
