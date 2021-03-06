//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOSearchAttributionInfo, NSArray, NSString;

@interface GEOMapItemAttribution : NSObject
{
    GEOSearchAttributionInfo *_info;
    NSArray *_attributionURLs;
    NSString *_yelpID;
    NSString *_poiID;
}

+ (id)attributionWithDataAttribution:(id)arg1 searchInfo:(id)arg2 class:(Class)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *attributionURLs; // @synthesize attributionURLs=_attributionURLs;
- (id)_yelpHTTPURLForRequirement:(int)arg1 withUID:(id)arg2 writeAReview:(BOOL)arg3;
@property(readonly, nonatomic) NSString *appAdamID;
@property(readonly, nonatomic) BOOL requiresAttributionInCallout;
- (id)providerSnippetLogoPathForScale:(double)arg1;
- (id)providerLogoPathForScale:(double)arg1;
@property(readonly, nonatomic) NSString *webBaseActionURL;
@property(readonly, nonatomic) NSArray *attributionApps;
@property(readonly, nonatomic) NSString *providerID;
@property(readonly, nonatomic) NSString *providerName;
@property(readonly, nonatomic) BOOL shouldOpenInAppStore;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2;

@end

