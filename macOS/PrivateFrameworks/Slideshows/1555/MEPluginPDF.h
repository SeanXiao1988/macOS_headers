//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Slideshows/MEPlugin.h>

#import <Slideshows/MEPluginRegistration-Protocol.h>
#import <Slideshows/MEPluginTypeGeneric-Protocol.h>

@interface MEPluginPDF : MEPlugin <MEPluginRegistration, MEPluginTypeGeneric>
{
}

+ (BOOL)matchesOptions:(id)arg1;
+ (void)registerPluginsToLoader:(id)arg1;
- (BOOL)exportToFile:(id)arg1 andOptions:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 andDocument:(id)arg2 andDelegate:(id)arg3;

@end

