//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TTSAudioSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _audioSessionIsSetUp;
    CDStruct_a87a0d46 _desiredState;
    CDStruct_a87a0d46 _cachedState;
    BOOL _bluetoothAllowed;
    struct __CFBag *_activityBag;
    long long _serverGeneration;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_safeSetBluetoothInputAllowed:(BOOL)arg1;
- (void)_safeSetActive:(BOOL)arg1 withActivity:(long long)arg2;
- (void)_safeSetCategoryForActivity:(long long)arg1;
- (long long)_safeServerGeneration;
- (void)_safeSetupAudioSession;
- (long long)_nextActivityForActive:(BOOL)arg1 activity:(long long)arg2 serverActivity:(long long)arg3;
- (void)_setCategoryForActivity:(long long)arg1;
- (void)_setupAudioSession;
- (void)_mediaServicesWereReset:(id)arg1;
- (void)_audioSessionInterrupted:(id)arg1;
- (void)dealloc;
- (id)init;

@end

