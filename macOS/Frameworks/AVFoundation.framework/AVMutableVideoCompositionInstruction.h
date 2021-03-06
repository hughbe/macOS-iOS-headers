//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVVideoCompositionInstruction.h>

@class AVMutableVideoCompositionInstructionInternal, NSArray;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction
{
    AVMutableVideoCompositionInstructionInternal *_mutableInstruction;
}

+ (id)videoCompositionInstruction;
@property(nonatomic) BOOL enablePostProcessing;
@property(copy, nonatomic) NSArray *layerInstructions;
@property(retain, nonatomic) struct CGColor *backgroundColor;
@property(nonatomic) CDStruct_e83c9415 timeRange;

@end

