//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Contacts/NSObject-Protocol.h>

@class NSArray, NSExpression, NSString;

@protocol CNLDAPPredicateRemapping <NSObject>

@optional
- (NSString *)predicateForLeft:(NSExpression *)arg1 betweenLowerBound:(NSExpression *)arg2 upperBound:(NSExpression *)arg3;
- (NSString *)predicateForLeft:(NSExpression *)arg1 containsRight:(NSExpression *)arg2;
- (NSString *)predicateForLeft:(NSExpression *)arg1 inRight:(NSArray *)arg2;
- (NSString *)predicateForLeft:(NSExpression *)arg1 endsWithRight:(NSExpression *)arg2;
- (NSString *)predicateForLeft:(NSExpression *)arg1 beginsWithRight:(NSExpression *)arg2;
- (NSString *)predicateForLeft:(NSExpression *)arg1 likeRight:(NSExpression *)arg2;
- (NSString *)predicateForLeft:(NSExpression *)arg1 matchesRight:(NSExpression *)arg2;
- (NSString *)predicateForLeft:(NSExpression *)arg1 notEqualToRight:(NSExpression *)arg2;
- (NSString *)predicateForLeft:(NSExpression *)arg1 equalToRight:(NSExpression *)arg2;
- (NSString *)predicateForLeft:(NSExpression *)arg1 greaterThanOrEqualToRight:(NSExpression *)arg2;
- (NSString *)predicateForLeft:(NSExpression *)arg1 greaterThanRight:(NSExpression *)arg2;
- (NSString *)predicateForLeft:(NSExpression *)arg1 lessThanOrEqualToRight:(NSExpression *)arg2;
- (NSString *)predicateForLeft:(NSExpression *)arg1 lessThanRight:(NSExpression *)arg2;
- (NSString *)or:(NSArray *)arg1;
- (NSString *)and:(NSArray *)arg1;
- (NSString *)not:(NSArray *)arg1;
@end

