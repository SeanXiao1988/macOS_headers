//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol DBTransportClient;

@interface DBAUTHUserAuthRoutes : NSObject
{
    id <DBTransportClient> _client;
}

@property(readonly, nonatomic) id <DBTransportClient> client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)tokenRevoke;
- (id)init:(id)arg1;

@end

