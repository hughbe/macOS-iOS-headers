//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DGCIBitmapRenderer : NSObject
{
}

+ (id)newBitmapRenderingContext:(BOOL)arg1;
+ (void)withGPUContext:(CDUnknownBlockType)arg1;
+ (void)withCPUContext:(CDUnknownBlockType)arg1;
+ (void)_withContextFromStack:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)render:(id)arg1 toBitmap:(void *)arg2 rowBytes:(long long)arg3 bounds:(struct CGRect)arg4 format:(int)arg5 outputColorSpace:(struct CGColorSpace *)arg6 useSoftwareRenderer:(BOOL)arg7;
+ (void)initialize;

@end

