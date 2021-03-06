//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDAttachmentTable : RDTable
{
    LiKeyPath *_attachedToClassTypeKeyPath;
    LiKeyPath *_attachedToUuidKeyPath;
    LiKeyPath *_fileVolumeUuidKeyPath;
    LiKeyPath *_propertyKeyKeyPath;
    LiKeyPath *_filenameKeyPath;
    LiKeyPath *_fileIsReferenceKeyPath;
    LiKeyPath *_isMissingKeyPath;
    LiKeyPath *_isInTrashKeyPath;
    LiKeyPath *_inTrashDateKeyPath;
    LiKeyPath *_durationKeyPath;
    LiKeyPath *_fileModificationDateKeyPath;
    LiKeyPath *_filePathKeyPath;
    LiKeyPath *_fileAliasDataKeyPath;
    LiKeyPath *_propertiesDataKeyPath;
    LiKeyPath *_bookmarkIdKeyPath;
    LiKeyPath *_volumeIdKeyPath;
}

+ (SEL)deletedModelIdsMulticasterSelector;
+ (SEL)createdModelMulticasterSelector;
+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *volumeIdKeyPath; // @synthesize volumeIdKeyPath=_volumeIdKeyPath;
@property(readonly, nonatomic) LiKeyPath *bookmarkIdKeyPath; // @synthesize bookmarkIdKeyPath=_bookmarkIdKeyPath;
@property(readonly, nonatomic) LiKeyPath *propertiesDataKeyPath; // @synthesize propertiesDataKeyPath=_propertiesDataKeyPath;
@property(readonly, nonatomic) LiKeyPath *fileAliasDataKeyPath; // @synthesize fileAliasDataKeyPath=_fileAliasDataKeyPath;
@property(readonly, nonatomic) LiKeyPath *filePathKeyPath; // @synthesize filePathKeyPath=_filePathKeyPath;
@property(readonly, nonatomic) LiKeyPath *fileModificationDateKeyPath; // @synthesize fileModificationDateKeyPath=_fileModificationDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *durationKeyPath; // @synthesize durationKeyPath=_durationKeyPath;
@property(readonly, nonatomic) LiKeyPath *inTrashDateKeyPath; // @synthesize inTrashDateKeyPath=_inTrashDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *isInTrashKeyPath; // @synthesize isInTrashKeyPath=_isInTrashKeyPath;
@property(readonly, nonatomic) LiKeyPath *isMissingKeyPath; // @synthesize isMissingKeyPath=_isMissingKeyPath;
@property(readonly, nonatomic) LiKeyPath *fileIsReferenceKeyPath; // @synthesize fileIsReferenceKeyPath=_fileIsReferenceKeyPath;
@property(readonly, nonatomic) LiKeyPath *filenameKeyPath; // @synthesize filenameKeyPath=_filenameKeyPath;
@property(readonly, nonatomic) LiKeyPath *propertyKeyKeyPath; // @synthesize propertyKeyKeyPath=_propertyKeyKeyPath;
@property(readonly, nonatomic) LiKeyPath *fileVolumeUuidKeyPath; // @synthesize fileVolumeUuidKeyPath=_fileVolumeUuidKeyPath;
@property(readonly, nonatomic) LiKeyPath *attachedToUuidKeyPath; // @synthesize attachedToUuidKeyPath=_attachedToUuidKeyPath;
@property(readonly, nonatomic) LiKeyPath *attachedToClassTypeKeyPath; // @synthesize attachedToClassTypeKeyPath=_attachedToClassTypeKeyPath;
- (void).cxx_destruct;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (unsigned long long)saveOrder;
- (id)notifyUpdateKeyPathAtoms;
- (unsigned long long *)faultedKeyPath;

@end

