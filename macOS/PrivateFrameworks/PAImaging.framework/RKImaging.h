//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RKImaging : NSObject
{
}

+ (void)initialize;
+ (id)sharedImaging;
- (id)newCPUContext;
- (id)newRenderContextForOpenGLContext:(id)arg1;
- (id)textureForPreviewCIImage:(id)arg1 size:(struct PFIntSize_st)arg2 colorSpace:(struct CGColorSpace *)arg3 device:(id)arg4;
- (id)_cpuQueue;
- (id)_cpuContext;
- (id)textureForPreviewImage:(id)arg1 size:(struct PFIntSize_st)arg2 device:(id)arg3;

@end

