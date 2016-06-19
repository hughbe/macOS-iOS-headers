//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SCRTable;

__attribute__((visibility("hidden")))
@interface SCRTableHeaderManager : NSObject
{
    SCRTable *_table;
    NSArray *_headerElements;
    unsigned long long _focusedIndex;
    long long _orientation;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (struct CGPoint)mouseInsertAfterChildElement:(id)arg1;
- (struct CGPoint)mouseInsertBeforeChildElement:(id)arg1;
- (BOOL)interactDownShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveLastWithRequest:(id)arg1;
- (BOOL)moveFirstWithRequest:(id)arg1;
- (BOOL)moveRightWithRequest:(id)arg1 allowFullWrapping:(BOOL)arg2;
- (BOOL)moveLeftWithRequest:(id)arg1 allowFullWrapping:(BOOL)arg2;
- (BOOL)moveToIndex:(unsigned long long)arg1 request:(id)arg2;
- (void)clearHeaderElementsCache;
- (void)_setHeaderElements:(id)arg1;
- (void)dealloc;
- (id)initWithTable:(id)arg1;

@end

