//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFConversation, NSUUID;

@interface AFChildConversationItemList : NSObject
{
    AFConversation *_conversation;
    NSUUID *_parentItemIdentifier;
}

@property(readonly, nonatomic, getter=_parentItemIdentifier) NSUUID *parentItemIdentifier; // @synthesize parentItemIdentifier=_parentItemIdentifier;
@property(readonly, nonatomic, getter=_conversation) AFConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (void)_addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3 asChildrenOfItemWithIdentifier:(id)arg4;
- (id)_indexPathForItemAtIndex:(long long)arg1;
- (id)_identifierOfItemAtIndex:(long long)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (id)identifiersForItemsAtIndexes:(id)arg1;
- (void)addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3 asChildrenOfItemAtIndex:(long long)arg4;
- (void)addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3;
- (id)itemWithIdentifier:(id)arg1;
- (id)itemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)init;
- (id)initWithConversation:(id)arg1 parentItemIdentifier:(id)arg2;

@end

