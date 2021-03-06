//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSImageScalingSpecification : NSObject
{
    int _assetTypeFlags;
    double _nominalShortSideLength;
    double _minimumLongSideLength;
    double _maximumLongSideLength;
}

+ (id)assetsToGenerateFromImageWithInputSize:(struct CGSize)arg1 toConformToSpecifications:(id)arg2;
+ (id)specificationWithSharedAlbumSpecificationString:(id)arg1;
@property(nonatomic) int assetTypeFlags; // @synthesize assetTypeFlags=_assetTypeFlags;
@property(nonatomic) double maximumLongSideLength; // @synthesize maximumLongSideLength=_maximumLongSideLength;
@property(nonatomic) double minimumLongSideLength; // @synthesize minimumLongSideLength=_minimumLongSideLength;
@property(nonatomic) double nominalShortSideLength; // @synthesize nominalShortSideLength=_nominalShortSideLength;
- (id)description;
- (double)scaleFactorForInputSize:(struct CGSize)arg1;

@end

