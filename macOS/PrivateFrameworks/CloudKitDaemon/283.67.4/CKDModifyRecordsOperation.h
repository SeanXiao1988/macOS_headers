//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDProtocolTranslator, CKDRecordCache, NSArray, NSData, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDModifyRecordsOperation : CKDDatabaseOperation
{
    CKDProtocolTranslator *_translator;
    BOOL _retryPCSFailures;
    BOOL _canSetPreviousProtectionEtag;
    BOOL _retriedRecords;
    BOOL _shouldOnlySaveAssetContent;
    BOOL _haveOutstandingMetadatas;
    BOOL _atomic;
    int _numPCSRetries;
    CDUnknownBlockType _saveProgressBlock;
    CDUnknownBlockType _saveCompletionBlock;
    CDUnknownBlockType _deleteCompletionBlock;
    CDUnknownBlockType _uploadCompletionBlock;
    NSArray *_recordsToSave;
    NSArray *_recordIDsToDelete;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSDictionary *_conflictLosersToResolveByRecordID;
    NSDictionary *_metadatasByRecordID;
    NSMutableDictionary *_modifyMetadatasByZoneID;
    long long _savePolicy;
    NSData *_clientChangeTokenData;
    NSMutableDictionary *_recordsByServerID;
    CKDRecordCache *_cache;
}

@property(nonatomic) BOOL atomic; // @synthesize atomic=_atomic;
@property(nonatomic) BOOL haveOutstandingMetadatas; // @synthesize haveOutstandingMetadatas=_haveOutstandingMetadatas;
@property(nonatomic) BOOL shouldOnlySaveAssetContent; // @synthesize shouldOnlySaveAssetContent=_shouldOnlySaveAssetContent;
@property(nonatomic) BOOL retriedRecords; // @synthesize retriedRecords=_retriedRecords;
@property(retain, nonatomic) CKDRecordCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSMutableDictionary *recordsByServerID; // @synthesize recordsByServerID=_recordsByServerID;
@property(copy, nonatomic) NSData *clientChangeTokenData; // @synthesize clientChangeTokenData=_clientChangeTokenData;
@property(nonatomic) long long savePolicy; // @synthesize savePolicy=_savePolicy;
@property(nonatomic) int numPCSRetries; // @synthesize numPCSRetries=_numPCSRetries;
@property(retain, nonatomic) NSMutableDictionary *modifyMetadatasByZoneID; // @synthesize modifyMetadatasByZoneID=_modifyMetadatasByZoneID;
@property(retain, nonatomic) NSDictionary *metadatasByRecordID; // @synthesize metadatasByRecordID=_metadatasByRecordID;
@property(retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID; // @synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID;
@property(retain, nonatomic) NSDictionary *recordIDsToDeleteToEtags; // @synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags;
@property(retain, nonatomic) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property(retain, nonatomic) NSArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
@property(copy, nonatomic) CDUnknownBlockType uploadCompletionBlock; // @synthesize uploadCompletionBlock=_uploadCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType deleteCompletionBlock; // @synthesize deleteCompletionBlock=_deleteCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType saveCompletionBlock; // @synthesize saveCompletionBlock=_saveCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType saveProgressBlock; // @synthesize saveProgressBlock=_saveProgressBlock;
@property(nonatomic) BOOL canSetPreviousProtectionEtag; // @synthesize canSetPreviousProtectionEtag=_canSetPreviousProtectionEtag;
@property(nonatomic) BOOL retryPCSFailures; // @synthesize retryPCSFailures=_retryPCSFailures;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (BOOL)_topoSortRecords;
- (void)_fetchRecordPCSData;
- (void)_loadPCSDataForMetadata:(id)arg1;
- (void)_unwrapRecordPCSForShare:(id)arg1;
- (void)_unwrapRecordPCSForZone:(id)arg1;
- (void)_fetchExistingPCSForProvidedPCSData:(id)arg1 metadata:(id)arg2;
- (void)_fetchPCSDataForMetadata:(id)arg1;
- (void)_createAndSavePCSForMetadata:(id)arg1;
- (void)_continueCreateAndSavePCSForMetadata:(id)arg1 zonePCS:(id)arg2 sharePCS:(id)arg3;
- (void)_addShareToPCSData:(id)arg1 forMetadata:(id)arg2 withError:(id)arg3;
- (void)_handlePCSData:(id)arg1 forMetadata:(id)arg2 withError:(id)arg3;
- (BOOL)_canSetPreviousProtectionEtag;
- (void)_uploadAssets;
- (id)_prepareAssetsForUpload;
- (BOOL)_prepareAsset:(id)arg1 recordKey:(id)arg2 record:(id)arg3 error:(id *)arg4;
- (id)_wrapAssetKey:(id)arg1 forRecord:(id)arg2 withError:(id *)arg3;
- (void)_markRecordMetadatasAsUploaded;
- (BOOL)_prepareRecordsForSave;
- (BOOL)_wrapEncryptedDataOnRecord:(id)arg1;
- (BOOL)_wrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 forField:(id)arg3;
- (void)_verifyRecordEncryption;
- (void)_handleDecryptionFailure:(id)arg1 forRecordID:(id)arg2;
@property(readonly, nonatomic) CKDProtocolTranslator *translator;
- (void)_continueRecordsModify;
- (id)_createModifyRequestWithRecordsToSave:(id)arg1 recordsToDelete:(id)arg2 recordsToDeleteToEtags:(id)arg3 metadatasByRecordID:(id)arg4;
- (void)_handleRecordDeleted:(id)arg1 metadata:(id)arg2 responseCode:(id)arg3;
- (void)_handleRecordSaved:(id)arg1 metadata:(id)arg2 etag:(id)arg3 dateStatistics:(id)arg4 responseCode:(id)arg5 keysAssociatedWithETag:(id)arg6 recordForOplockFailure:(id)arg7 serverRecord:(id)arg8;
- (void)_clearProtectionDataForRecord:(id)arg1;
- (void)_performMetadataCallbacks;
- (void)_performCallbacksForAtomicZoneMetadatas:(id)arg1;
- (void)_performCallbacksForNonAtomicZoneMetadatas:(id)arg1;
- (id)nameForState:(unsigned long long)arg1;
- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

