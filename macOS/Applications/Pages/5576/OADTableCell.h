//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OADTableCellProperties, OADTextBody;

@interface OADTableCell : NSObject
{
    OADTextBody *mTextBody;
    OADTableCellProperties *mProperties;
    int mRowSpan;
    int mGridSpan;
    BOOL mHorzMerge;
    BOOL mVertMerge;
    int mTopRow;
    int mLeftColumn;
}

- (void).cxx_destruct;
- (id)description;
- (void)setLeftColumn:(int)arg1;
- (int)leftColumn;
- (void)setTopRow:(int)arg1;
- (int)topRow;
- (BOOL)merge:(int)arg1;
- (void)setVertMerge:(BOOL)arg1;
- (BOOL)vertMerge;
- (void)setHorzMerge:(BOOL)arg1;
- (BOOL)horzMerge;
- (void)setGridSpan:(int)arg1;
- (int)gridSpan;
- (void)setRowSpan:(int)arg1;
- (int)rowSpan;
- (int)spanAlongDir:(int)arg1;
- (void)setProperties:(id)arg1;
- (id)properties;
- (void)setTextBody:(id)arg1;
- (id)textBody;
- (id)init;

@end

