//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

@class NSArray, NSIndexSet;
@protocol TPMasterDrawableProvider;

@interface TPMoveMasterDrawableZOrderCommand : TSKCommand
{
    id <TPMasterDrawableProvider> _masterDrawableProvider;
    NSArray *_masterDrawables;
    NSIndexSet *_indexes;
    BOOL _coalesceable;
}

@property(readonly, nonatomic, getter=isCoalesceable) BOOL coalesceable; // @synthesize coalesceable=_coalesceable;
@property(readonly, retain, nonatomic) NSArray *masterDrawables; // @synthesize masterDrawables=_masterDrawables;
@property(readonly, nonatomic) id <TPMasterDrawableProvider> masterDrawableProvider; // @synthesize masterDrawableProvider=_masterDrawableProvider;
- (void)p_checkDebug;
- (void)coalesceWithCommand:(id)arg1 coalescingKind:(long long)arg2;
- (BOOL)canCoalesceWithCommand:(id)arg1 coalescingKind:(long long)arg2;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)process;
- (id)actionString;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 masterDrawableProvider:(id)arg2 drawable:(id)arg3 indexes:(id)arg4 coalesceable:(BOOL)arg5;

@end

