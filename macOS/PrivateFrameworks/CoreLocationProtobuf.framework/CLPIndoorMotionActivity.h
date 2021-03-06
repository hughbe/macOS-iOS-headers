//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPMotionActivity;

@interface CLPIndoorMotionActivity : PBCodable <NSCopying>
{
    double _timestamp;
    CLPMotionActivity *_motionActivity;
    CDStruct_b5306035 _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLPMotionActivity *motionActivity; // @synthesize motionActivity=_motionActivity;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasMotionActivity;
@property(nonatomic) BOOL hasTimestamp;

@end

