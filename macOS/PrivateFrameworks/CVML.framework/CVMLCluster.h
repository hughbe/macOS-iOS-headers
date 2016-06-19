//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface CVMLCluster : NSObject
{
    BOOL _shouldUpdateRepresentative;
    NSArray *_objects;
    unsigned long long _clusterId;
    unsigned long long _totalObjectCount;
    NSArray *_suggestedIdsForRepresentative;
    NSDictionary *_representativenessById;
}

@property(retain) NSDictionary *representativenessById; // @synthesize representativenessById=_representativenessById;
@property(retain) NSArray *suggestedIdsForRepresentative; // @synthesize suggestedIdsForRepresentative=_suggestedIdsForRepresentative;
@property BOOL shouldUpdateRepresentative; // @synthesize shouldUpdateRepresentative=_shouldUpdateRepresentative;
@property unsigned long long totalObjectCount; // @synthesize totalObjectCount=_totalObjectCount;
@property unsigned long long clusterId; // @synthesize clusterId=_clusterId;
@property(retain) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;

@end

