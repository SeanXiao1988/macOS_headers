//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVCore/AVExtendedOperation.h>

@class NSData, VCChannel, _GetVCChannelOp;

@interface VCChannelNegotiationOp : AVExtendedOperation
{
    unsigned int _message;
    _GetVCChannelOp *_channelOp;
}

@property unsigned int message; // @synthesize message=_message;
- (void)dealloc;
@property(readonly, retain) NSData *connectionData;
@property(readonly, retain) VCChannel *vcChannel;
- (id)initWithNegotiation:(id)arg1 message:(unsigned int)arg2;
- (void)_createChildOpsWithIMHandle:(id)arg1;

@end

