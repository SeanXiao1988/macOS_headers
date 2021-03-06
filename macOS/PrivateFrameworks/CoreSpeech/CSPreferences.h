//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSPreferences : NSObject
{
}

+ (id)sharedPreferences;
+ (void)initialize;
- (BOOL)_markSATEnrollmentSuccessForLanguageCode:(id)arg1;
- (void)notifyUserVoiceProfileUpdateReady;
- (id)getUserVoiceProfileUpdateDirectory;
- (BOOL)_isDirectory:(id)arg1;
- (void)notifyUserVoiceProfileUploadComplete;
- (id)getUserVoiceProfileUploadPathWithEnrolledLanguageList:(id *)arg1;
- (id)getUserVoiceProfileUploadPath;
- (id)getUserVoiceProfileFileList;
- (id)_getEnrolledLanguageList;
- (id)_CSSATUploadPath;
- (id)_CSSATUpdatePath;
- (id)CSSATBasePath;
- (id)voiceTriggerAudioLogDirectory;
- (id)baseDir;
- (void)setFileLoggingLevel:(id)arg1;
- (id)fileLoggingLevel;
- (BOOL)fileLoggingIsEnabled;
- (void)setFileLoggingIsEnabled:(BOOL)arg1;
- (BOOL)_storeModeEnabled;
- (BOOL)voiceTriggerInCoreSpeech;
- (BOOL)voiceTriggerEnabled;

@end

