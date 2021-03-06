//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface PPQuickTypeQuery : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _type;
    unsigned char _subtype;
    unsigned char _semanticTag;
    unsigned char _time;
    unsigned char _options;
    unsigned int _fields;
    NSArray *_subFields;
    NSString *_label;
    NSArray *_people;
    NSString *_localeIdentifier;
    NSString *_bundleIdentifier;
    NSArray *_recipients;
}

+ (id)_peopleNamesFromLMQualifiers:(id)arg1;
+ (id)_labelFromLMFieldString:(id)arg1 qualifiers:(id)arg2;
+ (id)_subfieldsFromString:(id)arg1;
+ (unsigned char)_timeFromString:(id)arg1;
+ (unsigned int)_fieldsFromStrings:(id)arg1;
+ (unsigned char)_semanticTagFromString:(id)arg1;
+ (unsigned char)_subtypeFromString:(id)arg1;
+ (unsigned char)_typeFromString:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)quickTypeQueryWithType:(unsigned char)arg1 subtype:(unsigned char)arg2 semanticTag:(unsigned char)arg3 fields:(unsigned int)arg4 time:(unsigned char)arg5 options:(unsigned char)arg6 subFields:(id)arg7 label:(id)arg8 people:(id)arg9 localeIdentifier:(id)arg10 bundleIdentifier:(id)arg11 recipients:(id)arg12;
+ (id)quickTypeQueryWithType:(unsigned char)arg1 subtype:(unsigned char)arg2 semanticTag:(unsigned char)arg3 fields:(unsigned int)arg4 time:(unsigned char)arg5 subFields:(id)arg6 label:(id)arg7 people:(id)arg8 localeIdentifier:(id)arg9 bundleIdentifier:(id)arg10 recipients:(id)arg11;
+ (id)quickTypeQueryFromLMTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(retain, nonatomic) NSArray *people; // @synthesize people=_people;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSArray *subFields; // @synthesize subFields=_subFields;
@property(nonatomic) unsigned char options; // @synthesize options=_options;
@property(nonatomic) unsigned char time; // @synthesize time=_time;
@property(nonatomic) unsigned int fields; // @synthesize fields=_fields;
@property(nonatomic) unsigned char semanticTag; // @synthesize semanticTag=_semanticTag;
@property(nonatomic) unsigned char subtype; // @synthesize subtype=_subtype;
@property(nonatomic) unsigned char type; // @synthesize type=_type;
- (BOOL)isResultEquivelentToQuickTypeQuery:(id)arg1;
- (BOOL)isEqualToQuickTypeQuery:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithType:(unsigned char)arg1 subtype:(unsigned char)arg2 semanticTag:(unsigned char)arg3 fields:(unsigned int)arg4 time:(unsigned char)arg5 options:(unsigned char)arg6 subFields:(id)arg7 label:(id)arg8 people:(id)arg9 localeIdentifier:(id)arg10 bundleIdentifier:(id)arg11 recipients:(id)arg12;

@end

