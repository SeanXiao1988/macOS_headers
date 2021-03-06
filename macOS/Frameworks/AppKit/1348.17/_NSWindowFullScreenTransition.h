//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/_NSFullScreenTransition.h>

@class NSWindow;

__attribute__((visibility("hidden")))
@interface _NSWindowFullScreenTransition : _NSFullScreenTransition
{
    NSWindow *_transitionedWindow;
}

+ (id)fullScreenWindowTarget:(id)arg1;
+ (id)_fullScreenInstanceInSpace:(unsigned long long)arg1;
@property(retain) NSWindow *transitionedWindow; // @synthesize transitionedWindow=_transitionedWindow;
- (void)dealloc;
- (void)failedToEnterFullScreenWithAnimation:(BOOL)arg1 whichIsKitAnimation:(BOOL)arg2;
- (void)exitFullScreenTransitionFinished;
- (void)exitFullScreenStatusItemClicked:(id)arg1;
- (void)_cleanUpAfterExit;
- (void)exitFullScreenTransitionForWindow:(id)arg1 animated:(BOOL)arg2;
- (void)exitFullScreenForQuit;
- (void)_spinRunloopForDuration:(double)arg1;
- (id)_allWindowsOnCurrentSpace;
- (id)_getPossibleCustomWindowsForExitingFullScreenForWindow:(id)arg1;
- (void)_setupWindowForAfterFullScreenExit;
- (void)_prepareToExitFullScreenMode;
- (void)_exitFullScreenModeForWindow:(id)arg1 duration:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enterFullScreenTransitionForWindow:(id)arg1 animated:(BOOL)arg2 activatingIt:(BOOL)arg3;
- (id)_getPossibleCustomWindowsForEnteringIntoFullScreen;
- (void)displayChangedForMissionControlMoveOfWindow:(long long)arg1;
- (struct CGRect)_windowFrameForFullScreenMode;
- (id)fullScreenTitle;
- (id)cocoaWindow;
- (void)_setupToolbarWindowIfNeeded;
- (void)captureCurrentAfterScreenShotsIncludingShadow:(BOOL)arg1 destinationSpace:(unsigned long long)arg2;
- (struct __CFArray *)copyWindowNumbersForScreenShot;
- (void)updateBackgroundColorIfNeeded;
- (id)_customColorForBackgroundWindow;
- (id)_maybeFilterParticipatingWindowNumbers:(id)arg1 byScreen:(id)arg2;
- (id)_participatingWindowNumbersForTransition:(long long)arg1 animation:(BOOL)arg2 customWindows:(id)arg3;
- (void)setWindowToHaveFullScreenSize;
- (void)orderTransitionedWindowFront;
- (struct CGSize)transitionedWindowShadowOffset;
- (void)setTransitionedWindowFrame:(struct CGRect)arg1;
- (struct CGRect)transitionedWindowFrame;
- (id)init;

@end

