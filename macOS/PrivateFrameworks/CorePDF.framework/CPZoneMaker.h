//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPCharSequence;

@interface CPZoneMaker : NSObject
{
    CPCharSequence *charactersOnPage;
}

- (id)newZoneForStraddlersFrom:(id)arg1;
- (void)addObjectsToStraddler:(id)arg1 from:(id)arg2;
- (void)cutVerticalBorders:(id)arg1 whereObscuredByShape:(id)arg2;
- (void)cutHorizontalBorders:(id)arg1 whereObscuredByShape:(id)arg2;
- (void)makeZonesWithBoundaryIn:(id)arg1;
- (void)addZonesWithBoundaryIn:(id)arg1 withBorder:(id)arg2;
- (void)mergeQualifyingRectanglesIn:(id)arg1;
- (unsigned int)categorizeGraphicsIn:(id)arg1;
- (void)makeZonesIn:(id)arg1;
- (BOOL)overlap:(id)arg1 with:(id)arg2;
- (void)dealloc;

@end

