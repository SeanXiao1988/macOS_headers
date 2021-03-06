//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, iTermKeyMappingViewController;

@protocol iTermKeyMappingViewControllerDelegate <NSObject>
- (void)keyMapping:(iTermKeyMappingViewController *)arg1 loadPresetsNamed:(NSString *)arg2;
- (NSArray *)keyMappingPresetNames:(iTermKeyMappingViewController *)arg1;
- (void)keyMapping:(iTermKeyMappingViewController *)arg1 removeKeyCombo:(NSString *)arg2;
- (void)keyMapping:(iTermKeyMappingViewController *)arg1 didChangeKeyCombo:(NSString *)arg2 atIndex:(long long)arg3 toAction:(int)arg4 parameter:(NSString *)arg5 isAddition:(BOOL)arg6;
- (NSArray *)keyMappingSortedKeys:(iTermKeyMappingViewController *)arg1;
- (NSDictionary *)keyMappingDictionary:(iTermKeyMappingViewController *)arg1;
@end

