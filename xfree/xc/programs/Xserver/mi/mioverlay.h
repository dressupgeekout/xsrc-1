/* $XFree86: xc/programs/Xserver/mi/mioverlay.h,v 3.3 2000/02/29 00:16:03 mvojkovi Exp $ */

#ifndef __MIOVERLAY_H
#define __MIOVERLAY_H

typedef void (*miOverlayTransFunc)(ScreenPtr, int, BoxPtr);

Bool
miInitOverlay(
   ScreenPtr pScreen, 
   int overlayDepth, 
   miOverlayTransFunc trans
);

Bool
miOverlayGetPrivateClips(
    WindowPtr pWin,
    RegionPtr *borderClip,
    RegionPtr *clipList
);

Bool miOverlayCollectUnderlayRegions(WindowPtr, RegionPtr*);
void miOverlayComputeCompositeClip(GCPtr, WindowPtr);
Bool miOverlayCopyUnderlay(ScreenPtr);
void miOverlaySetTransFunction(ScreenPtr, miOverlayTransFunc);
void miOverlaySetRootClip(ScreenPtr, Bool);

#endif /* __MIOVERLAY_H */
