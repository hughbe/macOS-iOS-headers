//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, VCPVideoMetaFocusSegment;

@interface VCPVideoMetaFocusAnalyzer : NSObject
{
    VCPVideoMetaFocusSegment *_activeSegment;
    NSMutableArray *_mutableResults;
    CDStruct_e83c9415 _frameTimeRange;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSArray *results;
- (int)finalizeAnalysis;
- (void)addSegmentToResults;
- (int)processFrameMetadata:(id)arg1;
- (id)init;

@end

