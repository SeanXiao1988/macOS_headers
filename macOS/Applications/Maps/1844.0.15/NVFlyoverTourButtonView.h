//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton, NSTextField, VKLabelMarker;
@protocol NVFlyoverTourButtonViewDelegate;

__attribute__((visibility("hidden")))
@interface NVFlyoverTourButtonView : NSView
{
    VKLabelMarker *_labelMarker;
    id <NVFlyoverTourButtonViewDelegate> _buttonDelegate;
    NSButton *_flyoverTourButton;
    NSTextField *_titleField;
}

@property(nonatomic) __weak NSTextField *titleField; // @synthesize titleField=_titleField;
@property __weak NSButton *flyoverTourButton; // @synthesize flyoverTourButton=_flyoverTourButton;
@property(nonatomic) __weak id <NVFlyoverTourButtonViewDelegate> buttonDelegate; // @synthesize buttonDelegate=_buttonDelegate;
@property(retain, nonatomic) VKLabelMarker *labelMarker; // @synthesize labelMarker=_labelMarker;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)flyoverTourClicked:(id)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

@end

