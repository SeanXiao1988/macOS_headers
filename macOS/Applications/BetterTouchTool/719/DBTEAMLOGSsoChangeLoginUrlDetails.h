//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DBSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface DBTEAMLOGSsoChangeLoginUrlDetails : NSObject <DBSerializable, NSCopying>
{
    NSString *_previousValue;
    NSString *_dNewValue;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, copy, nonatomic) NSString *dNewValue; // @synthesize dNewValue=_dNewValue;
@property(readonly, copy, nonatomic) NSString *previousValue; // @synthesize previousValue=_previousValue;
- (void).cxx_destruct;
- (BOOL)isEqualToSsoChangeLoginUrlDetails:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithPreviousValue:(id)arg1 dNewValue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

