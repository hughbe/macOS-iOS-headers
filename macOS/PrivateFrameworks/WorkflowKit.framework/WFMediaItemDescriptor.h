//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import <WorkflowKit/MTLJSONSerializing-Protocol.h>
#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSNumber, NSString;

@interface WFMediaItemDescriptor : MTLModel <NSSecureCoding, MTLJSONSerializing>
{
    NSString *_itemName;
    NSNumber *_persistentIdentifier;
    NSData *_playbackArchiveData;
    NSString *_type;
}

+ (id)JSONKeyPathsByPropertyKey;
+ (BOOL)supportsSecureCoding;
+ (id)playbackArchiveDataJSONTransformer;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSData *playbackArchiveData; // @synthesize playbackArchiveData=_playbackArchiveData;
@property(readonly, copy, nonatomic) NSNumber *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(readonly, copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaItemName:(id)arg1 playbackArchiveData:(id)arg2;
- (id)initWithMediaItemName:(id)arg1 persistentIdentifier:(id)arg2 mediaType:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) Class superclass;

@end

