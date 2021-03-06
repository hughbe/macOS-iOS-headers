//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NetworkCursor : NSObject
{
    struct vector<unsigned long, std::__1::allocator<unsigned long>> _nodeIndexes;
    unsigned long long _stateType;
}

+ (id)cursorByAddingNodeIndex:(unsigned long long)arg1 toCursor:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long stateType; // @synthesize stateType=_stateType;
- (BOOL)isCompletePattern;
- (unsigned long long)nodeIndexAtPosition:(unsigned long long)arg1;
- (unsigned long long)nodeIndexCount;
- (void)addNodeIndex:(unsigned long long)arg1 withStateType:(unsigned long long)arg2;
- (id)init;

@end

