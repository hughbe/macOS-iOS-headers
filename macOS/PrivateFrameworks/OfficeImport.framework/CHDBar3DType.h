//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CHDBar2DType.h>

__attribute__((visibility("hidden")))
@interface CHDBar3DType : CHDBar2DType
{
    int mGapDepth;
    int mShapeType;
}

+ (id)stringWithShapeType:(int)arg1;
+ (_Bool)is3DType;
- (void)setShapeType:(int)arg1;
- (int)shapeType;
- (void)setGapDepth:(int)arg1;
- (int)gapDepth;
- (id)initWithChart:(id)arg1;

@end

