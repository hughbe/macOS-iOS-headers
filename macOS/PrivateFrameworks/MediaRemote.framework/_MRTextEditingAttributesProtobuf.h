//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, _MRTextInputTraitsProtobuf;

@interface _MRTextEditingAttributesProtobuf : PBCodable <NSCopying>
{
    _MRTextInputTraitsProtobuf *_inputTraits;
    NSString *_prompt;
    NSString *_title;
}

@property(retain, nonatomic) _MRTextInputTraitsProtobuf *inputTraits; // @synthesize inputTraits=_inputTraits;
@property(retain, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasInputTraits;
@property(readonly, nonatomic) BOOL hasPrompt;
@property(readonly, nonatomic) BOOL hasTitle;
- (void)dealloc;

@end

