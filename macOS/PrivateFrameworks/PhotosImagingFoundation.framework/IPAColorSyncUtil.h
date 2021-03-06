//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IPAColorSyncUtil : NSObject
{
}

+ (id)checksumForColorSpace:(struct CGColorSpace *)arg1;
+ (struct CGColorSpace *)newCanonicalColorSpace:(struct CGColorSpace *)arg1;
+ (struct CGColorSpace *)newLinearizedColorSpace:(struct CGColorSpace *)arg1;
+ (void)replaceProfile:(struct ColorSyncProfile *)arg1 name:(const char *)arg2;
+ (BOOL)parseHeaderForColorSyncProfile:(struct ColorSyncProfile *)arg1 outProfileClass:(id *)arg2 outColorSpaceType:(id *)arg3 outPCS:(id *)arg4;
+ (struct ColorSyncProfile *)newColorSyncProfileFromCGColorSpace:(struct CGColorSpace *)arg1;

@end

