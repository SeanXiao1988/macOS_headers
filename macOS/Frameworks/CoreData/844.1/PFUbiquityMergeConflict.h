//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSMergeConflict.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityMergeConflict : NSMergeConflict
{
    NSDictionary *_ancestorSnapshot;
}

@property(retain) NSDictionary *ancestorSnapshot; // @synthesize ancestorSnapshot=_ancestorSnapshot;
- (void)dealloc;
- (id)initWithSource:(id)arg1 newVersion:(unsigned long long)arg2 oldVersion:(unsigned long long)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5;

@end

