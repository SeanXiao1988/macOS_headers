//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteLocalQueryDelegate-Protocol.h>

@class NSString;

@interface CNAutocompleteLocalQueryContactDelegate : NSObject <CNAutocompleteLocalQueryDelegate>
{
}

- (id)predicateForProperties:(id)arg1 term:(id)arg2;
- (id)fetchRequestForTerms:(id)arg1;
- (CDUnknownBlockType)transformWithProperties:(id)arg1 factory:(id)arg2;
- (id)autocompleteResultsForProperties:(id)arg1 fetchResults:(id)arg2 resultFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

