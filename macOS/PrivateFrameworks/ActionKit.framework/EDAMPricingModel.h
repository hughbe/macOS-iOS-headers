//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMPricingModel : FATObject
{
    NSNumber *_gnomeActive;
    NSNumber *_gnomeWarmingPeriod;
    NSNumber *_pricingModelStart;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *pricingModelStart; // @synthesize pricingModelStart=_pricingModelStart;
@property(retain, nonatomic) NSNumber *gnomeWarmingPeriod; // @synthesize gnomeWarmingPeriod=_gnomeWarmingPeriod;
@property(retain, nonatomic) NSNumber *gnomeActive; // @synthesize gnomeActive=_gnomeActive;

@end

