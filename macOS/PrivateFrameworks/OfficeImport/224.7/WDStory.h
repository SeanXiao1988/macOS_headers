//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface WDStory : NSObject
{
    OADDrawable *mHead;
    BOOL mOle;
}

- (BOOL)isOle;
- (void)setOle:(BOOL)arg1;
- (id)text;
- (id)head;
- (void)dealloc;
- (id)initWithHead:(id)arg1;

@end

