//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EventTimestamp;

@interface NearLockIdleManager : NSObject
{
    EventTimestamp *_userDidNotLogoutBecauseUserActive;
}

+ (id)sharedNearLockIdleManager;
@property(retain, nonatomic) EventTimestamp *userDidNotLogoutBecauseUserActive; // @synthesize userDidNotLogoutBecauseUserActive=_userDidNotLogoutBecauseUserActive;
- (void).cxx_destruct;
- (void)nearLockRefusedToLoginBecauseUserActive;
- (BOOL)userWasRecentlyActive;
- (BOOL)userWasVeryRecentlyActive;
- (BOOL)userWasActiveInTheLastSeconds:(double)arg1;
- (BOOL)nearLockRefusedToLoginRecentlyBecauseUserWasActive;
- (id)init;

@end

