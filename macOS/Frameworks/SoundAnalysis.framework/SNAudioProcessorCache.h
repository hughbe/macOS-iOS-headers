//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SNAudioProcessorCache : NSObject
{
    NSMutableDictionary *_activeProcessorsCache;
}

- (void).cxx_destruct;
- (id)createAudioProcessorWithConfiguration:(id)arg1;
- (id)audioProcessorWithConfiguration:(id)arg1;
- (id)sharedProcessorWithConfiguration:(id)arg1;
- (id)init;

@end

