//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@interface MGMovieThumbnailExtractor : NSObject
{
}

+ (BOOL)canInitWithMovie:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)availableThumbnailTimeRanges;
- (id)extractedThumbnailBitmapWithSize:(struct CGSize)arg1 atTime:(CDStruct_900afa40)arg2;
- (id)init;
- (id)initWithMovie:(id)arg1 dispatchQueue:(id)arg2;

@end

