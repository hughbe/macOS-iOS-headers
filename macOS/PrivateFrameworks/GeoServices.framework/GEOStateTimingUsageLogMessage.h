//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOStateTimingUsageLogMessage : PBCodable <NSCopying>
{
    double _durationInOldState;
    NSMutableArray *_stateTransitionLogMessages;
    CDStruct_ef245c49 _has;
}

+ (Class)stateTransitionLogMessageType;
@property(nonatomic) double durationInOldState; // @synthesize durationInOldState=_durationInOldState;
@property(retain, nonatomic) NSMutableArray *stateTransitionLogMessages; // @synthesize stateTransitionLogMessages=_stateTransitionLogMessages;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasDurationInOldState;
- (id)stateTransitionLogMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)stateTransitionLogMessagesCount;
- (void)addStateTransitionLogMessage:(id)arg1;
- (void)clearStateTransitionLogMessages;
- (void)dealloc;

@end

