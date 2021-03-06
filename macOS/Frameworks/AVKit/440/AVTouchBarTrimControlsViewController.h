//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class AVTrimControlsViewController, AVTrimView, NSButton, NSMutableArray;

@interface AVTouchBarTrimControlsViewController : NSViewController
{
    NSMutableArray *_bindings;
    AVTrimControlsViewController *_parentTrimViewController;
    AVTrimView *_trimView;
    NSButton *_trimButton;
}

@property(retain) NSButton *trimButton; // @synthesize trimButton=_trimButton;
@property(retain) AVTrimView *trimView; // @synthesize trimView=_trimView;
- (void).cxx_destruct;
- (void)_unbindAllObjects;
- (void)_bindObject:(id)arg1 withBinding:(id)arg2 toObject:(id)arg3 withKeyPath:(id)arg4 options:(id)arg5;
- (id)_makeTrackViewController;
- (id)_makeTouchBarTrimButton;
- (id)_makeTouchBarTrimView;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)loadView;
- (void)trim:(id)arg1;
@property(retain) AVTrimControlsViewController *parentTrimViewController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

