//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGModelAsset : NSObject
{
}

+ (id)asset;
+ (id)dictionaryWithPlistAssetPath:(id)arg1;
+ (id)dictionaryWithPlistFilename:(id)arg1;
+ (id)dpRecorderRules;
+ (id)signatureRules;
+ (id)metricsConfig;
+ (id)quickResponses;
+ (id)mappings;
+ (id)rules;
+ (id)_assetWithName:(id)arg1 andLoadBlock:(CDUnknownBlockType)arg2;
+ (void)_reset;
+ (void)_invokeOnUpdateBlock;
+ (void)registerOnUpdateBlock:(CDUnknownBlockType)arg1;

@end

