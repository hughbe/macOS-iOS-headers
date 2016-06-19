//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber, NSString, SAUTSContent;

@interface SAUTSViewingContext : SADomainObject
{
}

+ (id)viewingContextWithDictionary:(id)arg1 context:(id)arg2;
+ (id)viewingContext;
@property(copy, nonatomic) NSArray *viewingHistory;
@property(copy, nonatomic) NSNumber *playbackPositionInMilliseconds;
@property(nonatomic) BOOL paused;
@property(copy, nonatomic) NSString *nowPlayingAppId;
@property(retain, nonatomic) SAUTSContent *nowPlaying;
@property(copy, nonatomic) NSNumber *durationInMilliseconds;
@property(nonatomic) BOOL commercialPlaying;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

