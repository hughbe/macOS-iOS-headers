//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/UIFontDescriptor.h>

@interface NSCTFontDescriptor : UIFontDescriptor
{
}

+ (id)fontDescriptorWithName:(id)arg1 matrix:(id)arg2;
+ (id)fontDescriptorWithName:(id)arg1 size:(double)arg2;
+ (id)fontDescriptorWithFontAttributes:(id)arg1 options:(unsigned long long)arg2;
+ (id)fontDescriptorWithFontAttributes:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)arg1;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)arg1;
- (id)fontAttributes;
- (id)fontDescriptorByAddingAttributes:(id)arg1;
- (id)objectForKey:(id)arg1;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)_cfTypeID;

@end

