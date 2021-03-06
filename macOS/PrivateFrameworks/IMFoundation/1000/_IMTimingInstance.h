//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _IMTimingInstance : NSObject
{
    double _startTiming;
    double _stopTiming;
    double _totalTime;
    BOOL _isRunning;
}

+ (id)createTimingInstanceWithStartTime:(float)arg1;
@property(nonatomic) BOOL isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
- (id)description;
- (void)stopUsingTime:(double)arg1;
- (void)startUsingTime:(double)arg1;
- (id)init;

@end

