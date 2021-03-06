//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL;

@interface SMSystem : NSObject
{
    BOOL _valid;
    NSURL *_path;
    unsigned long long _state;
    NSArray *_allUsers;
    NSArray *_allGroups;
    NSString *_migrationServerVersion;
    unsigned long long _migrationServerType;
    NSString *_productVersion;
    NSString *_systemVersion;
    NSString *_modelID;
    NSString *_modelUTI;
    unsigned long long _migratableItemsSupported;
}

+ (id)migratableUsersFilter;
@property(readonly) unsigned long long migratableItemsSupported; // @synthesize migratableItemsSupported=_migratableItemsSupported;
@property(retain) NSString *modelUTI; // @synthesize modelUTI=_modelUTI;
@property(retain) NSString *modelID; // @synthesize modelID=_modelID;
@property(readonly) __weak NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(readonly) __weak NSString *productVersion; // @synthesize productVersion=_productVersion;
@property unsigned long long migrationServerType; // @synthesize migrationServerType=_migrationServerType;
@property(retain) NSString *migrationServerVersion; // @synthesize migrationServerVersion=_migrationServerVersion;
@property(readonly) __weak NSArray *allGroups; // @synthesize allGroups=_allGroups;
@property(readonly) __weak NSArray *allUsers; // @synthesize allUsers=_allUsers;
@property unsigned long long state; // @synthesize state=_state;
@property BOOL valid; // @synthesize valid=_valid;
@property(retain) NSURL *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)invalidate;
- (void)scannerInit;
- (void)unmount;
- (void)mountWithCredentials:(id)arg1;
- (void)mount;
@property(readonly, getter=isMounted) BOOL mounted;
- (id)filteredUsers:(id)arg1;
@property(readonly) NSString *localizationPrefix;
@property(readonly, getter=isClientInstall) BOOL clientInstall;
@property(readonly, getter=isSelfContainedServerInstall) BOOL selfContainedServerInstall;
@property(readonly, getter=isMixedLegacyServerInstall) BOOL mixedLegacyServerInstall;
@property(readonly, getter=isLegacyServerInstall) BOOL legacyServerInstall;
- (BOOL)isExpectedServerType:(unsigned long long)arg1;
- (void)evaluateServerType;
- (id)getAllUsersFromGroup:(id)arg1;
- (id)getAllUsersFromGroupWithName:(id)arg1;
- (id)getGroupWithGeneratedUID:(id)arg1;
- (id)getGroupWithID:(unsigned int)arg1;
- (id)getGroup:(id)arg1;
- (id)getUserWithUUID:(id)arg1;
- (id)getUserWithID:(unsigned int)arg1;
- (id)getUserByLongName:(id)arg1;
- (id)getUser:(id)arg1;
@property(readonly) unsigned long long systemType;
@property(readonly) id primaryIdentifier;
- (id)init;

@end

