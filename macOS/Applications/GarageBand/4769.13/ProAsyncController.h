//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ProgressController.h"

@class NSButton;

@interface ProAsyncController : ProgressController
{
    NSButton *fasterButton;
    BOOL fFasterButtonShown;
}

+ (id)nibName;
- (void)handleUM_BLINK:(id)arg1;
- (void)updateUI;
- (void)fasterButtonPressed:(id)arg1;
- (void)setFasterButtonVisible:(BOOL)arg1;
- (void)windowWillClose:(id)arg1;
- (void)willBecomeVisible;
- (void)awakeFromNib;

@end

