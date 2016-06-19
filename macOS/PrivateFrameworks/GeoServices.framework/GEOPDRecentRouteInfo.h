//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface GEOPDRecentRouteInfo : PBCodable <NSCopying>
{
    NSData *_routeId;
    NSData *_sessionState;
    NSData *_zilchPoints;
}

@property(retain, nonatomic) NSData *routeId; // @synthesize routeId=_routeId;
@property(retain, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
@property(retain, nonatomic) NSData *zilchPoints; // @synthesize zilchPoints=_zilchPoints;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasRouteId;
@property(readonly, nonatomic) BOOL hasSessionState;
@property(readonly, nonatomic) BOOL hasZilchPoints;
- (void)dealloc;

@end

