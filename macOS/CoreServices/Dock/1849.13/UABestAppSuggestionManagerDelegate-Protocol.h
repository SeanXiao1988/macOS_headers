//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UABestAppSuggestion;

@protocol UABestAppSuggestionManagerDelegate <NSObject>

@optional
- (void)connectionInterrupted;
- (void)bestAppSuggestionChanged:(UABestAppSuggestion *)arg1;
- (void)bestAppSuggestionMayHaveChanged;
@end

