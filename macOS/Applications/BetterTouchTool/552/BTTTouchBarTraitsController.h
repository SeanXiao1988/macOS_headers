//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSColorWell, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface BTTTouchBarTraitsController : NSWindowController
{
    BOOL _showHUDOverlay;
    BOOL _onlyShowIcon;
    NSString *_buttonColorString;
    NSString *_hudTitle;
    NSString *_hudDetailText;
    long long _itemPlacement;
    double _itemPadding;
    NSTextField *_hudTitleField;
    NSTextField *_hudDetailTitleField;
    double _freeSpaceAfter;
    NSTextField *_afterSpaceField;
    NSColorWell *_buttonColorWell;
}

@property __weak NSColorWell *buttonColorWell; // @synthesize buttonColorWell=_buttonColorWell;
@property __weak NSTextField *afterSpaceField; // @synthesize afterSpaceField=_afterSpaceField;
@property(nonatomic) double freeSpaceAfter; // @synthesize freeSpaceAfter=_freeSpaceAfter;
@property __weak NSTextField *hudDetailTitleField; // @synthesize hudDetailTitleField=_hudDetailTitleField;
@property __weak NSTextField *hudTitleField; // @synthesize hudTitleField=_hudTitleField;
@property(nonatomic) double itemPadding; // @synthesize itemPadding=_itemPadding;
@property(nonatomic) long long itemPlacement; // @synthesize itemPlacement=_itemPlacement;
@property(nonatomic) BOOL onlyShowIcon; // @synthesize onlyShowIcon=_onlyShowIcon;
@property(retain, nonatomic) NSString *hudDetailText; // @synthesize hudDetailText=_hudDetailText;
@property(retain, nonatomic) NSString *hudTitle; // @synthesize hudTitle=_hudTitle;
@property(nonatomic) BOOL showHUDOverlay; // @synthesize showHUDOverlay=_showHUDOverlay;
@property(retain, nonatomic) NSString *buttonColorString; // @synthesize buttonColorString=_buttonColorString;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)save:(id)arg1;
- (void)showCharacterPalette:(id)arg1;
- (void)setColor:(id)arg1;
- (void)resetColor:(id)arg1;
- (void)windowDidLoad;

@end

