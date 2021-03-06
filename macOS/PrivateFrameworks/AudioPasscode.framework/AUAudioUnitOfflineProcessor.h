//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AUAudioUnit;

__attribute__((visibility("hidden")))
@interface AUAudioUnitOfflineProcessor : NSObject
{
    struct CAExtAudioFile _srcFile;
    struct CAExtAudioFile _destFile;
    AUAudioUnit *_audioUnit;
    CDUnknownBlockType _renderBlock;
    struct unique_ptr<CABufferList, std::__1::default_delete<CABufferList>> _srcBufferList;
    struct unique_ptr<CABufferList, std::__1::default_delete<CABufferList>> _destBufferList;
    CDUnknownBlockType _pullInputBlock;
    long long _assetLength;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long assetLength; // @synthesize assetLength=_assetLength;
- (BOOL)run;
- (id)initWithAudioUnit:(id)arg1 inputFileURL:(id)arg2 outputFileURL:(id)arg3 ioSampleRate:(long long)arg4;

@end

