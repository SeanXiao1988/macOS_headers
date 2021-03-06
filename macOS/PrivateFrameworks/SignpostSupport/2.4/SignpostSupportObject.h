//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SignpostSupport/SignpostSerializable-Protocol.h>

@class NSString;

@interface SignpostSupportObject : NSObject <SignpostSerializable>
{
    NSString *_subsystem;
    NSString *_category;
    double _timebaseRatio;
}

+ (id)serializationTypeNumber;
@property(nonatomic) double timebaseRatio; // @synthesize timebaseRatio=_timebaseRatio;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) float durationSeconds;
@property(readonly, nonatomic) unsigned long long durationMachContinuousTime;
@property(readonly, nonatomic) unsigned long long endMachContinuousTime;
@property(readonly, nonatomic) unsigned long long startMachContinuousTime;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 timebaseRatio:(double)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)serializeableDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

