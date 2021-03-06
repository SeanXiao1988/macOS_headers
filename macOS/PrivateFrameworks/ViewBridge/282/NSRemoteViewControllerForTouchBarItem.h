//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ViewBridge/NSRemoteViewController.h>

#import <ViewBridge/NSViewBridgeKVOBuddy-Protocol.h>
#import <ViewBridge/_NSTouchBarItemLayoutWrapper-Protocol.h>

@class NSString, NSTouchBarItem, NSView;

__attribute__((visibility("hidden")))
@interface NSRemoteViewControllerForTouchBarItem : NSRemoteViewController <_NSTouchBarItemLayoutWrapper, NSViewBridgeKVOBuddy>
{
    NSTouchBarItem *_observingTouchBarItem;
    NSView *_observingView;
}

+ (id)copyConstraintIdentifier:(id)arg1;
- (id)kvoKeys;
@property(readonly) BOOL isSpace;
@property(readonly) struct CGSize minSize;
@property(readonly) struct CGSize maxSize;
@property(readonly) struct CGSize contentClippingSize;
- (void)updateViewConstraints;
- (void)_viewDidMoveToWindow:(id)arg1 fromWindow:(id)arg2 unhiding:(BOOL)arg3;
- (void)_viewWillMoveToWindow:(id)arg1 unhiding:(BOOL)arg2;
- (void)sendWindowSizeToService:(struct CGSize)arg1;
- (void)dealloc;
- (void)setView:(id)arg1;
- (void)maintainObserversForView:(id)arg1;
- (void)maintainObserversForTouchBarItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeValueForFrameSize:(struct CGSize)arg1;
- (void)observeValueForVisible:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) double itemPadding;
@property(readonly) unsigned long long itemPosition;
@property(readonly) struct CGSize preferredSize;
@property(readonly) long long priorityIndex;
@property(readonly) Class superclass;

@end

