//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

#import "NSWindowDelegate-Protocol.h"

@class BTTOverlayView, BTTWindowFilter, NSColor, NSString;

__attribute__((visibility("hidden")))
@interface DBOverlayWindowBkgrnd : NSWindow <NSWindowDelegate>
{
    float _cornerRadius;
    NSColor *fillColor;
    NSColor *strokeColor;
    double animationDuration;
    double borderWidthP;
    struct CGRect finalFrame;
    BTTWindowFilter *filtery;
    BTTOverlayView *overlayView;
    NSColor *_bColorImage;
}

@property(retain, nonatomic) NSColor *bColorImage; // @synthesize bColorImage=_bColorImage;
@property(retain, nonatomic) BTTOverlayView *overlayView; // @synthesize overlayView;
@property(retain, nonatomic) BTTWindowFilter *filtery; // @synthesize filtery;
@property(nonatomic) double borderWidthP; // @synthesize borderWidthP;
@property(nonatomic) struct CGRect finalFrame; // @synthesize finalFrame;
@property(nonatomic) double animationDuration; // @synthesize animationDuration;
@property(retain, nonatomic) NSColor *strokeColor; // @synthesize strokeColor;
@property(retain, nonatomic) NSColor *fillColor; // @synthesize fillColor;
- (void)dealloc;
- (void)windowDidResize:(id)arg1;
- (void)windowDidUpdate:(id)arg1;
- (void)windowDidEndLiveResize:(id)arg1;
- (void)close;
- (void)update;
- (id)initWithFillColor:(id)arg1 strokeColor:(id)arg2 rect:(struct CGRect)arg3 borderWidth:(double)arg4 blurBackground:(BOOL)arg5 roundCorners:(BOOL)arg6 finalFrame:(struct CGRect)arg7 screenFrame:(struct CGRect)arg8;
- (double)animationResizeTime:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

