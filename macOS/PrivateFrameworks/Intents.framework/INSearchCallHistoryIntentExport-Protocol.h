//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INDateComponentsRange, INPerson, NSNumber;

@protocol INSearchCallHistoryIntentExport <NSObject, JSExport>
@property(copy) NSNumber *unseen;
@property long long preferredCallProvider;
@property unsigned long long callTypes;
@property unsigned long long callCapabilities;
@property(copy) INPerson *recipient;
@property(copy) INDateComponentsRange *dateCreated;
- (id)init;
@end

