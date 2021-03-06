//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAssetWriterHelper.h>

@class NSArray, NSOperation;

__attribute__((visibility("hidden")))
@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper
{
    NSArray *_finishWritingOperations;
    NSOperation *_transitionToTerminalStatusOperation;
}

@property(readonly, nonatomic) NSOperation *transitionToTerminalStatusOperation; // @synthesize transitionToTerminalStatusOperation=_transitionToTerminalStatusOperation;
- (long long)status;
- (void)cancelWriting;
- (void)_finishWritingOperationsDidFinish;
- (void)dealloc;
- (id)initWithConfigurationState:(id)arg1 finishWritingOperations:(id)arg2;

@end

