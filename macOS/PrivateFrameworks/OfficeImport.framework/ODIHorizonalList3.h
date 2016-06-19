//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ODIState;

__attribute__((visibility("hidden")))
@interface ODIHorizonalList3 : NSObject
{
    unsigned int mMaxPointCount;
    ODIState *mState;
}

+ (BOOL)mapIdentifier:(id)arg1 state:(id)arg2;
- (void)mapBaseStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapOnePillarStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapRoofStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapPillarPoints:(id)arg1 bounds:(struct CGRect)arg2;
- (void)map;
- (void)setMaxPointCount:(unsigned int)arg1;
- (id)initWithState:(id)arg1;

@end

