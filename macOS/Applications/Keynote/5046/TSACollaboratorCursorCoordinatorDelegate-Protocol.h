//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TSACollaboratorCursorCoordinator, TSDInteractiveCanvasController, TSKDocumentRoot, TSKSelectionPath;

@protocol TSACollaboratorCursorCoordinatorDelegate <NSObject>
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot;
- (void)willScrollCollaboratorCursorToVisibleWithSelectionPath:(TSKSelectionPath *)arg1 forInteractiveCanvasController:(TSDInteractiveCanvasController *)arg2;
- (void)collaboratorCursorSelectionDidChangeForCoordinator:(TSACollaboratorCursorCoordinator *)arg1;
@end

