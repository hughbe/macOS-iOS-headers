//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKProtocolObject-Protocol.h>

@class NSData, NSDate, NSString, NSURL;
@protocol EKProtocolStructuredLocation;

@protocol EKProtocolAlarm <EKProtocolObject>
@property(readonly, nonatomic) BOOL notRelativeToTravelTime;
@property(readonly, nonatomic) BOOL isDefault;
@property(readonly, nonatomic) BOOL isSnoozed;
@property(readonly, copy, nonatomic) id <EKProtocolStructuredLocation> structuredLocation;
@property(readonly, copy, nonatomic) NSString *proximityString;
@property(readonly, copy, nonatomic) NSString *soundName;
@property(readonly, copy, nonatomic) NSString *actionString;
@property(readonly, copy, nonatomic) NSDate *acknowledgedDate;
@property(readonly, nonatomic) BOOL isTimeToLeaveAlarm;
@property(readonly, nonatomic) double relativeOffset;
@property(readonly, copy, nonatomic) NSDate *absoluteDate;
@property(readonly, nonatomic) NSString *sharedUID;
- (NSData *)bookmark;
- (NSURL *)url;
- (NSString *)emailAddress;
@end

