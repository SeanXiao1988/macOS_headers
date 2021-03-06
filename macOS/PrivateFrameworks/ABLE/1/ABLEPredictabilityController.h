//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABLECoreDuetController, NSArray, NSDictionary;

@interface ABLEPredictabilityController : NSObject
{
    BOOL _approximateMissingData;
    NSDictionary *_currentData;
    NSArray *_dayOffsets;
    double _rejectionThresholdForMissingData;
    ABLECoreDuetController *_coreDuetController;
}

@property(readonly) ABLECoreDuetController *coreDuetController; // @synthesize coreDuetController=_coreDuetController;
@property double rejectionThresholdForMissingData; // @synthesize rejectionThresholdForMissingData=_rejectionThresholdForMissingData;
@property(retain) NSArray *dayOffsets; // @synthesize dayOffsets=_dayOffsets;
@property BOOL approximateMissingData; // @synthesize approximateMissingData=_approximateMissingData;
@property(retain) NSDictionary *currentData; // @synthesize currentData=_currentData;
- (void).cxx_destruct;
- (id)calculateCorrelationForDay:(id)arg1 andDayOffsets:(id)arg2;
- (id)calculateCorrelationForYesterdayAndDayOffsets:(id)arg1;
- (double)calculateCorrelationForOneDay;
- (id)calculateCorrelationForDefaultDayOffsets;
- (id)initWithCoreDuetController:(id)arg1;

@end

