//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenSaver/ScreenSaverImagesModule.h>

#import <ScreenSaver/NSCopying-Protocol.h>

@class NSArray, NSString, NSURL;

@interface ScreenSaverMobileMeGalleryModule : ScreenSaverImagesModule <NSCopying>
{
    NSString *_memberName;
    NSURL *_feedURL;
    NSArray *_albums;
}

+ (id)mobileMeGalleryModuleFromSubscription:(id)arg1;
+ (id)mobileMeGalleryModuleWithMemberName:(id)arg1;
- (BOOL)requiresGraphicsAcceleration;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isSlideshow;
- (void)setAlbums:(id)arg1;
- (id)albums;
- (id)path;
- (id)memberName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setMemberName:(id)arg1;
- (void)dealloc;

@end

