//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface CalTypeTableRowData : NSObject
{
    NSImage *typeImage;
    NSString *typeTitle;
}

+ (id)rowDataWithTitle:(id)arg1 image:(id)arg2;
@property(retain) NSString *title; // @synthesize title=typeTitle;
@property(retain) NSImage *image; // @synthesize image=typeImage;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2;

@end

