//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WDDocument;

__attribute__((visibility("hidden")))
@interface WDRevisionAuthorTable : NSObject
{
    NSMutableArray *mAuthors;
    WDDocument *mDocument;
}

- (id)description;
- (unsigned long long)authorAddLookup:(id)arg1;
- (void)addAuthor:(id)arg1;
- (id)authorAt:(unsigned long long)arg1;
- (unsigned long long)authorCount;
- (id)authors;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

@end

