//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _SCRUIElementCache : NSObject
{
    struct __AXUIElement *_axElement;
    long long _populationLevel;
    NSArray *_accessibilityRows;
    NSMutableDictionary *__attributeToValueCache;
}

+ (id)_attributesForPopulationLevel:(long long)arg1;
+ (long long)_populationLevelMax;
+ (long long)_populationLevelForAttribute:(id)arg1;
+ (id)_attributesForAllPopulationLevels;
+ (id)allCachableAttributes;
+ (id)cacheForAXUIElementRef:(struct __AXUIElement *)arg1 createIfNeeded:(BOOL)arg2;
+ (id)cacheForAXUIElementRef:(struct __AXUIElement *)arg1;
+ (void)invalidateAll;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *_attributeToValueCache; // @synthesize _attributeToValueCache=__attributeToValueCache;
@property(retain, nonatomic) NSArray *accessibilityRows; // @synthesize accessibilityRows=_accessibilityRows;
@property(nonatomic) long long populationLevel; // @synthesize populationLevel=_populationLevel;
- (id)canSetAttribute:(id)arg1;
- (id)valueForAttribute:(id)arg1;
- (id)cachedAttributes;
- (void)_populateIfNeededLevel:(long long)arg1;
- (void)populateIfNeededLevel3;
- (void)populateIfNeededLevel2;
- (void)populateIfNeededLevel1;
- (void)populateIfNeededLevel0;
- (void)_populateForAttributes:(id)arg1;
- (void)_setCacheValue:(void *)arg1 forAttribute:(id)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)initWithAXUIElementRef:(struct __AXUIElement *)arg1;

@end

