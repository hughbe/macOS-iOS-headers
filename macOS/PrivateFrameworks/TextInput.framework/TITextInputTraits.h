//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface TITextInputTraits : NSObject <NSCopying, NSSecureCoding>
{
    union {
        long long integerValue;
        struct {
            unsigned int autocapitalizationType:2;
            unsigned int autocorrectionType:2;
            unsigned int spellCheckingType:2;
            unsigned int keyboardType:4;
            unsigned int keyboardAppearance:2;
            unsigned int returnKeyType:4;
            unsigned int textScriptType:4;
            unsigned int enablesReturnKeyAutomatically:1;
            unsigned int secureTextEntry:1;
            unsigned int disablePrediction:1;
        } fields;
    } _mask;
    NSString *_textContentType;
    NSString *_recentInputIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *recentInputIdentifier; // @synthesize recentInputIdentifier=_recentInputIdentifier;
@property(copy, nonatomic) NSString *textContentType; // @synthesize textContentType=_textContentType;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) BOOL disablePrediction;
@property(nonatomic) unsigned long long textScriptType;
@property(nonatomic) BOOL secureTextEntry;
@property(nonatomic) BOOL enablesReturnKeyAutomatically;
@property(nonatomic) unsigned long long returnKeyType;
@property(nonatomic) unsigned long long keyboardAppearance;
@property(nonatomic) unsigned long long keyboardType;
@property(nonatomic) unsigned long long spellCheckingType;
@property(nonatomic) unsigned long long autocorrectionType;
@property(nonatomic) unsigned long long autocapitalizationType;
- (void)dealloc;

@end

