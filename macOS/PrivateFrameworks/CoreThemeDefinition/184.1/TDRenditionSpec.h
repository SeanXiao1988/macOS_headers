//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, TDElementProduction, TDRenditionKeySpec, TDRenditionType;

@interface TDRenditionSpec : NSManagedObject
{
}

@property(retain, nonatomic) TDRenditionType *renditionType; // @dynamic renditionType;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)resetToBaseKeySpec;
- (void)awakeFromInsert;

// Remaining properties
@property(retain, nonatomic) NSDate *dateOfLastChange; // @dynamic dateOfLastChange;
@property(retain, nonatomic) TDRenditionKeySpec *keySpec; // @dynamic keySpec;
@property(retain, nonatomic) TDElementProduction *production; // @dynamic production;

@end

