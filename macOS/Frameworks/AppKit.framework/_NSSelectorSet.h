//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface _NSSelectorSet : NSObject
{
    NSHashTable *_hash;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)containsSelector:(SEL)arg1;
- (id)initWithSelectors:(SEL)arg1;
- (id)init;
- (id)initWithHash:(id)arg1;

@end

