//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAMPPodcastStation.h>

#import "SASyncWrap.h"

@class NSNumber, NSString, NSURL;

@interface SAMPAceMediaEntityWrapsAcePodcastStationWrap : SAMPPodcastStation <SASyncWrap>
{
}

+ (id)aceMediaEntityWrapsAcePodcastStationWrapWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceMediaEntityWrapsAcePodcastStationWrap;
@property(copy, nonatomic) NSNumber *generation;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSURL *identifier; // @dynamic identifier;
@property(readonly) Class superclass;

@end

