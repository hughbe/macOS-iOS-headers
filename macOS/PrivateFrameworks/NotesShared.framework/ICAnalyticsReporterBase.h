//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICAnalyticsReporterBase : NSObject
{
}

+ (long long)roundIntegerValue:(long long)arg1;
+ (double)roundDoubleValue:(double)arg1;
- (const char *)utf8StringForRoundedIntegerNumber:(id)arg1;
- (id)instrumentationDomainForKey:(id)arg1;
- (id)instrumentationKeyForKey:(id)arg1;
- (void)pushValue:(double)arg1 toDistributionKey:(id)arg2;
- (void)setValue:(long long)arg1 forScalarKey:(id)arg2;
- (void)addValue:(long long)arg1 forKey:(id)arg2 withSignature:(id)arg3;
- (void)addValue:(long long)arg1 forScalarKey:(id)arg2;

@end

