//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUMutableBufferImage-Protocol.h>
#import <NeutrinoCore/NUMutableTextureImage-Protocol.h>
#import <NeutrinoCore/NUSurfaceImage-Protocol.h>

@class NURegion;

@protocol NUMutableSurfaceImage <NUSurfaceImage, NUMutableBufferImage, NUMutableTextureImage>
- (void)writeSurfaceRegion:(NURegion *)arg1 withBlock:(void (^)(id <NUSurfaceTile>, char *))arg2;
@end

