//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotificationCenter/NCRemoteViewServiceSubsystem.h>

#import <NotificationCenter/NCNotificationServiceProtocol-Protocol.h>

@class NCNotificationExtensionContext, NSString;
@protocol NCNotificationHostProtocol;

@interface NCNotificationServiceSubsystem : NCRemoteViewServiceSubsystem <NCNotificationServiceProtocol>
{
    _Bool _fullCustomizationAllowed;
}

@property(readonly, nonatomic) _Bool fullCustomizationAllowed; // @synthesize fullCustomizationAllowed=_fullCustomizationAllowed;
- (void)notificationServiceUpdateNotification:(id)arg1;
- (void)remoteViewServiceConfigure:(id)arg1 reply:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) id <NCNotificationHostProtocol> notificationHost;
@property(readonly, nonatomic) NCNotificationExtensionContext *notificationExtensionContext;
- (Class)viewControllerClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

