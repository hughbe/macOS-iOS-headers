//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXModelSettings : PXSettings
{
    double _photoAnalysisGraphInitialGraceDelay;
    double _photoAnalysisGraphProgressUpdateInterval;
}

+ (id)sharedInstance;
@property(nonatomic) double photoAnalysisGraphProgressUpdateInterval; // @synthesize photoAnalysisGraphProgressUpdateInterval=_photoAnalysisGraphProgressUpdateInterval;
@property(nonatomic) double photoAnalysisGraphInitialGraceDelay; // @synthesize photoAnalysisGraphInitialGraceDelay=_photoAnalysisGraphInitialGraceDelay;
- (void)setDefaultValues;

@end

