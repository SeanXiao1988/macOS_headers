//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "RepairBaseView.h"

@class KBButton, NSButton, NSLocalTextField, NSTextField;

@interface BaseNormalConnectView : RepairBaseView
{
    KBButton *_btnRepairNow;
    NSLocalTextField *_textField;
    NSLocalTextField *_textField1;
    NSLocalTextField *_textField2;
    NSButton *_btnFixNowBeta;
    NSTextField *_txios11Before;
    NSTextField *_txios11After;
}

- (void)onFixNowBetaBtn:(id)arg1;
- (void)onStartBtn:(id)arg1;
- (void)themeWillDidChange;
- (void)initBackView;
- (void)onBtnBack:(id)arg1;
- (void)initViewText;
- (void)initPageView;
- (void)drawRect:(struct _NSRect)arg1;

@end

