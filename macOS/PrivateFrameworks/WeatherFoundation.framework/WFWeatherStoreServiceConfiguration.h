//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableDictionary, NSURL, NSURLSession, WFAggregateDictionary;

@interface WFWeatherStoreServiceConfiguration : NSObject <NSCopying>
{
    NSURLSession *_session;
    WFAggregateDictionary *_aggDictionary;
    NSURL *_cacheURL;
    NSMutableDictionary *_requestFormatterForForecastType;
    NSMutableDictionary *_requestParserForForecastType;
    Class _airQualityRequestFormatterClass;
    Class _airQualityParserClass;
    Class _cacheClass;
}

+ (id)generateUserAgent;
+ (id)defaultConfiguration;
@property(retain, nonatomic) Class cacheClass; // @synthesize cacheClass=_cacheClass;
@property(retain, nonatomic) Class airQualityParserClass; // @synthesize airQualityParserClass=_airQualityParserClass;
@property(retain, nonatomic) Class airQualityRequestFormatterClass; // @synthesize airQualityRequestFormatterClass=_airQualityRequestFormatterClass;
@property(retain, nonatomic) NSMutableDictionary *requestParserForForecastType; // @synthesize requestParserForForecastType=_requestParserForForecastType;
@property(retain, nonatomic) NSMutableDictionary *requestFormatterForForecastType; // @synthesize requestFormatterForForecastType=_requestFormatterForForecastType;
@property(copy, nonatomic) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
@property(retain, nonatomic) WFAggregateDictionary *aggDictionary; // @synthesize aggDictionary=_aggDictionary;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)parseAirQualityData:(id)arg1 location:(id)arg2 locale:(id)arg3 error:(id *)arg4;
- (id)airQualityRequestForLocation:(id)arg1 locale:(id)arg2 error:(id *)arg3;
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 date:(id)arg3 error:(id *)arg4;
- (id)forecastRequestForType:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 error:(id *)arg4;
- (void)setAirQualityParser:(Class)arg1;
- (void)setAirQualityFormatter:(Class)arg1;
- (void)setRequestParser:(id)arg1 forForecastType:(unsigned long long)arg2;
- (void)setRequestFormatter:(Class)arg1 forForecastType:(unsigned long long)arg2;
@property(readonly, nonatomic) BOOL isValid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

