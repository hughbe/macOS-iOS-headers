//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUJSProxy.h>

#import <NeutrinoCore/NUJSRAWNoiseReductionImagePropertiesExport-Protocol.h>

@protocol NURAWNoiseReductionProperties;

@interface NUJSRAWNoiseReductionProperties : NUJSProxy <NUJSRAWNoiseReductionImagePropertiesExport>
{
}

@property(readonly) double color;
@property(readonly) double luminance;
@property(readonly) id <NURAWNoiseReductionProperties> rawNoiseReductionProperties;
- (id)initWithRAWNoiseReductionProperties:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end

