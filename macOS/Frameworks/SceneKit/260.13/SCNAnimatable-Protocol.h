//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SceneKit/NSObject-Protocol.h>

@class CAAnimation, NSArray, NSString;

@protocol SCNAnimatable <NSObject>
- (void)removeAnimationForKey:(NSString *)arg1 fadeOutDuration:(double)arg2;
- (BOOL)isAnimationForKeyPaused:(NSString *)arg1;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
@end

