//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PerformanceAnalysis/PARangeContainer.h>

#import <PerformanceAnalysis/NSCoding-Protocol.h>

@class NSString, PAImageSegment;

@interface PAImageSection : PARangeContainer <NSCoding>
{
    NSString *name;
    PAImageSegment *parent;
}

@property(retain) PAImageSegment *parent; // @synthesize parent;
@property(retain) NSString *name; // @synthesize name;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)summaryString;
- (void)dealloc;
- (id)initWithCSRegion:(struct _CSTypeRef)arg1 Parent:(id)arg2;

@end

