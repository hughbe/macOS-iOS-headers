//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADTableRow : NSObject
{
    NSMutableArray *mCells;
    float mHeight;
}

- (id)description;
- (void)setHeight:(float)arg1;
- (float)height;
- (id)addCell;
- (id)cellAtIndex:(unsigned long long)arg1;
- (unsigned long long)cellCount;
- (void)dealloc;
- (id)init;
- (void)flipCellsRTL;

@end

