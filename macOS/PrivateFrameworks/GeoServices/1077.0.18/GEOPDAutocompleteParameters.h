//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteParametersAllEntries, GEOPDAutocompleteParametersFullEntriesOnly, GEOPDAutocompleteParametersLocalitiesAndLandmarks;

@interface GEOPDAutocompleteParameters : PBCodable <NSCopying>
{
    GEOPDAutocompleteParametersAllEntries *_allEntries;
    GEOPDAutocompleteParametersFullEntriesOnly *_fullEntries;
    GEOPDAutocompleteParametersLocalitiesAndLandmarks *_localitiesAndLandmarks;
    int _requestType;
    struct {
        unsigned int requestType:1;
    } _has;
}

@property(retain, nonatomic) GEOPDAutocompleteParametersLocalitiesAndLandmarks *localitiesAndLandmarks; // @synthesize localitiesAndLandmarks=_localitiesAndLandmarks;
@property(retain, nonatomic) GEOPDAutocompleteParametersAllEntries *allEntries; // @synthesize allEntries=_allEntries;
@property(retain, nonatomic) GEOPDAutocompleteParametersFullEntriesOnly *fullEntries; // @synthesize fullEntries=_fullEntries;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasLocalitiesAndLandmarks;
@property(readonly, nonatomic) BOOL hasAllEntries;
@property(readonly, nonatomic) BOOL hasFullEntries;
@property(nonatomic) BOOL hasRequestType;
- (void)dealloc;

@end

