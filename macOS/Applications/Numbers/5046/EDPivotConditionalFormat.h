//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EDCollection;

@interface EDPivotConditionalFormat : NSObject
{
    unsigned long long mPriority;
    int mType;
    int mScope;
    EDCollection *mPivotAreas;
}

+ (id)pivotConditionalFormat;
- (id)description;
- (id)pivotAreas;
- (void)setScope:(int)arg1;
- (int)scope;
- (void)setType:(int)arg1;
- (int)type;
- (void)setPriority:(unsigned long long)arg1;
- (unsigned long long)priority;
- (void)dealloc;
- (id)init;

@end

