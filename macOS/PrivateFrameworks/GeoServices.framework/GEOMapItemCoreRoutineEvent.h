//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOBaseMapItem.h>

@class GEOAddressObject, GEOMapItemClientAttributes, GEOPlace, NSDate, NSDictionary, NSString;

@interface GEOMapItemCoreRoutineEvent : GEOBaseMapItem
{
    NSDictionary *_addressDictionary;
    GEOMapItemClientAttributes *_clientAttributes;
    GEOPlace *_place;
    NSString *_eventName;
    NSString *_eventTitle;
    NSDate *_eventDate;
    BOOL _eventIsAllDay;
    CDStruct_2c43369c _coordinate;
    GEOAddressObject *_addressObject;
}

- (id)weatherDisplayName;
- (id)addressObject;
- (id)geoAddress;
- (id)_clientAttributes;
- (id)_place;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)isEventAllDay;
- (id)eventDate;
- (id)eventName;
- (id)addressDictionary;
- (CDStruct_c3b9c2ee)coordinate;
- (id)name;
- (BOOL)isValid;
- (id)description;
- (void)dealloc;
- (id)initWithAddressDictionary:(id)arg1 eventName:(id)arg2 eventTitle:(id)arg3 eventDate:(id)arg4 eventIsAllDay:(BOOL)arg5 coordinate:(CDStruct_c3b9c2ee)arg6 clientAttributes:(id)arg7;

@end

