//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSStepper.h>

@class TSKMacStepperCell, TSKMacStepperDimensions;
@protocol TSKMacStepperDelegate;

@interface TSKMacStepper : NSStepper
{
    TSKMacStepperDimensions *mDimensions;
    id <TSKMacStepperDelegate> mDelegate;
    BOOL mKeyInteractionInProgress;
}

+ (Class)cellClass;
+ (id)dimensionsForStyle:(long long)arg1;
+ (id)verticalDimensions;
+ (id)horizontalPlusMinusDimensions;
+ (id)horizontalDimensions;
@property(nonatomic) BOOL keyInteractionInProgress; // @synthesize keyInteractionInProgress=mKeyInteractionInProgress;
@property(nonatomic) id <TSKMacStepperDelegate> delegate; // @synthesize delegate=mDelegate;
@property(readonly) TSKMacStepperDimensions *dimensions; // @synthesize dimensions=mDimensions;
- (void)moveUp:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)p_interestingKeyPressedTrackingUp:(BOOL)arg1;
- (void)mouseDown:(id)arg1;
- (double)increment;
@property(readonly, nonatomic) TSKMacStepperCell *stepperCell;
@property(nonatomic) double currentValue;
- (void)dealloc;
- (id)initWithStepperStyle:(long long)arg1;

@end

