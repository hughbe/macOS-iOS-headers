//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DEContext, DEDistribution, NSDictionary, NSString;
@protocol OS_os_log;

@interface DEExecutor : NSObject
{
    BOOL _debug;
    BOOL _test;
    BOOL _resetState;
    BOOL _multiuser;
    BOOL _grounding;
    BOOL _enableUpdates;
    NSString *_templateDir;
    NSString *_catId;
    NSString *_locale;
    NSDictionary *_parameters;
    NSDictionary *_globalParameters;
    NSString *_pluginName;
    DEContext *_context;
    CDUnknownBlockType _callback;
    DEDistribution *_distribution;
    NSString *_voiceGender;
    NSObject<OS_os_log> *_log;
    unsigned long long _signpost;
}

+ (void)executeWithJson:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)executeWithJson:(id)arg1 callback:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)executeWithJson:(id)arg1 paramsString:(id)arg2 localeString:(id)arg3 callback:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (CDUnknownBlockType)prepareCallback:(CDUnknownBlockType)arg1 forContext:(struct Context *)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long signpost; // @synthesize signpost=_signpost;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) NSString *voiceGender; // @synthesize voiceGender=_voiceGender;
@property(nonatomic) BOOL enableUpdates; // @synthesize enableUpdates=_enableUpdates;
@property(nonatomic) BOOL grounding; // @synthesize grounding=_grounding;
@property(nonatomic) BOOL multiuser; // @synthesize multiuser=_multiuser;
@property(nonatomic) BOOL resetState; // @synthesize resetState=_resetState;
@property(nonatomic) BOOL test; // @synthesize test=_test;
@property(nonatomic) BOOL debug; // @synthesize debug=_debug;
@property(retain, nonatomic) DEDistribution *distribution; // @synthesize distribution=_distribution;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) DEContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *pluginName; // @synthesize pluginName=_pluginName;
@property(retain, nonatomic) NSDictionary *globalParameters; // @synthesize globalParameters=_globalParameters;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSString *catId; // @synthesize catId=_catId;
@property(retain, nonatomic) NSString *templateDir; // @synthesize templateDir=_templateDir;
- (id)executeWithParams:(id)arg1 locale:(id)arg2;
- (void)executeWithParams:(id)arg1 locale:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)execute;
- (void)executeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)consumeContext:(struct Context *)arg1 localePath:(basic_string_a1f69cfb)arg2;
- (basic_string_a1f69cfb)consumeContextForJson:(struct Context *)arg1;
- (void)updateContext:(struct Context *)arg1 localePath:(basic_string_a1f69cfb)arg2;
- (struct Context *)getContext;
- (void)checkProfile;
- (void)setupProfile;
- (id)init;

@end

