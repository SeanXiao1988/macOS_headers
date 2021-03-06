//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "TSDMacAnnotationViewSizing-Protocol.h"

@class NSLayoutConstraint, NSString, TSDCommentStorage, TSDMacAnnotationButtonHoverable;

@interface TSDMacCommentThreadFooterView : NSView <TSDMacAnnotationViewSizing>
{
    BOOL _sidebarMode;
    BOOL _prototypeMode;
    TSDMacAnnotationButtonHoverable *_replyButton;
    TSDMacAnnotationButtonHoverable *_doneButton;
    TSDMacAnnotationButtonHoverable *_deleteButton;
    TSDMacAnnotationButtonHoverable *_previousAnnotation;
    TSDMacAnnotationButtonHoverable *_nextAnnotation;
    TSDCommentStorage *_commentStorage;
    NSLayoutConstraint *_replyButtonLeadingConstraintUsedInPopover;
    NSLayoutConstraint *_deleteButtonLeadingConstraintUsedInPopover;
    NSLayoutConstraint *_replyButtonLeadingConstraintWithNoDeleteButtonShownInSidebar;
    NSLayoutConstraint *_replyButtonLeadingConstraintWithDeleteButtonShownInSidebar;
    NSLayoutConstraint *_deleteButtonLeadingConstraintUsedInSidebar;
}

@property(retain, nonatomic) NSLayoutConstraint *deleteButtonLeadingConstraintUsedInSidebar; // @synthesize deleteButtonLeadingConstraintUsedInSidebar=_deleteButtonLeadingConstraintUsedInSidebar;
@property(retain, nonatomic) NSLayoutConstraint *replyButtonLeadingConstraintWithDeleteButtonShownInSidebar; // @synthesize replyButtonLeadingConstraintWithDeleteButtonShownInSidebar=_replyButtonLeadingConstraintWithDeleteButtonShownInSidebar;
@property(retain, nonatomic) NSLayoutConstraint *replyButtonLeadingConstraintWithNoDeleteButtonShownInSidebar; // @synthesize replyButtonLeadingConstraintWithNoDeleteButtonShownInSidebar=_replyButtonLeadingConstraintWithNoDeleteButtonShownInSidebar;
@property(retain, nonatomic) NSLayoutConstraint *deleteButtonLeadingConstraintUsedInPopover; // @synthesize deleteButtonLeadingConstraintUsedInPopover=_deleteButtonLeadingConstraintUsedInPopover;
@property(retain, nonatomic) NSLayoutConstraint *replyButtonLeadingConstraintUsedInPopover; // @synthesize replyButtonLeadingConstraintUsedInPopover=_replyButtonLeadingConstraintUsedInPopover;
@property(nonatomic) BOOL prototypeMode; // @synthesize prototypeMode=_prototypeMode;
@property(nonatomic) BOOL sidebarMode; // @synthesize sidebarMode=_sidebarMode;
@property(retain, nonatomic) TSDCommentStorage *commentStorage; // @synthesize commentStorage=_commentStorage;
@property(retain, nonatomic) TSDMacAnnotationButtonHoverable *nextAnnotation; // @synthesize nextAnnotation=_nextAnnotation;
@property(retain, nonatomic) TSDMacAnnotationButtonHoverable *previousAnnotation; // @synthesize previousAnnotation=_previousAnnotation;
@property(retain, nonatomic) TSDMacAnnotationButtonHoverable *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) TSDMacAnnotationButtonHoverable *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) TSDMacAnnotationButtonHoverable *replyButton; // @synthesize replyButton=_replyButton;
- (void).cxx_destruct;
- (void)p_tintAllButtons;
- (void)p_updateConstraintsForSidebar;
- (void)setVisibilityForReplyButton:(BOOL)arg1 andDeleteButton:(BOOL)arg2;
- (void)p_addConstraints;
- (void)p_addSubViews;
- (void)p_setup;
- (double)prototypeHeight;
- (void)setWidth:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

