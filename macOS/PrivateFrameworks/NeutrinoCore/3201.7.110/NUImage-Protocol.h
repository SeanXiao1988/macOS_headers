//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NSObject-Protocol.h>
#import <NeutrinoCore/NUImageCopying-Protocol.h>

@class NUColorSpace, NUImageLayout, NUPixelFormat, NURegion;

@protocol NUImage <NSObject, NUImageCopying>
@property(readonly, copy) NURegion *validRegion;
@property(readonly) CDStruct_912cb5d2 size;
@property(readonly) NUColorSpace *colorSpace;
@property(readonly) NUPixelFormat *format;
@property(readonly) NUImageLayout *layout;
@end

