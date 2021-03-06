//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WiFiPolicy/NSObject-Protocol.h>
#import <WiFiPolicy/TBScorable-Protocol.h>

@class NSSet, NSString;

@protocol WiFiCandidateNetwork <NSObject, TBScorable>
@property(nonatomic) BOOL matched;
@property(readonly, nonatomic) NSSet *attributes;
@property(readonly, nonatomic) long long source;
@property(readonly, copy, nonatomic) NSString *password;
@property(readonly, nonatomic) NSSet *accessPoints;
@property(copy, nonatomic) NSString *SSID;
- (BOOL)containsAccessPointMatchingBSSIDs:(NSSet *)arg1;

@optional
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;
@end

