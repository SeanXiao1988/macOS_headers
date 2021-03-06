//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXDatabaseAlbumBasedController.h"

#import "IPXVersionsMonitorDelegate-Protocol.h"

@class IPXVersionsMonitor, NSObject, NSString;
@protocol OS_dispatch_semaphore;

@interface IPXDatabaseAlbumController : IPXDatabaseAlbumBasedController <IPXVersionsMonitorDelegate>
{
    NSObject<OS_dispatch_semaphore> *_syncResultsSemaphore;
    IPXVersionsMonitor *_versionsMonitor;
    BOOL _waitingForSyncResults;
}

- (void).cxx_destruct;
- (void)versionsMonitor:(id)arg1 thumbnailsChangedForVersions:(id)arg2;
- (id)changeReportingDispatchQueueForVersionsMonitor:(id)arg1;
- (void)database:(id)arg1 updatedVersion:(id)arg2 forKeyPaths:(id)arg3;
- (void)_applyQueryResultChange:(id)arg1;
- (void)refreshAlbumResultsNow;
- (void)refreshAlbumResults;
- (id)newCollectionWithUUID:(id)arg1 name:(id)arg2 lifetimeSequence:(unsigned long long)arg3 objects:(id)arg4 userInfo:(id)arg5;
- (Class)objectsCollectionClass;
- (CDUnknownBlockType)objectsCollectionSortingComparator;
- (void)uninstallObjectsSourceMonitor;
- (void)installObjectsSourceMonitor;
- (BOOL)contentsAffectedByChangesToKeyPaths:(id)arg1;
- (id)initWithDatabaseAlbum:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

