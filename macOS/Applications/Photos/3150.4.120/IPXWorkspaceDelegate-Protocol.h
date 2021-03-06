//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXWorkspaceModel;

@protocol IPXWorkspaceDelegate <NSObject>
- (BOOL)workspacePhotosHasContent:(IPXWorkspaceModel *)arg1;
- (void)workspace:(IPXWorkspaceModel *)arg1 willRemoveBrowserAtIndex:(unsigned long long)arg2;
- (void)workspace:(IPXWorkspaceModel *)arg1 didSelectBrowserAtIndex:(unsigned long long)arg2;
- (void)workspace:(IPXWorkspaceModel *)arg1 didAddBrowserAtIndex:(unsigned long long)arg2;

@optional
- (void)workspaceWillSave:(IPXWorkspaceModel *)arg1;
- (void)showTrashBrowserForWorkspace:(IPXWorkspaceModel *)arg1;
@end

