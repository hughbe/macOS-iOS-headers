//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface MKCompassLayer : CALayer
{
    CALayer *_discLayer;
    CALayer *_ringLayer;
    CALayer *_headingLayer;
    struct CGImage *_currentDiscImage2D;
    struct CGImage *_currentDiscImage3D;
    struct CGImage *_currentDiscMaskImage;
    struct CGImage *_currentRingImage;
    struct CGImage *_currentRingMaskImage;
    struct CGImage *_currentHeadingImage;
    BOOL _wants2dText;
    long long _usage;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL wants2dText; // @synthesize wants2dText=_wants2dText;
@property(nonatomic) long long usage; // @synthesize usage=_usage;
@property(readonly, nonatomic) struct CGSize preferredSize;
- (void)updateAppearance;
- (void)updateDisplay;
- (void)setHeading:(double)arg1;
- (void)setPitch:(double)arg1 allowsPitch:(BOOL)arg2;
- (void)layoutSublayers;
- (void)_unloadResources;
- (void)dealloc;
- (id)init;

@end

