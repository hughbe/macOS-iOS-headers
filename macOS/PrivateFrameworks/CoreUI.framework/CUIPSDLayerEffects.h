//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CUIPSDLayerEffects : NSObject
{
    BOOL _visible;
    double _effectScale;
    NSMutableDictionary *_effectList;
}

@property(retain) NSMutableDictionary *effectList; // @synthesize effectList=_effectList;
@property double effectScale; // @synthesize effectScale=_effectScale;
@property BOOL visible; // @synthesize visible=_visible;
- (void)dealloc;
- (void)addLayerEffectComponent:(id)arg1;
- (id)colorOverlay;
- (id)dropShadow;
- (id)init;

@end

