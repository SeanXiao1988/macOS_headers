//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICPTask.h"

@class NSMutableArray;

@interface UpdateLibraryTask : ICPTask
{
    NSMutableArray *_updateCompletionHandlers;
    CDUnknownBlockType _taskAction;
}

@property(copy) CDUnknownBlockType taskAction; // @synthesize taskAction=_taskAction;
@property(retain) NSMutableArray *updateCompletionHandlers; // @synthesize updateCompletionHandlers=_updateCompletionHandlers;
- (void).cxx_destruct;
- (BOOL)mergeIntoTask:(id)arg1;
- (void)runWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1 taskAction:(CDUnknownBlockType)arg2;

@end

