//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPResponseOperationResultError;

@interface CKDPResponseOperationResult : PBCodable <NSCopying>
{
    int _code;
    CKDPResponseOperationResultError *_error;
    CDStruct_9ab06576 _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKDPResponseOperationResultError *error; // @synthesize error=_error;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasError;
- (int)StringAsCode:(id)arg1;
- (id)codeAsString:(int)arg1;
@property(nonatomic) BOOL hasCode;
@property(nonatomic) int code; // @synthesize code=_code;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

@end

