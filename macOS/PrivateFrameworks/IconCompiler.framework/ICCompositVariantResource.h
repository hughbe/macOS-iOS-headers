//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICVariantResourceProtocol.h"
#import "ICVariantResourceProviderProtocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURL;

@interface ICCompositVariantResource : NSObject <ICVariantResourceProviderProtocol, ICVariantResourceProtocol>
{
    NSString *_variantName;
    unsigned long long _flags;
    NSDictionary *_compositionInfo;
    NSURL *_baseURL;
    NSMutableDictionary *_vectorResources;
    NSMutableDictionary *_imageSetResources;
    NSDictionary *_recipes;
    NSMutableArray *_layers;
}

+ (id)resourceWithURL:(id)arg1 resourceInfo:(id)arg2;
@property(retain) NSMutableArray *layers; // @synthesize layers=_layers;
@property(retain) NSDictionary *recipes; // @synthesize recipes=_recipes;
@property(retain) NSMutableDictionary *imageSetResources; // @synthesize imageSetResources=_imageSetResources;
@property(retain) NSMutableDictionary *vectorResources; // @synthesize vectorResources=_vectorResources;
@property(retain) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain) NSDictionary *compositionInfo; // @synthesize compositionInfo=_compositionInfo;
@property(readonly) unsigned long long flags; // @synthesize flags=_flags;
@property(readonly) NSString *variantName; // @synthesize variantName=_variantName;
- (void).cxx_destruct;
- (struct CGImage *)imageForSize:(unsigned long long)arg1 scale:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)drawInContext:(struct CGContext *)arg1 withScale:(unsigned long long)arg2 error:(id *)arg3;
- (id)resolvedResourceNamed:(id)arg1;
- (id)vectorResourceNamed:(id)arg1;
- (id)imageResourceNamed:(id)arg1;
- (id)textResourceNamed:(id)arg1;
- (void)loadLayers;
- (id)recipeNamed:(id)arg1;
- (void)loadResources;
- (BOOL)addResourceWithURL:(id)arg1 error:(id *)arg2;
- (BOOL)addResourceWithResourceURL:(id)arg1 namePrefix:(id)arg2 error:(id *)arg3;
- (id)initWithCompositionInfo:(id)arg1 baseURL:(id)arg2 variantName:(id)arg3 flags:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

