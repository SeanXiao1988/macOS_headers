//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPCardSectionEngagementFeedback-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSDictionary, NSString, _CPCardSectionForFeedback, _CPPunchoutForFeedback;

@interface _CPCardSectionEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPCardSectionEngagementFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int triggerEvent:1;
        unsigned int actionCardType:1;
        unsigned int destinationWasPARPunchout:1;
    } _has;
    BOOL _destinationWasPARPunchout;
    int _triggerEvent;
    int _actionCardType;
    unsigned long long _timestamp;
    _CPPunchoutForFeedback *_destination;
    _CPCardSectionForFeedback *_cardSection;
    NSString *_parPunchoutActionTarget;
    NSString *_cardSectionId;
    NSString *_resultId;
}

@property(copy, nonatomic) NSString *resultId; // @synthesize resultId=_resultId;
@property(copy, nonatomic) NSString *cardSectionId; // @synthesize cardSectionId=_cardSectionId;
@property(copy, nonatomic) NSString *parPunchoutActionTarget; // @synthesize parPunchoutActionTarget=_parPunchoutActionTarget;
@property(nonatomic) BOOL destinationWasPARPunchout; // @synthesize destinationWasPARPunchout=_destinationWasPARPunchout;
@property(retain, nonatomic) _CPCardSectionForFeedback *cardSection; // @synthesize cardSection=_cardSection;
@property(nonatomic) int actionCardType; // @synthesize actionCardType=_actionCardType;
@property(nonatomic) int triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(retain, nonatomic) _CPPunchoutForFeedback *destination; // @synthesize destination=_destination;
@property(nonatomic) unsigned long long timestamp;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasResultId;
@property(readonly, nonatomic) BOOL hasCardSectionId;
@property(readonly, nonatomic) BOOL hasParPunchoutActionTarget;
@property(readonly, nonatomic) BOOL hasDestinationWasPARPunchout;
@property(readonly, nonatomic) BOOL hasCardSection;
@property(readonly, nonatomic) BOOL hasActionCardType;
@property(readonly, nonatomic) BOOL hasTriggerEvent;
@property(readonly, nonatomic) BOOL hasDestination;
@property(readonly, nonatomic) BOOL hasTimestamp;
- (id)init;
- (id)initWithFacade:(id)arg1;
@property(readonly, nonatomic) BOOL requiresQueryId;
@property(readonly, nonatomic) id feedbackJSON;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

