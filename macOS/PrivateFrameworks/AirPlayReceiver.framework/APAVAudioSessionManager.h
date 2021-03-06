//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioSession;

__attribute__((visibility("hidden")))
@interface APAVAudioSessionManager : NSObject
{
    struct OpaqueFigSimpleMutex *_mutex;
    AVAudioSession *_session;
    unsigned long long _type;
    BOOL _isSetUp;
}

+ (id)ambientSessionManager;
+ (id)mediaSessionManager;
- (BOOL)setActive:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setSessionMode:(id)arg1 error:(id *)arg2;
- (void)resetSession;
- (void)setUpSession;
@property(readonly, nonatomic) AVAudioSession *session; // @synthesize session=_session;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1;

@end

