//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@protocol LAUIUserPasswordFieldRemoteProtocol <NSObject>
- (void)didVerifyPassword;
- (void)externalizedContextInReply:(void (^)(NSData *))arg1;

@optional
- (void)requestCancelAuthentication;
- (void)passwordFieldDidResignFirstResponder;
- (void)didSubmitWrongPassword:(BOOL)arg1;
- (void)didSubmitWrongPassword;
@end

