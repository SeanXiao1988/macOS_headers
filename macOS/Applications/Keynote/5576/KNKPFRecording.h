//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KNKPFWriting-Protocol.h"

@class NSDictionary, NSMutableArray, NSString;

@interface KNKPFRecording : NSObject <KNKPFWriting>
{
    double _duration;
    NSMutableArray *_movieSegments;
    NSMutableArray *_eventTracks;
}

@property(retain, nonatomic) NSMutableArray *eventTracks; // @synthesize eventTracks=_eventTracks;
@property(retain, nonatomic) NSMutableArray *movieSegments; // @synthesize movieSegments=_movieSegments;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

