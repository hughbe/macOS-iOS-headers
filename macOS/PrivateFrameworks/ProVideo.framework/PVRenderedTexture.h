//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PVRenderedTexture : NSObject
{
    HGRef_34ac394f _glTexture;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect bitmapRect;
@property(readonly, nonatomic) struct CGRect textureRect;
- (struct CGSize)textureSize;
@property(readonly, nonatomic) unsigned int textureTarget;
@property(readonly, nonatomic) unsigned int textureName;
- (id)initWithHGGLTexture:(HGRef_34ac394f)arg1;

@end

