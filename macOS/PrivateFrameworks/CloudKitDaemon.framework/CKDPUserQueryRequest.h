//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class CKDPUserAlias, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPUserQueryRequest : PBRequest <NSCopying>
{
    CKDPUserAlias *_alias;
    NSString *_oBSOLETEPcsServiceType;
    NSMutableArray *_sortedBys;
    BOOL _publicKeyRequested;
    struct {
        unsigned int publicKeyRequested:1;
    } _has;
}

+ (Class)sortedByType;
+ (id)options;
@property(retain, nonatomic) NSString *oBSOLETEPcsServiceType; // @synthesize oBSOLETEPcsServiceType=_oBSOLETEPcsServiceType;
@property(retain, nonatomic) NSMutableArray *sortedBys; // @synthesize sortedBys=_sortedBys;
@property(retain, nonatomic) CKDPUserAlias *alias; // @synthesize alias=_alias;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasPublicKeyRequested;
@property(nonatomic) BOOL publicKeyRequested; // @synthesize publicKeyRequested=_publicKeyRequested;
@property(readonly, nonatomic) BOOL hasOBSOLETEPcsServiceType;
- (id)sortedByAtIndex:(unsigned long long)arg1;
- (unsigned long long)sortedBysCount;
- (void)addSortedBy:(id)arg1;
- (void)clearSortedBys;
@property(readonly, nonatomic) BOOL hasAlias;

@end

