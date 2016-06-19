//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import "SAServerBoundCommand.h"
#import "SASetSingleClientState.h"

@class NSString, SADynamiteClientState;

@interface SASetDynamiteClientState : SABaseCommand <SAServerBoundCommand, SASetSingleClientState>
{
}

+ (id)setDynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setDynamiteClientState;
@property(retain, nonatomic) SADynamiteClientState *clientState;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

