//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPCopying.h"
#import "NSCopying.h"

@class CPPage, NSMutableArray;

@interface CPZoneBorder : NSObject <NSCopying, CPCopying>
{
    struct CGRect bounds;
    CPPage *page;
    NSMutableArray *ownerArray;
    NSMutableArray *graphicObjects;
    NSMutableArray *neighbors;
    NSMutableArray *intersections;
    BOOL isHorizontal;
    BOOL hasForwardVector;
    BOOL hasBackwardVector;
    double overhangMin;
    double overhangMax;
}

+ (struct CGRect)extendRect:(struct CGRect)arg1;
+ (int)clockwiseWindingNumberOfShapeWithBorders:(id)arg1;
+ (void)outerVertices:(struct CGPoint *)arg1 fromBorders:(id)arg2 swollenBy:(double)arg3;
+ (void)removeIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2;
+ (void)addIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2 atRect:(struct CGRect)arg3;
- (long long)compareYBounds:(id)arg1;
- (long long)compareXBounds:(id)arg1;
- (void)removeLooseThreadsStartingFrom:(id)arg1;
- (void)trimToLastIntersections;
- (void)combine:(id)arg1;
- (BOOL)continues:(id)arg1;
- (BOOL)crosses:(id)arg1;
- (BOOL)extractCycleTo:(id)arg1 goingForward:(BOOL)arg2 throughIntersectionIndex:(unsigned int)arg3 returningTo:(id)arg4 atRect:(struct CGRect *)arg5;
- (BOOL)extractCycleTo:(id)arg1 goingForward:(BOOL)arg2 startingAtIndex:(unsigned int)arg3;
- (BOOL)hasVectorGoingForward:(BOOL)arg1 startingAtIndex:(unsigned int *)arg2;
- (void)instantiateVectors;
- (BOOL)hasCounterclockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(BOOL)arg2;
- (BOOL)hasClockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(BOOL)arg2;
- (id)getNextBorder:(unsigned int)arg1;
- (BOOL)windsClockwiseOnto:(id)arg1;
- (unsigned int)indexOfIntersectionWith:(id)arg1;
- (BOOL)intersectsWith:(id)arg1 atRect:(struct CGRect *)arg2;
- (unsigned int)intersectionCount;
- (BOOL)isVertical;
- (BOOL)isHorizontal;
- (void)setSide:(int)arg1 ofPage:(id)arg2;
- (BOOL)hasBackwardVector;
- (void)setHasBackwardVector:(BOOL)arg1;
- (BOOL)hasForwardVector;
- (void)setHasForwardVector:(BOOL)arg1;
- (BOOL)hasNeighborShape:(id)arg1 atSide:(int)arg2;
- (BOOL)hasNeighborShape:(id)arg1;
- (id)neighborAtIndex:(unsigned int)arg1;
- (void)removeNeighborAtIndex:(unsigned int)arg1;
- (void)addNeighbor:(id)arg1;
- (unsigned int)neighborCount;
- (id)graphicObjects;
- (id)graphicObjectAtIndex:(unsigned int)arg1;
- (void)removeGraphicObjectAtIndex:(unsigned int)arg1;
- (void)addGraphicObject:(id)arg1;
- (unsigned int)graphicObjectCount;
- (long long)zOrder;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (id)ownerArray;
- (void)removeFromArrayAtIndex:(unsigned int)arg1;
- (void)removeFromArray;
- (void)addToArray:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addToArray:(id)arg1;
- (id)page;
- (id)copyWithoutIntersections;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initSuper;
- (id)initWithGraphicObject:(id)arg1;
- (id)init;

@end

