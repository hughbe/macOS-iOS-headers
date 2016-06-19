//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import "SAServerBoundCommand.h"

@class NSDictionary, NSString;

@interface SAMetrics : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)metricsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)metrics;
@property(copy, nonatomic) NSDictionary *timings;
@property(copy, nonatomic) NSString *originalCommandId;
@property(copy, nonatomic) NSDictionary *eventInformation;
@property(copy, nonatomic) NSString *category;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)_descriptionHint;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

