//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface BRCTransferOperation : _BRCOperation <BRCOperationSubclass>
{
    NSMutableDictionary *_entriesByRecordID;
    NSMutableDictionary *_entriesBySecondaryRecordID;
    NSMutableDictionary *_entriesByTransferID;
    unsigned long long _totalSize;
    unsigned long long _doneSize;
    CDUnknownBlockType _progressed;
    NSObject<OS_dispatch_group> *_pendingGroup;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_group> *pendingGroup; // @synthesize pendingGroup=_pendingGroup;
@property(copy) CDUnknownBlockType progressed; // @synthesize progressed=_progressed;
@property unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property unsigned long long doneSize; // @synthesize doneSize=_doneSize;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)_doneWithRecord:(id)arg1 recordID:(id)arg2 error:(id)arg3;
- (void)_doneWithEntry:(id)arg1 error:(id)arg2;
- (void)__doneWithEntry:(id)arg1 error:(id)arg2;
- (void)_progressForRecordID:(id)arg1 progress:(double)arg2;
- (void)_progressForEntry:(id)arg1 progress:(double)arg2;
- (double)progressForTransferID:(id)arg1;
- (void)addAliasItem:(id)arg1 toTransferWithID:(id)arg2;
- (void)cancelTransferID:(id)arg1;
- (void)_cancelTransferID:(id)arg1;
- (void)_addEntry:(id)arg1;
- (id)_description;
- (BOOL)shouldRetryForError:(id)arg1;
- (void)main;
- (void)__main:(id)arg1;
- (id)initWithName:(id)arg1 syncContext:(id)arg2 group:(id)arg3;
@property(readonly) unsigned long long itemsCount;
- (id)fetchOperationForEntries:(id)arg1 code:(int)arg2;
- (id)initWithName:(id)arg1 syncContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

