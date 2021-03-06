//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@class NSArray, NSURL;

@interface INDeferredLocalizedString : NSString
{
    NSString *_formatKey;
    NSString *_table;
    NSArray *_arguments;
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_cachedLocalization;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, copy) NSString *_cachedLocalization; // @synthesize _cachedLocalization;
@property(readonly, copy) NSURL *_bundleURL; // @synthesize _bundleURL;
@property(readonly, copy) NSString *_bundleIdentifier; // @synthesize _bundleIdentifier;
@property(readonly, copy) NSArray *_arguments; // @synthesize _arguments;
@property(readonly, copy) NSString *_table; // @synthesize _table;
@property(readonly, copy) NSString *_formatKey; // @synthesize _formatKey;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForKeyedArchiver;
- (Class)classForCoder;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)description;
- (id)localizeForLanguage:(id)arg1;
- (id)initWithDeferredFormat:(id)arg1 fromTable:(id)arg2 bundleIdentifier:(id)arg3 bundleURL:(id)arg4 arguments:(id)arg5;
- (id)initWithDeferredFormat:(id)arg1 fromTable:(id)arg2 bundle:(id)arg3 arguments:(struct __va_list_tag [1])arg4;
- (id)_intents_encodeForProto;

@end

