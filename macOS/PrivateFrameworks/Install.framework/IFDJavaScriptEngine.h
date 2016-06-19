//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IFDJavaScriptEngine : NSObject
{
    struct OpaqueJSContext *_ctx;
    NSString *_script;
}

- (void *)callJSFunction:(id)arg1 storingResultsIn:(id)arg2;
- (void *)callJSFunction:(id)arg1;
- (void)setSearchContext:(id)arg1;
- (void)setDistributionScriptsPath:(id)arg1;
- (void)setCurrentBundle:(struct __CFBundle *)arg1;
- (void)setCurrentChoiceID:(id)arg1;
- (void)setChoicesDelegate:(id)arg1;
- (void)setTargetContentsIgnored:(BOOL)arg1;
- (void)setTargetDelegate:(id)arg1;
- (void)setDocument:(id)arg1;
- (BOOL)initRuntime;
- (void)dealloc;
- (id)initWithScript:(id)arg1 allowInsecure:(BOOL)arg2;
- (id)init;

@end

