//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPRemoteViewConnection, GCDAsyncSocket, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CPRemoteViewServer : NSObject
{
    NSString *iConnectedUUID;
    NSMutableArray *iValidDevices;
    GCDAsyncSocket *serverSocket;
    CPRemoteViewConnection *currentConnection;
    BOOL iConnected;
    id iDelegate;
}

@property id delegate; // @synthesize delegate=iDelegate;
@property(readonly) BOOL connected; // @synthesize connected=iConnected;
@property(readonly) NSArray *validDevices; // @synthesize validDevices=iValidDevices;
@property(retain) GCDAsyncSocket *serverSocket; // @synthesize serverSocket;
@property(retain) NSString *connectedUUID; // @synthesize connectedUUID=iConnectedUUID;
- (void)updateDeviceWithData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 description:(id)arg5 type:(int)arg6 displayURL:(id)arg7;
- (void)removeValidDevice:(id)arg1;
- (void)addValidDevice:(id)arg1 name:(id)arg2;
- (void)disconnectDevice;
- (void)closeConnection:(id)arg1;
- (void)connectionRequestedRefresh:(id)arg1;
- (void)connection:(id)arg1 connectedToDevice:(id)arg2;
- (BOOL)connection:(id)arg1 shouldAllowDeviceToConnect:(id)arg2;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (void)dealloc;
- (id)init;

@end

