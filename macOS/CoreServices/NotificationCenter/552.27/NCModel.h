//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QLPreviewItem-Protocol.h"

@class NCAppInfo, NSProgress, NSString, NSURL, NSUserNotification;

@interface NCModel : NSObject <QLPreviewItem>
{
    NCAppInfo *_app;
    NSUserNotification *_note;
    BOOL _drawsDividerLine;
    BOOL _inRecents;
    NSString *_title;
    NSProgress *_progress;
    unsigned long long _notesRepresented;
    double _cachedRowHeight;
    unsigned long long _type;
}

+ (id)modelForType:(unsigned long long)arg1;
+ (id)modelWithTitle:(id)arg1;
+ (id)modelWithApp:(id)arg1 note:(id)arg2;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) BOOL inRecents; // @synthesize inRecents=_inRecents;
@property(nonatomic) BOOL drawsDividerLine; // @synthesize drawsDividerLine=_drawsDividerLine;
@property(nonatomic) double cachedRowHeight; // @synthesize cachedRowHeight=_cachedRowHeight;
@property(readonly, nonatomic) unsigned long long notesRepresented; // @synthesize notesRepresented=_notesRepresented;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSUserNotification *note; // @synthesize note=_note;
@property(retain, nonatomic) NCAppInfo *app; // @synthesize app=_app;
- (void).cxx_destruct;
@property(readonly) NSString *previewItemTitle;
@property(readonly) NSURL *previewItemURL;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) id previewItemDisplayState;
@property(readonly) Class superclass;

@end

