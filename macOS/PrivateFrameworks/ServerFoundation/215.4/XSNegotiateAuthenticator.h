//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ServerFoundation/XSAuthenticator.h>

@interface XSNegotiateAuthenticator : XSAuthenticator
{
    void *_gssContext;
}

@property void *gssContext; // @synthesize gssContext=_gssContext;
- (BOOL)validateChallenge:(id)arg1 generateResponse:(id *)arg2;
- (id)generateInitialResponse;
- (void)finalize;
- (void)dealloc;

@end

