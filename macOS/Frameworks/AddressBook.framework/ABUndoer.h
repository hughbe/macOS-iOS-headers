//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUndoManager;

__attribute__((visibility("hidden")))
@interface ABUndoer : NSObject
{
    NSUndoManager *_undoManager;
}

- (void)_performRedoCommand:(id)arg1 withName:(id)arg2;
- (void)_performUndoCommand:(id)arg1 withName:(id)arg2;
- (id)initWithUndoManager:(id)arg1;

@end

