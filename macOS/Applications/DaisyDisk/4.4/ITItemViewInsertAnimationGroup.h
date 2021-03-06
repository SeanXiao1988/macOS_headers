//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IITItemViewInsertAnimationDelegate-Protocol.h"

@class NSMutableArray;
@protocol IITItemViewInsertAnimationGroupDelegate;

@interface ITItemViewInsertAnimationGroup : NSObject <IITItemViewInsertAnimationDelegate>
{
    NSMutableArray *m_animations;
    NSMutableArray *m_fadingAnimations;
    NSMutableArray *m_healingAnimations;
    id <IITItemViewInsertAnimationGroupDelegate> m_delegate;
}

- (void)insertAnimationDidFadeIn:(id)arg1;
- (void)insertAnimationDidUnheal:(id)arg1 fadeOnly:(BOOL)arg2;
- (BOOL)isEmpty;
- (void)removeAllAnimations;
- (void)removeAnimationAtIndex:(unsigned long long)arg1;
- (id)animations;
- (void)insertAnimation:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addAnimation:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

