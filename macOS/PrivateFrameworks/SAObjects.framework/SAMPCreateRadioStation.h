//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString, NSURL;

@interface SAMPCreateRadioStation : SABaseClientBoundCommand
{
}

+ (id)createRadioStationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)createRadioStation;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSURL *stationUrl;
@property(copy, nonatomic) NSNumber *startPlaying;
@property(copy, nonatomic) NSString *airplayRouteUID;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

