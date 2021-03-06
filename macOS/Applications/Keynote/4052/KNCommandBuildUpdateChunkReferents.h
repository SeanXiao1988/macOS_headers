//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "KNBuildOrChunkUpdatingCommand-Protocol.h"

@class KNBuild, NSArray, NSString, NSUUID;

@interface KNCommandBuildUpdateChunkReferents : TSKCommand <GSSPAutoEncodable, KNBuildOrChunkUpdatingCommand>
{
    NSUUID *_buildId;
    NSArray *_tuplesToUpdate;
    NSArray *_oldTuplesToUpdate;
}

@property(readonly, nonatomic) NSArray *oldTuplesToUpdate; // @synthesize oldTuplesToUpdate=_oldTuplesToUpdate;
@property(readonly, nonatomic) BOOL mayChangeChunkCount;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) NSArray *tuplesToUpdate;
- (id)makeInverse;
- (void)rollback;
- (BOOL)supportsCollaboration;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)process;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) KNBuild *build;
- (void)dealloc;
- (void)didInitFromSOS;
- (id)initWithBuild:(id)arg1;
- (id)initWithBuild:(id)arg1 tuplesToUpdate:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct CommandBuildUpdateChunkReferentsArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct CommandBuildUpdateChunkReferentsArchive *)arg1 unarchiver:(id)arg2;
- (void)deallocSOS;
- (void)populateGSSPCmdBuildUpdateChunkReferents:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

