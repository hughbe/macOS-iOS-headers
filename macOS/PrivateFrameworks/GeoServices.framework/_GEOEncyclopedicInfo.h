//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOEncyclopedicInfo-Protocol.h>

@class GEOMapItemAttribution, GEOPDPlace, NSArray, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface _GEOEncyclopedicInfo : NSObject <GEOEncyclopedicInfo>
{
    GEOPDPlace *_placeData;
    NSMapTable *_attributionMap;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasStandAloneFactoids;
@property(readonly, nonatomic) GEOMapItemAttribution *encyclopedicAttribution;
@property(readonly, nonatomic) NSArray *factoids;
@property(readonly, nonatomic) BOOL hasPairOfFactoids;
@property(readonly, nonatomic) NSString *textBlockText;
@property(readonly, nonatomic) NSString *textBlockTitle;
@property(readonly, nonatomic) BOOL hasTextBlock;
- (id)initWithPlaceData:(id)arg1 attributionMap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

