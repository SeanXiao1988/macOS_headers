//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSFileHandle.h>

@class NSString;

@interface ASBAtomicFileHandle : NSFileHandle
{
    NSFileHandle *_backingHandle;
    NSString *_tempFilePath;
    NSString *_destFilePath;
}

+ (id)fileHandleForWritingToURL:(id)arg1 error:(id *)arg2;
+ (id)fileHandleForWritingAtPath:(id)arg1;
- (BOOL)writeData:(id)arg1 error:(id *)arg2;
- (void)writeData:(id)arg1;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (unsigned long long)seekToEndOfFile;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (unsigned long long)offsetInFile;
- (id)readDataToEndOfFile;
- (id)readDataOfLength:(unsigned long long)arg1;
- (id)availableData;
- (void)synchronizeFile;
- (void)closeFile;
- (BOOL)commitChangesAndReturnError:(id *)arg1;
- (void)dealloc;

@end

