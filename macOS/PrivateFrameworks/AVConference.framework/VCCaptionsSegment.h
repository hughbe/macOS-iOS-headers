//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VCCaptionsSegment : PBCodable <NSCopying>
{
    unsigned int _confidence;
    NSString *_text;
    BOOL _hasSpaceAfter;
    struct {
        unsigned int confidence:1;
        unsigned int hasSpaceAfter:1;
    } _has;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) BOOL hasSpaceAfter; // @synthesize hasSpaceAfter=_hasSpaceAfter;
@property(nonatomic) unsigned int confidence; // @synthesize confidence=_confidence;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasText;
@property(nonatomic) BOOL hasHasSpaceAfter;
@property(nonatomic) BOOL hasConfidence;
- (void)dealloc;

@end

