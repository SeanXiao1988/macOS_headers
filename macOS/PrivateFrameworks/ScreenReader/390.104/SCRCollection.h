//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/_SCRCollectionSectionBase.h>

__attribute__((visibility("hidden")))
@interface SCRCollection : _SCRCollectionSectionBase
{
    struct {
        unsigned int registeredSelectedCellsChangedNotification;
    } _srcFlags;
}

- (id)focusOntoUIElement:(id)arg1 withScrolling:(BOOL)arg2 withSelection:(BOOL)arg3;
- (void)_echoChangesFromCellUIElements:(id)arg1 toCellUIElements:(id)arg2 outputRequest:(id)arg3 descriptor:(CDUnknownBlockType)arg4 singleCellOutputHandler:(CDUnknownBlockType)arg5;
- (void)_selectedCellsDidChange:(id)arg1;
- (void)setIsEventHandler:(BOOL)arg1 isKeyboardHandler:(BOOL)arg2;
- (void)dealloc;

@end

