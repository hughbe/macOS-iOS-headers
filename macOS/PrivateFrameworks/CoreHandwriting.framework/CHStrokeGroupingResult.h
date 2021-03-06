//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSCopying-Protocol.h>

@class NSArray, NSSet;

@interface CHStrokeGroupingResult : NSObject <NSCopying>
{
    NSArray *_strokeGroupsSortedTopBottomLeftRight;
    NSArray *_textStrokeGroupsSortedByWritingOrientation;
    NSArray *_strokeGroupsSortedByWritingOrientation;
    NSSet *_textStrokeGroups;
    NSSet *_strokeGroups;
    NSSet *_createdStrokeGroups;
    NSSet *_deletedStrokeGroups;
}

@property(readonly, copy, nonatomic) NSSet *deletedStrokeGroups; // @synthesize deletedStrokeGroups=_deletedStrokeGroups;
@property(readonly, copy, nonatomic) NSSet *createdStrokeGroups; // @synthesize createdStrokeGroups=_createdStrokeGroups;
@property(readonly, copy, nonatomic) NSSet *strokeGroups; // @synthesize strokeGroups=_strokeGroups;
@property(readonly, copy, nonatomic) NSSet *textStrokeGroups;
- (id)_sortedStrokeGroupsByWritingOrientationTextOnly:(BOOL)arg1;
@property(readonly, copy, nonatomic) NSArray *strokeGroupsSortedByWritingOrientation;
@property(readonly, copy, nonatomic) NSArray *textStrokeGroupsSortedByWritingOrientation;
@property(readonly, copy, nonatomic) NSArray *textStrokeGroupsSortedTopBottomLeftRight;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3;
- (id)init;

@end

