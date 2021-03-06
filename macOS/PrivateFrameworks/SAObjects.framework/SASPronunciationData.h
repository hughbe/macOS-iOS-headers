//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SASPronunciationData : AceObject <SAAceSerializable>
{
}

+ (id)pronunciationDataWithDictionary:(id)arg1 context:(id)arg2;
+ (id)pronunciationData;
@property(copy, nonatomic) NSString *ttsVersion;
@property(copy, nonatomic) NSArray *ttsPronunciations;
@property(nonatomic) long long tokenOffset;
@property(copy, nonatomic) NSString *orthography;
@property(copy, nonatomic) NSString *language;
@property(copy, nonatomic) NSString *apgId;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

