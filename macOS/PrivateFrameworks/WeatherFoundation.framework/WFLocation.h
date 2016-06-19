//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CLLocation, NSDate, NSString, NSTimeZone;

@interface WFLocation : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_city;
    NSString *_county;
    NSString *_state;
    NSString *_stateAbbreviation;
    NSString *_country;
    NSString *_countryAbbreviation;
    CLLocation *_geoLocation;
    NSString *_locationID;
    NSTimeZone *_timeZone;
    long long _archiveVersion;
    NSString *_weatherDisplayName;
    NSString *_displayName;
    NSDate *_creationDate;
}

+ (id)locationsByConsolidatingDuplicatesInBucket:(id)arg1;
+ (id)locationsByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2;
+ (id)locationsByFilteringDuplicates:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)knownKeys;
+ (long long)currentArchiveVersion;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *weatherDisplayName; // @synthesize weatherDisplayName=_weatherDisplayName;
@property long long archiveVersion; // @synthesize archiveVersion=_archiveVersion;
@property(copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSString *locationID; // @synthesize locationID=_locationID;
@property(copy, nonatomic) CLLocation *geoLocation; // @synthesize geoLocation=_geoLocation;
@property(copy, nonatomic) NSString *countryAbbreviation; // @synthesize countryAbbreviation=_countryAbbreviation;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *stateAbbreviation; // @synthesize stateAbbreviation=_stateAbbreviation;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *county; // @synthesize county=_county;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
- (void).cxx_destruct;
- (id)initWithCloudDictionaryRepresentation:(id)arg1;
- (id)cloudDictionaryRepresentation;
- (id)initWithLocalDataRepresentation:(id)arg1;
- (id)localDataRepresentation;
@property(readonly, nonatomic) BOOL shouldQueryForAirQualityData;
- (id)sunsetForDate:(id)arg1;
- (id)sunriseForDate:(id)arg1;
- (BOOL)isDayForDate:(id)arg1;
- (BOOL)isDay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)summary;
- (id)summaryThatIsCompact:(BOOL)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)initWithSearchResponse:(id)arg1;
- (id)init;

@end

