//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IconServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSUUID;

__attribute__((visibility("hidden")))
@interface ISImageDescriptor : NSObject <NSSecureCoding>
{
    struct CGSize _size;
    unsigned int _scale;
    NSDictionary *_options;
    BOOL _asyncRequest;
}

+ (id)imageDescriptorWithBinding:(struct _LSBinding *)arg1 size:(struct CGSize)arg2 scale:(unsigned int)arg3 options:(id)arg4;
+ (BOOL)supportsSecureCoding;
@property(getter=isAsyncRequest) BOOL asyncRequest; // @synthesize asyncRequest=_asyncRequest;
@property(readonly) NSDictionary *options; // @synthesize options=_options;
@property(readonly) unsigned int scale; // @synthesize scale=_scale;
@property(readonly) struct CGSize size; // @synthesize size=_size;
@property(readonly, getter=isImageNullable) BOOL imageNullable;
- (BOOL)checkValidationToken:(CDStruct_32a7f38a *)arg1;
- (CDStruct_32a7f38a)validationToken;
- (void)enumerateIconResourceInfoWithOptions:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly) NSUUID *resourceUUID; // @dynamic resourceUUID;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 scale:(unsigned int)arg2 options:(id)arg3;

@end

