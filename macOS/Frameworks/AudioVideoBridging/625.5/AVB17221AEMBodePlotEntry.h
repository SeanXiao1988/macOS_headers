//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMObject.h>

#import <AudioVideoBridging/NSCopying-Protocol.h>

@class NSData;

@interface AVB17221AEMBodePlotEntry : AVB17221AEMObject <NSCopying>
{
    float frequency;
    float magnitude;
    float phase;
}

@property(nonatomic) float phase; // @synthesize phase;
@property(nonatomic) float magnitude; // @synthesize magnitude;
@property(nonatomic) float frequency; // @synthesize frequency;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSData *valueData; // @dynamic valueData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlRepresentation;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;

@end

