//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICAttachment, ICAttachmentGalleryModel, NSUndoManager;

@interface ICDocCamScannedDocumentEditor : NSObject
{
    NSUndoManager *_undoManager;
    ICAttachment *_galleryAttachment;
}

@property(retain, nonatomic) ICAttachment *galleryAttachment; // @synthesize galleryAttachment=_galleryAttachment;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
- (void).cxx_destruct;
- (unsigned long long)indexForAttachmentWithIdentifier:(id)arg1;
- (id)subAttachmentWithIdentifier:(id)arg1;
- (void)setMarkupData:(id)arg1 forAttachmentWithIdentifier:(id)arg2;
- (void)undoablySetQuad:(id)arg1 forAttachment:(id)arg2;
- (void)setQuad:(id)arg1 forAttachment:(id)arg2;
- (void)setQuad:(id)arg1 forAttachmentWithIdentifier:(id)arg2;
- (void)applyFilter:(short)arg1 forAttachmentAtIndex:(unsigned long long)arg2;
- (void)applyFilter:(short)arg1 forAttachmentWithIdentifier:(id)arg2;
- (void)undoablySetOrientation:(long long)arg1 forAttachmentIdentifier:(id)arg2;
- (void)setOrientation:(long long)arg1 forAttachmentAtIndex:(unsigned long long)arg2;
- (BOOL)setOrientation:(long long)arg1 forAttachment:(id)arg2;
- (void)deletePagesAtIndexes:(id)arg1;
- (void)undoablyDeleteSubAttachments:(id)arg1 actionName:(id)arg2;
- (void)undoablyUndeleteSubAttachments:(id)arg1 orderedSetIndexes:(id)arg2 actionName:(id)arg3;
- (void)undoablyMoveAttachmentWithIdentifier:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)movePageFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (BOOL)moveObjectWithIdentifier:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)undoablyUpdateTitle:(id)arg1 forAttachmentWithIdentifier:(id)arg2;
- (BOOL)updateTitle:(id)arg1 forSubAttachment:(id)arg2;
- (void)updateDocumentTitle:(id)arg1;
- (void)saveAndUpdatePreview:(BOOL)arg1;
- (void)undeleteSubAttachment:(id)arg1;
@property(readonly, nonatomic) ICAttachmentGalleryModel *galleryModel;
- (id)initWithGalleryAttachment:(id)arg1;

@end

