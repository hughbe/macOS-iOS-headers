//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreBrightness/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol NightShiftSupportProtocol <NSObject>
- (void)setPreference:(id)arg1 forKey:(NSString *)arg2 user:(NSString *)arg3;
- (id)copyPreferenceForKey:(NSString *)arg1 user:(NSString *)arg2;
- (void)setNightShiftFactorDictionary:(NSDictionary *)arg1;
@end

