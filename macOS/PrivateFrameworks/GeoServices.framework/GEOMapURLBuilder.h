//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface GEOMapURLBuilder : NSObject
{
    NSMutableDictionary *_dict;
}

+ (id)URLForShowFavorites:(BOOL)arg1;
+ (id)URLForTransitLine:(unsigned long long)arg1 withName:(id)arg2 mapRegion:(id)arg3;
+ (id)URLForExternalBusiness:(id)arg1 id:(id)arg2 ofContentProvider:(id)arg3;
+ (id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(CDStruct_c3b9c2ee)arg4 address:(id)arg5;
+ (id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3;
+ (id)URLForDirectionsFromHereTo:(id)arg1;
+ (id)URLForDirectionsFromHereTo:(id)arg1 transport:(int)arg2;
+ (id)URLForDirectionsFrom:(id)arg1 to:(id)arg2 transport:(int)arg3;
+ (id)URLForDirectionsFrom:(id)arg1 to:(id)arg2;
+ (id)URLForCoordinate:(CDStruct_c3b9c2ee)arg1 address:(id)arg2 label:(id)arg3;
+ (id)URLForCoordinate:(CDStruct_c3b9c2ee)arg1 label:(id)arg2;
+ (id)URLForCoordinate:(CDStruct_c3b9c2ee)arg1;
+ (id)URLForAddress:(id)arg1 label:(id)arg2;
+ (id)URLForAddress:(id)arg1;
+ (id)URLForSearch:(id)arg1 at:(CDStruct_c3b9c2ee)arg2 zoomLevel:(double)arg3;
+ (id)URLForSearch:(id)arg1 at:(CDStruct_c3b9c2ee)arg2 span:(CDStruct_c3b9c2ee)arg3;
+ (id)URLForSearch:(id)arg1 near:(CDStruct_c3b9c2ee)arg2;
+ (id)URLForSearch:(id)arg1;
- (void)_removeParametersAllBut:(id)arg1;
- (id)_stringForCoordinateSpanPointer:(CDStruct_c3b9c2ee *)arg1;
- (id)_stringForCoordinate2DPointer:(CDStruct_c3b9c2ee *)arg1;
- (void)setContentProvider:(id)arg1;
- (void)setMapType:(int)arg1;
- (id)buildForWeb;
- (id)build;
- (void)dealloc;
- (id)initForShowFavorites:(BOOL)arg1;
- (id)initForTransitLine:(unsigned long long)arg1 withName:(id)arg2 mapRegion:(id)arg3;
- (void)setMapRegion:(id)arg1;
- (void)setBusinessAddress:(id)arg1;
- (void)setBusinessCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)initForExternalBusiness:(id)arg1 id:(id)arg2 ofContentProvider:(id)arg3;
- (id)initForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3;
- (void)setTransportType:(int)arg1;
- (void)setStartAddress:(id)arg1;
- (id)initForDirectionsTo:(id)arg1;
- (void)setDisplayRegion:(CDStruct_90e2a262)arg1;
- (id)initForAddress:(id)arg1 label:(id)arg2;
- (id)initForCoordinate:(CDStruct_c3b9c2ee)arg1 label:(id)arg2;
- (id)initForCoordinate:(CDStruct_c3b9c2ee)arg1 address:(id)arg2 label:(id)arg3;
- (void)setSearchLocation:(CDStruct_c3b9c2ee)arg1 zoomLevel:(double)arg2;
- (void)setSearchLocation:(CDStruct_c3b9c2ee)arg1 span:(CDStruct_c3b9c2ee)arg2;
- (void)setNear:(CDStruct_c3b9c2ee)arg1;
- (id)initForSearch:(id)arg1;

@end

