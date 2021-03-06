//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSString, PKPassTextField;

@interface PKPassFieldView : NSView
{
    NSString *_key;
    PKPassTextField *_labelField;
    PKPassTextField *_valueField;
}

@property(readonly) PKPassTextField *valueField; // @synthesize valueField=_valueField;
@property(readonly) PKPassTextField *labelField; // @synthesize labelField=_labelField;
@property(readonly) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFieldType:(int)arg1 key:(id)arg2 label:(id)arg3 value:(id)arg4;
- (id)_textFieldWithValue:(id)arg1;

@end

