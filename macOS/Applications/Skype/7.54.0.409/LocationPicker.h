//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class CLLocation, LocationPickerViewController, NSString;

@interface LocationPicker : NSWindowController
{
    LocationPickerViewController *_locationPickerViewController;
}

+ (id)locationPicker;
@property(retain, nonatomic) LocationPickerViewController *locationPickerViewController; // @synthesize locationPickerViewController=_locationPickerViewController;
- (void).cxx_destruct;
- (void)finishWithReturnCode:(long long)arg1;
- (void)cancelAction:(id)arg1;
- (void)sendAction:(id)arg1;
@property(readonly, nonatomic) __weak NSString *pointOfInterest;
@property(readonly, nonatomic) __weak NSString *address;
@property(readonly, nonatomic) __weak CLLocation *location;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopPicking;
- (void)startPicking;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

