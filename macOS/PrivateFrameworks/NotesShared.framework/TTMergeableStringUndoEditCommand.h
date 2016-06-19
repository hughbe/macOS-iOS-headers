//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTMergeableStringUndoCommand.h"

@class NSString;

@interface TTMergeableStringUndoEditCommand : NSObject <TTMergeableStringUndoCommand>
{
    vector_4b213608 *_deleteRanges;
    vector_252d7b3a *_insertStrings;
}

@property(readonly, nonatomic) vector_252d7b3a *insertStrings; // @synthesize insertStrings=_insertStrings;
@property(readonly, nonatomic) vector_4b213608 *deleteRanges; // @synthesize deleteRanges=_deleteRanges;
@property(readonly, copy) NSString *description;
- (void)applyToString:(id)arg1;
- (BOOL)coalesceWith:(id)arg1 inString:(id)arg2;
- (void)updateInsertTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (BOOL)hasTopoIDsThatCanChange;
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

