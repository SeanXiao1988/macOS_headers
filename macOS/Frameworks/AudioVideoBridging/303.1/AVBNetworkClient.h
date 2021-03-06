//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVBInterface, AVBMACAddress, NSString;

@interface AVBNetworkClient : NSObject
{
    unsigned int connection;
    unsigned long long _linkSpeed;
    struct IONotificationPort *notificationPort;
    struct dispatch_queue_s *notificationsQueue;
    unsigned int notification;
    AVBInterface *interface;
    NSString *interfaceName;
    AVBMACAddress *macAddress;
}

+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1;
@property(copy) AVBMACAddress *macAddress; // @synthesize macAddress;
@property(copy) NSString *interfaceName; // @synthesize interfaceName;
@property AVBInterface *interface; // @synthesize interface;
- (void)dealloc;
- (void)finalize;
- (id)description;
- (unsigned long long)streamIDForStreamIndex:(unsigned short)arg1;
@property(readonly) unsigned int maximumFrameTime; // @dynamic maximumFrameTime;
@property(readonly) unsigned long long minimumOutputLatency; // @dynamic minimumOutputLatency;
- (BOOL)createIIDCIOSurfaceOutputStreamWithID:(unsigned long long)arg1 onVLANID:(unsigned short)arg2 withPriorityCodePoint:(unsigned char)arg3 andDestiantionMAC:(id)arg4 withMaximumSurfacesPerSecond:(unsigned int)arg5 maximumSurfaceDataLength:(unsigned long long)arg6 maximumSurfaceDataLengthPerPDU:(unsigned long long)arg7 error:(id *)arg8;
- (BOOL)createIIDCIOSurfaceInputStreamWithID:(unsigned long long)arg1 onVLANID:(unsigned short)arg2 withPriorityCodePoint:(unsigned char)arg3 andDestiantionMAC:(id)arg4 withMaximumSurfacesPerSecond:(unsigned int)arg5 maximumSurfaceDataLength:(unsigned long long)arg6 maximumSurfaceDataLengthPerPDU:(unsigned long long)arg7 error:(id *)arg8;
- (BOOL)destroyOutputStreamWithID:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)createUserSpaceOutputStreamWithID:(unsigned long long)arg1 onVLANID:(unsigned short)arg2 withPriorityCodePoint:(unsigned char)arg3 andDestiantionMAC:(id)arg4 withNumberOfPackets:(unsigned int)arg5 ofHeaderSize:(unsigned int)arg6 andPayloadSize:(unsigned int)arg7 timerPeriod:(unsigned int)arg8 error:(id *)arg9;
- (BOOL)destroyInputStreamWithID:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)createUserSpaceInputStreamWithID:(unsigned long long)arg1 onVLANID:(unsigned short)arg2 withPriorityCodePoint:(unsigned char)arg3 andDestiantionMAC:(id)arg4 withNumberOfPackets:(unsigned int)arg5 ofHeaderSize:(unsigned int)arg6 andPayloadSize:(unsigned int)arg7 error:(id *)arg8;
- (BOOL)releaseStreamIndex:(unsigned short)arg1 error:(id *)arg2;
- (BOOL)nextAvailableStreamIndex:(unsigned short *)arg1 error:(id *)arg2;
- (id)initWithInterfaceName:(id)arg1;
- (id)initWithInterface:(id)arg1;
- (id)commonInit;

@end

