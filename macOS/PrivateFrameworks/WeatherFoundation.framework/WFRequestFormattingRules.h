//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WFSettings;

@interface WFRequestFormattingRules : NSObject
{
    id <WFSettings> _settings;
}

+ (BOOL)aqiEnabledByRules:(id)arg1 forLocation:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <WFSettings> settings; // @synthesize settings=_settings;
- (long long)locationNumDecimalsOfPrecision;
- (BOOL)aqiEnabledForCountryCode:(id)arg1;
- (id)initWithSettings:(id)arg1;

@end

