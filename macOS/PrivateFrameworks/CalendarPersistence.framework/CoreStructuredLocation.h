//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CALPropertyValue.h>

@class NSString;

@interface CoreStructuredLocation : CALPropertyValue
{
}

+ (id)entityFromManagedObject:(id)arg1;
- (id)coordinates;
@property(retain) NSString *routeType;
@property(retain) NSString *address;
@property(retain) NSString *displayName;
- (double)radius;
- (void)setRadius:(double)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)abURLString;
- (void)setAbURLString:(id)arg1;
- (id)initWithGeoURLString:(id)arg1;

@end

