//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHChartGridAdapter.h"

@interface TSCHChartGridCountAdapter : TSCHChartGridAdapter
{
    BOOL mCountFromOne;
    unsigned long long mIndexFactor;
}

@property(nonatomic) unsigned long long indexFactor; // @synthesize indexFactor=mIndexFactor;
@property(nonatomic) BOOL countFromOne; // @synthesize countFromOne=mCountFromOne;
- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (id *)valuesAtIndexes:(struct _NSRange)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithCount:(unsigned long long)arg1;

@end

