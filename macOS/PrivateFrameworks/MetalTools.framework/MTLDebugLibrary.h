//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalTools/MTLToolsLibrary.h>

@class MTLCompileOptions;

@interface MTLDebugLibrary : MTLToolsLibrary
{
    unsigned long long _type;
    id _code;
    MTLCompileOptions *_compileOptions;
}

@property(copy, nonatomic) MTLCompileOptions *compileOptions; // @synthesize compileOptions=_compileOptions;
@property(copy, nonatomic) id code; // @synthesize code=_code;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id *)arg3;
- (id)newFunctionWithName:(id)arg1;
- (id)initWithLibrary:(id)arg1 parent:(id)arg2 type:(unsigned long long)arg3 code:(id)arg4 options:(id)arg5;

@end

