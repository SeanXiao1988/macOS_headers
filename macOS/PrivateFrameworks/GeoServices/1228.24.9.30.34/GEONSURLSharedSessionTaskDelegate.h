//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol NSURLSessionDataDelegate;

__attribute__((visibility("hidden")))
@interface GEONSURLSharedSessionTaskDelegate : NSObject
{
    id <NSURLSessionDataDelegate> _delegate;
    NSOperationQueue *_queue;
    struct {
        unsigned int delegateRespondsToDidFinishCollectingMetrics:1;
        unsigned int delegateRespondsToDataTaskDidReceiveResponse:1;
        unsigned int delegateRespondsToDataTaskDidReceiveData:1;
        unsigned int delegateRespondsToTaskDidCompleteWithError:1;
        unsigned int delegateRespondsToWillSendRequestForEstablishedConnection:1;
    } _flags;
}

+ (id)taskDelegate:(id)arg1 delegateQueue:(id)arg2;
@property(readonly, nonatomic) id <NSURLSessionDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL delegateRespondsToWillSendRequestForEstablishedConnection;
@property(readonly, nonatomic) BOOL delegateRespondsToTaskDidCompleteWithError;
@property(readonly, nonatomic) BOOL delegateRespondsToDataTaskDidReceiveData;
@property(readonly, nonatomic) BOOL delegateRespondsToDataTaskDidReceiveResponse;
@property(readonly, nonatomic) BOOL delegateRespondsToDidFinishCollectingMetrics;
@property(readonly, nonatomic) NSOperationQueue *queue;
- (id)debugDescription;
- (void)dealloc;

@end

