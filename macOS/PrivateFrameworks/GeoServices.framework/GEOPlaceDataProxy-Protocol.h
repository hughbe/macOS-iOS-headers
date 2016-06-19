//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOMapServiceTraits, GEOPDPlace, GEOPDPlaceRequest, NSArray, NSData, NSDictionary;

@protocol GEOPlaceDataProxy <NSObject>
- (void)clearCache;
- (void)applyRAPUpdatedMapItems:(NSArray *)arg1;
- (void)shrinkBySize:(unsigned long long)arg1 finished:(void (^)(unsigned long long))arg2;
- (void)calculateFreeableSpaceWithHandler:(void (^)(unsigned long long))arg1;
- (void)cancelRequest:(GEOPDPlaceRequest *)arg1;
- (void)performPlaceDataRequest:(GEOPDPlaceRequest *)arg1 traits:(GEOMapServiceTraits *)arg2 timeout:(double)arg3 auditToken:(NSData *)arg4 networkActivity:(void (^)(BOOL))arg5 requesterHandler:(void (^)(GEOPDPlaceResponse *, NSError *, NSDictionary *))arg6;
- (void)trackPlaceData:(GEOPDPlace *)arg1;
- (void)fetchAllCacheEntriesWithRequesterHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)requestPhoneNumbers:(NSArray *)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(GEOMapServiceTraits *)arg3 auditToken:(NSData *)arg4 requesterHandler:(void (^)(NSArray *, NSError *, BOOL))arg5;
- (void)requestComponentsFromNetwork:(NSDictionary *)arg1 muid:(unsigned long long)arg2 resultProviderID:(int)arg3 traits:(GEOMapServiceTraits *)arg4 auditToken:(NSData *)arg5 requesterHandler:(void (^)(NSArray *, NSError *, BOOL))arg6;
- (void)requestMUIDs:(NSArray *)arg1 resultProviderID:(int)arg2 includeETA:(BOOL)arg3 traits:(GEOMapServiceTraits *)arg4 options:(unsigned long long)arg5 auditToken:(NSData *)arg6 requesterHandler:(void (^)(NSArray *, NSError *, BOOL))arg7;
@end

