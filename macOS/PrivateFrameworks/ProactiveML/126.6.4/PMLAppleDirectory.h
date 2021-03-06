//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface PMLAppleDirectory : NSObject
{
    NSData *_data;
    const struct entry_s *_entries;
    unsigned long long _nentries;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)isPhoneNumberInAppleDirectory:(id)arg1 withAnotherPhone:(id)arg2;
- (BOOL)isPhoneNumberInAppleDirectory:(id)arg1;
- (BOOL)isEmailInAppleDirectory:(id)arg1;
- (BOOL)isEmailInAppleDirectory:(id)arg1 withAnotherEmail:(id)arg2;
- (BOOL)isEmailInAppleDirectory:(id)arg1 withPhonenumber:(id)arg2;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)initWithData:(id)arg1;

@end

