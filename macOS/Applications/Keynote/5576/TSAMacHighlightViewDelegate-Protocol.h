//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TSAMacHighlightView;

@protocol TSAMacHighlightViewDelegate <NSObject>
- (void)highlightViewDelete:(TSAMacHighlightView *)arg1;
- (void)highlightViewConvertToComment:(TSAMacHighlightView *)arg1;
- (void)highlightViewPreviousAnnotation:(TSAMacHighlightView *)arg1;
- (void)highlightViewNextAnnotation:(TSAMacHighlightView *)arg1;
- (void)highlightView:(TSAMacHighlightView *)arg1 didUpdateHeight:(double)arg2;
@end

