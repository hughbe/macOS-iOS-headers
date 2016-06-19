//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface GKThreadsafeDictionary : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_dictionary;
}

@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)allKeys;
- (void)writeToDictionary:(CDUnknownBlockType)arg1;
- (void)readFromDictionary:(CDUnknownBlockType)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKeyWillReplace:(id)arg1 objectProducerBlock:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1 objectProducerBlock:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (id)allObjects;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

