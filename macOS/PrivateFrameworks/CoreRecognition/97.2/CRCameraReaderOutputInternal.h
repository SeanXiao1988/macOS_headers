//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface CRCameraReaderOutputInternal : NSObject
{
    NSString *_type;
    NSArray *_vertices;
    NSString *_stringValue;
    NSNumber *_yearValue;
    NSNumber *_monthValue;
    NSNumber *_dayValue;
    NSString *_formattedStringValue;
}

@property(retain) NSNumber *dayValue; // @synthesize dayValue=_dayValue;
@property(retain) NSNumber *monthValue; // @synthesize monthValue=_monthValue;
@property(retain) NSNumber *yearValue; // @synthesize yearValue=_yearValue;
@property(retain) NSString *formattedStringValue; // @synthesize formattedStringValue=_formattedStringValue;
@property(retain) NSString *type; // @synthesize type=_type;
@property(retain) NSArray *vertices; // @synthesize vertices=_vertices;
@property(retain) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void).cxx_destruct;

@end

