//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABSearchElementHelper : NSObject
{
}

+ (void)calculateBestDateType:(long long *)arg1 andBestValue:(double *)arg2 forTimeInterval:(double)arg3;
+ (id)AddressKeys;
+ (id)nameProperties;
+ (id)propertiesOfSearchElements:(id)arg1;
+ (id)nameValueForConjoinedSearchElement:(id)arg1 comparison:(long long *)arg2;
+ (BOOL)isSingleSearchElement:(id)arg1 property:(id *)arg2 value:(id *)arg3 comparison:(long long *)arg4 level:(long long)arg5;
+ (void)buildRepresentationFromSearchElement:(id)arg1 builder:(id)arg2 order:(id)arg3 level:(long long)arg4;
+ (void)buildRepresentationFromSearchElement:(id)arg1 builder:(id)arg2 order:(id)arg3;

@end

