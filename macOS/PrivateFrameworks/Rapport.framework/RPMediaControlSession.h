//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, RPMessageable;

@interface RPMediaControlSession : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _registeredMediaControlInterest;
    unsigned long long _mediaControlFlags;
    CDUnknownBlockType _mediaControlFlagsChangedHandler;
    id <RPMessageable> _messenger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
@property(copy, nonatomic) CDUnknownBlockType mediaControlFlagsChangedHandler; // @synthesize mediaControlFlagsChangedHandler=_mediaControlFlagsChangedHandler;
@property(readonly, nonatomic) unsigned long long mediaControlFlags; // @synthesize mediaControlFlags=_mediaControlFlags;
- (void)mediaSetVolume:(double)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mediaGetVolumeFromDestinationID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mediaSkipBySeconds:(double)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mediaCommand:(int)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mediaCaptionSettingSet:(int)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mediaCaptionSettingGetFromDestinationID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleMediaControlEvent:(id)arg1;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

