//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSlider.h>

@interface IPXRetouchSlider : NSSlider
{
    CDUnknownBlockType _onTouchesBegan;
    CDUnknownBlockType _onTouchesCancelled;
    CDUnknownBlockType _onTouchesEnded;
}

@property(copy, nonatomic) CDUnknownBlockType onTouchesEnded; // @synthesize onTouchesEnded=_onTouchesEnded;
@property(copy, nonatomic) CDUnknownBlockType onTouchesCancelled; // @synthesize onTouchesCancelled=_onTouchesCancelled;
@property(copy, nonatomic) CDUnknownBlockType onTouchesBegan; // @synthesize onTouchesBegan=_onTouchesBegan;
- (void).cxx_destruct;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;

@end

