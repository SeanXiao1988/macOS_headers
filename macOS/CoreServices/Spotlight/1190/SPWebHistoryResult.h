//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Spotlight/PRSParsecSimpleResult.h>

@class NSDate;

@interface SPWebHistoryResult : PRSParsecSimpleResult
{
    BOOL _isSafariTopHit;
    BOOL _isSafariSynthesizedTopHit;
    unsigned long long topHit;
    unsigned long long score;
    long long _matchLocation;
    long long _visitCount;
    NSDate *_lastVisitTime;
}

@property(retain) NSDate *lastVisitTime; // @synthesize lastVisitTime=_lastVisitTime;
@property long long visitCount; // @synthesize visitCount=_visitCount;
@property BOOL isSafariSynthesizedTopHit; // @synthesize isSafariSynthesizedTopHit=_isSafariSynthesizedTopHit;
@property BOOL isSafariTopHit; // @synthesize isSafariTopHit=_isSafariTopHit;
@property long long matchLocation; // @synthesize matchLocation=_matchLocation;
- (void)setScore:(unsigned long long)arg1;
- (void)setTopHit:(unsigned long long)arg1;
- (unsigned long long)topHit;
- (void).cxx_destruct;
- (unsigned long long)score;
- (id)engagementFeedbackForInput:(id)arg1 timestamp:(long long)arg2;
- (BOOL)shouldNotBeTopHit;
- (BOOL)isTopHitCandidate;
- (BOOL)isLocalResult;
- (id)groupName;
- (id)category;
- (id)groupId;

@end

