//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVSampleBufferGeneratorInternal;

@interface AVSampleBufferGenerator : NSObject
{
    AVSampleBufferGeneratorInternal *_generator;
}

+ (void)notifyOfDataReadyForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)initialize;
- (struct opaqueCMSampleBuffer *)createSampleBufferForRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAsset:(id)arg1 timebase:(struct OpaqueCMTimebase *)arg2;

@end

