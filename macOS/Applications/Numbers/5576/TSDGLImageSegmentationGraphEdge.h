//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TSDGLImageSegmentationGraphSegment;

@interface TSDGLImageSegmentationGraphEdge : NSObject
{
    double _weight;
    CDStruct_d84c1df1 _parameters;
    double _localWeight;
    TSDGLImageSegmentationGraphSegment *_segment1;
    TSDGLImageSegmentationGraphSegment *_segment2;
    NSArray *_segments;
}

@property(readonly, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(readonly, nonatomic) TSDGLImageSegmentationGraphSegment *segment2; // @synthesize segment2=_segment2;
@property(readonly, nonatomic) TSDGLImageSegmentationGraphSegment *segment1; // @synthesize segment1=_segment1;
@property(readonly, nonatomic) double weight; // @synthesize weight=_weight;
- (id)description;
- (void)p_updateWeight;
- (void)dealloc;
- (id)initWithSegment1:(id)arg1 segment2:(id)arg2 localWeigth:(double)arg3 parameters:(CDStruct_d84c1df1)arg4;

@end

