//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class ABPrintingController, NSImage, NSSlider, NSTextField, NSTimer, NSWindow;

@interface ABPrintPreviewView : NSView
{
    NSTextField *itemCount;
    NSSlider *scaleSlider;
    NSTextField *zoomText;
    NSTimer *_timer;
    ABPrintingController *_controller;
    NSView *_printingView;
    NSImage *_previewImage;
    double _startTime;
    int _zoomStatus;
    BOOL _finalizeZoom;
    NSWindow *_lastKnownContainerWindow;
    struct CGRect _pageRect;
    struct CGPoint _startDragPoint;
    double _scale;
    double _endScale;
    double _minScale;
    struct CGRect _fromRect;
    struct CGRect _toRect;
    struct CGPoint _middle;
    BOOL _frameLocked;
    BOOL _pendingRecache;
}

- (void)setFrameSize:(struct CGSize)arg1;
- (void)setItemCountString:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)removeFromSuperview;
- (BOOL)isOpaque;
- (void)resetCursorRects;
- (double)scale;
- (void)setScale:(double)arg1;
- (void)setMiddle:(struct CGPoint)arg1;
- (void)resetMiddle;
- (void)animateToScale:(double)arg1;
- (void)animateAroundPoint;
- (void)applyZoom;
- (void)printingViewChanged;
- (void)recache;
- (void)setPrintingView:(id)arg1;
- (void)setPrintingController:(id)arg1;
- (void)handleScaleSlider:(id)arg1;
- (struct CGRect)constrainedRectFromFrame:(struct CGRect)arg1;
- (double)minimumScale;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

