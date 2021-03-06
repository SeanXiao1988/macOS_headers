//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/_NSCGSWindowOrderingState-Protocol.h>

@class NSMutableOrderedSet, NSOrderedSet, NSString, _NSCGSWindowOrderingProperties;

__attribute__((visibility("hidden")))
@interface _NSCGSWindowLocalOrderingState : NSObject <_NSCGSWindowOrderingState>
{
    NSMutableOrderedSet *_orderedWindows;
    _NSCGSWindowOrderingProperties *_properties;
}

@property(readonly) NSOrderedSet *orderedWindows;
- (void)conditionallyOrderGroupFront:(id)arg1 withTimestamp:(double)arg2;
- (void)orderApplicationWindowsFront;
- (void)orderGroup:(id)arg1 op:(int)arg2 againstWindow:(id)arg3;
- (void)clearOrderingGroup:(id)arg1;
- (void)removeWindowFromOrderingGroup:(id)arg1;
- (void)addWindow:(id)arg1 toOrderingGroupBelowWindow:(id)arg2;
- (void)addWindow:(id)arg1 toOrderingGroupAboveWindow:(id)arg2;
- (void)orderWindow:(id)arg1 op:(int)arg2 againstWindow:(id)arg3;
- (void)reassociateWithSpacesByGeometry:(id)arg1;
- (void)disassociateFromSpacesIfOrderedOut:(id)arg1;
- (void)setDesiredSpace:(unsigned long long)arg1 forWindow:(id)arg2;
- (void)setSubLevel:(int)arg1 forWindow:(id)arg2;
- (void)setLevel:(int)arg1 forWindow:(id)arg2;
- (void)dealloc;
- (id)initWithWindows:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

