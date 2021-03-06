//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PanicCore/PCSharedInstance.h>

@class NSArray, NSImageView, NSTimer;

__attribute__((visibility("hidden")))
@interface DockIconManager : PCSharedInstance
{
    long long syncBadgeStepIndex;
    NSArray *syncBadgeImageArray;
    NSTimer *syncBadgeUpdateTimer;
    long long numberOfCurrentUploads;
    long long numberOfCurrentDownloads;
    long long numberOfCurrentSyncs;
    int iDockIconState;
    NSImageView *iDockTileView;
    NSImageView *iDockBadgeView;
}

+ (id *)sharedInstancePtr;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)setApplicationIconBadge:(id)arg1;
- (void)updateTransfersInDockIcon;
- (id)createImageWithShadow:(id)arg1;
- (void)stepSyncBadgeUpdateTimer:(id)arg1;
- (void)stopSyncBadgeUpdateTimer;
- (void)startSyncBadgeUpdateTimer;
- (void)didCompleteUpload;
- (void)didCompleteSync;
- (void)didCompleteDownload;
- (void)didBeginUpload;
- (void)didBeginDownload;
- (void)didBeginSync;
- (BOOL)canResetIcon;
- (void)dealloc;
- (void)sharedInstanceInitialize;

@end

