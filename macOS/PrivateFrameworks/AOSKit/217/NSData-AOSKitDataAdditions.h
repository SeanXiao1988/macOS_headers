//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (AOSKitDataAdditions)
+ (id)generateRandomDataWithLength:(unsigned long long)arg1;
- (id)sha256EncodedDataWithNumIterations:(int)arg1;
- (id)sha256EncodedData;
- (id)aes128DecryptedDataWithKey:(id)arg1;
- (id)aes128EncryptedDataWithKey:(id)arg1;
- (id)base64DecodedData;
- (id)base64EncodedData;
@end

