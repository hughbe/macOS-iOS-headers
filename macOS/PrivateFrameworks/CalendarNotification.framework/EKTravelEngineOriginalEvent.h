//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSData, NSDate, NSString;

@interface EKTravelEngineOriginalEvent : NSObject
{
    BOOL _locationIsAConferenceRoom;
    BOOL _automaticGeocodingAllowed;
    int _transportTypeOverride;
    NSString *_eventExternalURL;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_locationString;
    CLLocation *_geoLocation;
    NSData *_locationMapKitHandle;
}

@property(nonatomic) BOOL automaticGeocodingAllowed; // @synthesize automaticGeocodingAllowed=_automaticGeocodingAllowed;
@property(nonatomic) BOOL locationIsAConferenceRoom; // @synthesize locationIsAConferenceRoom=_locationIsAConferenceRoom;
@property(retain, nonatomic) NSData *locationMapKitHandle; // @synthesize locationMapKitHandle=_locationMapKitHandle;
@property(retain, nonatomic) CLLocation *geoLocation; // @synthesize geoLocation=_geoLocation;
@property(retain, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
@property(nonatomic) int transportTypeOverride; // @synthesize transportTypeOverride=_transportTypeOverride;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *eventExternalURL; // @synthesize eventExternalURL=_eventExternalURL;
- (void).cxx_destruct;
- (BOOL)isEqualToOriginalEvent:(id)arg1;
- (id)description;

@end

