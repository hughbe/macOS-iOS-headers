//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSString, SAMPMediaItem;

@interface SAMPGeniusSummon : SADomainCommand
{
}

+ (id)geniusSummonWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geniusSummon;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *upNextQueueInsertLocation;
@property(copy, nonatomic) NSNumber *startPlaying;
@property(retain, nonatomic) SAMPMediaItem *mediaItem;
@property(copy, nonatomic) NSString *airplayRouteUID;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

