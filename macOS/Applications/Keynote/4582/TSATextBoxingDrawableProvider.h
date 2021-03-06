//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDPasteboardDrawableProvider-Protocol.h"
#import "TSDPasteboardImportableDrawableProvider-Protocol.h"

@class NSDictionary, NSError, NSString, TSAStyleMapper, TSDDrawableInfo, TSDInfoGeometry, TSSTheme, TSUProgress, TSWPStorage;
@protocol TSDPasteboardImportableDrawableProviderDelegate;

@interface TSATextBoxingDrawableProvider : NSObject <TSDPasteboardDrawableProvider, TSDPasteboardImportableDrawableProvider>
{
    TSWPStorage *_textStorage;
    NSString *_textString;
    TSDInfoGeometry *_geometry;
    TSSTheme *_targetTheme;
    TSAStyleMapper *_styleMapper;
    BOOL _keepHighlights;
    TSDDrawableInfo *_drawable;
    NSError *error;
    TSUProgress *progress;
    unsigned long long dataLength;
    id <TSDPasteboardImportableDrawableProviderDelegate> delegate;
}

@property(nonatomic) id <TSDPasteboardImportableDrawableProviderDelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic) unsigned long long dataLength; // @synthesize dataLength;
@property(readonly, nonatomic) TSUProgress *progress; // @synthesize progress;
@property(readonly, nonatomic) NSError *error; // @synthesize error;
@property(readonly, nonatomic) TSDDrawableInfo *drawable; // @synthesize drawable=_drawable;
- (void).cxx_destruct;
- (void)cancel;
- (void)provideDrawableWithObjectContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSDictionary *pasteboardDescription;
- (id)newDrawableWithObjectContext:(id)arg1 forceMatchStyle:(BOOL)arg2 bakeSize:(BOOL)arg3;
- (id)initWithTextString:(id)arg1 geometry:(id)arg2 theme:(id)arg3;
- (id)initWithTextStorage:(id)arg1 geometry:(id)arg2 theme:(id)arg3 styleMapper:(id)arg4 keepHighlights:(BOOL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

