//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SGStorageContact, SGStorageEvent;

@interface SGJournalEntry : NSObject
{
    unsigned long long _operation;
    SGStorageEvent *_event;
    SGStorageContact *_contact;
}

@property(readonly, nonatomic) SGStorageContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) SGStorageEvent *event; // @synthesize event=_event;
@property(readonly, nonatomic) unsigned long long operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToJournalEntry:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithOperation:(unsigned long long)arg1;
- (id)initWithOperation:(unsigned long long)arg1 contact:(id)arg2;
- (id)initWithOperation:(unsigned long long)arg1 event:(id)arg2;

@end

