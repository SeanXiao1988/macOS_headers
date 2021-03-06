//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CPULoadInfo : NSObject
{
    struct rusage lastResourceUsage;
    struct timeval lastTimeValue;
    double _measuredCPULoad;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property double measuredCPULoad; // @synthesize measuredCPULoad=_measuredCPULoad;
- (void).cxx_destruct;
- (void)stopMeasuringCPULoad;
- (void)startMeasuringCPULoad;
- (id)init;

@end

