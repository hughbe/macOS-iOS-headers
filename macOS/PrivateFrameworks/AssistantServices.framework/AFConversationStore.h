//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AFConversationStore : NSObject
{
    NSMutableDictionary *_conversationsByIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic, getter=_conversationsByIdentifier) NSMutableDictionary *conversationsByIdentifier; // @synthesize conversationsByIdentifier=_conversationsByIdentifier;
- (void)removeConversationWithIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchConversationWithIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)saveConversation:(id)arg1 withIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_registerConversation:(id)arg1 withIdentifier:(id)arg2;
- (id)init;

@end

