//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMDoubleLinkedListNode : NSObject
{
    IMDoubleLinkedListNode *_prev;
    IMDoubleLinkedListNode *_next;
    id _object;
}

@property(retain) id object; // @synthesize object=_object;
@property(retain) IMDoubleLinkedListNode *next; // @synthesize next=_next;
@property(retain) IMDoubleLinkedListNode *prev; // @synthesize prev=_prev;
- (void)orphan;
- (void)removeFromList;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end

