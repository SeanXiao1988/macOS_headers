//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, RACCommand;

@protocol PRITwoFactorAuthenticationViewModel <NSObject>
@property(readonly, nonatomic) RACCommand *resendCodeCommand;
@property(readonly, nonatomic) RACCommand *authenticateCommand;
@property(readonly, copy, nonatomic) NSString *serverHost;
@property(readonly, nonatomic) long long medium;
@property(copy, nonatomic) NSString *authenticationCode;
@end

