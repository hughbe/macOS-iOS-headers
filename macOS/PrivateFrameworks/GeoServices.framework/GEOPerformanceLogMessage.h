//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEOPerformanceLogMessage : PBCodable <NSCopying>
{
    NSString *_perfEventKey;
    NSString *_perfEventValue;
}

@property(retain, nonatomic) NSString *perfEventValue; // @synthesize perfEventValue=_perfEventValue;
@property(retain, nonatomic) NSString *perfEventKey; // @synthesize perfEventKey=_perfEventKey;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPerfEventValue;
@property(readonly, nonatomic) BOOL hasPerfEventKey;
- (void)dealloc;

@end

