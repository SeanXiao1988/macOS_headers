//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCTransitionTrigger, MRGesturePanZoomRotation, MRLayer;

@interface MRTransitionChanges : NSObject
{
    double startTime;
    double duration;
    BOOL isBackwards;
    MRLayer *_currentSublayer;
    MRLayer *_nextSublayer;
    MCTransitionTrigger *_transition;
    MRGesturePanZoomRotation *_pzr;
}

@property(retain) MRGesturePanZoomRotation *pzr; // @synthesize pzr=_pzr;
@property(retain) MCTransitionTrigger *transition; // @synthesize transition=_transition;
@property(retain) MRLayer *nextSublayer; // @synthesize nextSublayer=_nextSublayer;
@property(retain) MRLayer *currentSublayer; // @synthesize currentSublayer=_currentSublayer;
- (void)dealloc;

@end

