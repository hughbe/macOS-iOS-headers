//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/PDBuild.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PDParagraphBuild : PDBuild
{
    NSMutableArray *mTimeNodeDataList;
    double mAutoAdvanceTime;
    BOOL mIsReversedParagraphOrder;
    int mBuildLevel;
    int mType;
}

- (BOOL)isEqual:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)setBuildLevel:(int)arg1;
- (int)buildLevel;
- (void)setIsReversedParagraphOrder:(BOOL)arg1;
- (BOOL)isReversedParagraphOrder;
- (void)setAutoAdvanceTime:(double)arg1;
- (double)autoAdvanceTime;
- (id)timeNodeDataList;
- (id)addTimeNodeData;
- (id)timeNodeDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)timeNodeDataListCount;
- (void)dealloc;
- (id)init;

@end

