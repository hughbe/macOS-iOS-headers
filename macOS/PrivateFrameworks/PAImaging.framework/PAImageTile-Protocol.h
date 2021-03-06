//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PAImaging/NSObject-Protocol.h>

@class IPARegion, PAOpenGLContext;

@protocol PAImageTile <NSObject>
- (BOOL)readBufferRegion:(IPARegion *)arg1 withBlock:(void (^)(PABuffer *))arg2;
- (BOOL)readTextureRegion:(IPARegion *)arg1 withContext:(PAOpenGLContext *)arg2 block:(void (^)(PAGLTextureRect *))arg3;
- (struct CGRect)bounds;
- (struct CGRect)frame;
- (unsigned long long)index;
@end

