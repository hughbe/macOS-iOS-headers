//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBookAutocomplete/ABAutocompleteLocalQueryStrategy-Protocol.h>

@class NSString;

@interface ABAutocompleteLocalQueryContactStrategy : NSObject <ABAutocompleteLocalQueryStrategy>
{
}

- (id)predicateForProperties:(id)arg1 term:(id)arg2;
- (id)fetchRequestForTerms:(id)arg1;
- (id)autocompleteResultsForProperties:(id)arg1 fetchResults:(id)arg2 resultFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

