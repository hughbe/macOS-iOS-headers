//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface WBSSavedPasswordStore : NSObject
{
    NSMutableDictionary *_domainToUsers;
    NSArray *_savedPasswords;
}

+ (void)removePassword:(id)arg1;
+ (id)savedPasswordForURL:(id)arg1 user:(id)arg2 password:(id)arg3;
+ (id)sharedStore;
- (void).cxx_destruct;
- (void)reset;
- (id)saveUser:(id)arg1 password:(id)arg2 forUserTypedSite:(id)arg3;
- (BOOL)canSaveUser:(id)arg1 password:(id)arg2 forUserTypedSite:(id)arg3;
- (BOOL)changeSavedPassword:(id)arg1 toUser:(id)arg2 password:(id)arg3;
- (BOOL)canChangeSavedPassword:(id)arg1 toUser:(id)arg2 password:(id)arg3;
- (void)removeSite:(id)arg1 fromPassword:(id)arg2;
- (void)removePassword:(id)arg1;
- (void)_removePassword:(id)arg1;
@property(readonly, nonatomic) NSArray *savedPasswords;

@end

