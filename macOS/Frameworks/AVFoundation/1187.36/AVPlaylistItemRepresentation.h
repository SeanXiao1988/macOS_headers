//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>
#import <AVFoundation/NSMutableCopying-Protocol.h>

@class AVPlaylistItemRepresentationInternal, AVURLAsset, NSDictionary, NSString;

@interface AVPlaylistItemRepresentation : NSObject <NSCopying, NSMutableCopying>
{
    AVPlaylistItemRepresentationInternal *_ivars;
}

@property(readonly, nonatomic) NSDictionary *gaplessInfo;
@property(readonly, nonatomic) NSString *serviceIdentifier;
@property(readonly, nonatomic) NSDictionary *audibleDRMInfo;
@property(readonly, nonatomic) AVURLAsset *asset;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithURLAsset:(id)arg1;
- (id)init;

@end

