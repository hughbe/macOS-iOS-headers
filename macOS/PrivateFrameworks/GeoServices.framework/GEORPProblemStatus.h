//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEORPDetails, GEORPNotification, GEORPResolution, NSString;

@interface GEORPProblemStatus : PBCodable <NSCopying>
{
    double _creationDate;
    GEORPDetails *_details;
    GEORPNotification *_notification;
    NSString *_problemId;
    GEORPResolution *_problemResolution;
    int _problemState;
    struct {
        unsigned int creationDate:1;
        unsigned int problemState:1;
    } _has;
}

@property(retain, nonatomic) GEORPDetails *details; // @synthesize details=_details;
@property(retain, nonatomic) GEORPNotification *notification; // @synthesize notification=_notification;
@property(retain, nonatomic) GEORPResolution *problemResolution; // @synthesize problemResolution=_problemResolution;
@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *problemId; // @synthesize problemId=_problemId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDetails;
@property(readonly, nonatomic) BOOL hasNotification;
@property(readonly, nonatomic) BOOL hasProblemResolution;
- (int)StringAsProblemState:(id)arg1;
- (id)problemStateAsString:(int)arg1;
@property(nonatomic) BOOL hasProblemState;
@property(nonatomic) int problemState; // @synthesize problemState=_problemState;
@property(nonatomic) BOOL hasCreationDate;
@property(readonly, nonatomic) BOOL hasProblemId;
- (void)dealloc;

@end

