//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSMutableArray, NSString, NSURL;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface SiriCoreLocalSpeechDESRecord : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_contextualDataGroup;
    NSString *_language;
    NSString *_task;
    NSArray *_context;
    unsigned long long _samplingRate;
    NSData *_profile;
    NSDictionary *_userData;
    NSMutableArray *_audioPackets;
    NSString *_UUIDString;
    NSDictionary *_interactionSenderDisplayNames;
    NSArray *_locationOfInterestNames;
    NSArray *_locationOfInterestSpokenNames;
    NSArray *_eventTitles;
    NSArray *_eventLocationNames;
    NSDictionary *_keyboardLMDynamicVocabularyItems;
    NSURL *_originalAudioFileURL;
}

+ (id)recordsWithLanguage:(id)arg1 error:(id *)arg2;
+ (BOOL)supportsSecureCoding;
+ (void)DeleteAllRecordsWithCompletion:(CDUnknownBlockType)arg1;
+ (void)fetchRecordWithLanguage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSURL *originalAudioFileURL; // @synthesize originalAudioFileURL=_originalAudioFileURL;
@property(readonly, copy, nonatomic) NSDictionary *keyboardLMDynamicVocabularyItems; // @synthesize keyboardLMDynamicVocabularyItems=_keyboardLMDynamicVocabularyItems;
@property(readonly, copy, nonatomic) NSArray *eventLocationNames; // @synthesize eventLocationNames=_eventLocationNames;
@property(readonly, copy, nonatomic) NSArray *eventTitles; // @synthesize eventTitles=_eventTitles;
@property(readonly, copy, nonatomic) NSArray *locationOfInterestSpokenNames; // @synthesize locationOfInterestSpokenNames=_locationOfInterestSpokenNames;
@property(readonly, copy, nonatomic) NSArray *locationOfInterestNames; // @synthesize locationOfInterestNames=_locationOfInterestNames;
@property(readonly, copy, nonatomic) NSDictionary *interactionSenderDisplayNames; // @synthesize interactionSenderDisplayNames=_interactionSenderDisplayNames;
@property(readonly, copy, nonatomic) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
@property(readonly, copy, nonatomic) NSMutableArray *audioPackets; // @synthesize audioPackets=_audioPackets;
@property(copy, nonatomic) NSDictionary *userData; // @synthesize userData=_userData;
@property(copy, nonatomic) NSData *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) unsigned long long samplingRate; // @synthesize samplingRate=_samplingRate;
@property(readonly, copy, nonatomic) NSArray *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *task; // @synthesize task=_task;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
- (void).cxx_destruct;
- (void)writeToFileWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)fetchContextualData;
- (void)addAudioPacket:(id)arg1;
- (id)initWithLanguage:(id)arg1 task:(id)arg2 context:(id)arg3 narrowband:(BOOL)arg4;
- (id)_init;

@end

