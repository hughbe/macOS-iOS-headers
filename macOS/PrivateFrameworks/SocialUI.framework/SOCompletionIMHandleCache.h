//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SOCompletionIMHandleCache : NSObject
{
    NSMutableDictionary *_accountUIDToIMHandleMap;
    NSMutableDictionary *_accountUIDToHandleIDMap;
}

+ (id)sharedCache;
@property(retain, nonatomic) NSMutableDictionary *accountUIDToHandleIDMap; // @synthesize accountUIDToHandleIDMap=_accountUIDToHandleIDMap;
- (void).cxx_destruct;
- (void)removeBuddyListForAccount:(id)arg1;
- (void)saveBuddyListForAccount:(id)arg1;
- (id)imHandlesForAccountUniqueID:(id)arg1;
- (id)handleIDsForAccountUniqueID:(id)arg1;
- (void)_accountWasRemoved:(id)arg1;
- (id)init;

@end

