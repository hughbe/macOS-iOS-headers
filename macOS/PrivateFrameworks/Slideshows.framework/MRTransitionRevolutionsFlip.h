//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/MRTransition.h>

@class MRImage, NSMutableArray;

@interface MRTransitionRevolutionsFlip : MRTransition
{
    unsigned int _numberOfTilesX;
    unsigned int _numberOfTilesY;
    NSMutableArray *_cubes;
    NSMutableArray *_cubeColumns;
    NSMutableArray *_cubeRows;
    int _flipDirection;
    long long _horizontalCubeCount;
    long long _verticalCubeCount;
    MRImage *_sourceImage;
    MRImage *_destinationImage;
    double _viewBaseWidth;
    double _viewBaseHeight;
}

- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)setAttributes:(id)arg1;
- (void)setupCubesWithLocalAspectRatio:(float)arg1;
- (void)setFlipDirection:(int)arg1;
- (void)unload;
- (void)cleanup;
- (id)initWithTransitionID:(id)arg1;

@end

