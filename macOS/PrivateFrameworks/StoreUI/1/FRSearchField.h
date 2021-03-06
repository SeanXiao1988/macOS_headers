//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSearchField.h>

@class FRHintsController, FRStoreViewController;

@interface FRSearchField : NSSearchField
{
    FRHintsController *_hintsController;
    FRStoreViewController *_storeViewController;
}

+ (void)initialize;
@property(nonatomic) __weak FRStoreViewController *storeViewController; // @synthesize storeViewController=_storeViewController;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)arg1;
@property(readonly) BOOL isRestricted;
- (void)addHintsWithDictionary:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

