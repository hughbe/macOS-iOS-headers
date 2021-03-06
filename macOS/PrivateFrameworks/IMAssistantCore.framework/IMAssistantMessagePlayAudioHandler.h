//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAssistantCore/IMAssistantMessageQueryHandler.h>

#import <IMAssistantCore/IMAssistantAudioPlayerDelegate-Protocol.h>
#import <IMAssistantCore/INPlayAudioMessageIntentHandling-Protocol.h>

@class IMAssistantAudioPlayer, NSString;

@interface IMAssistantMessagePlayAudioHandler : IMAssistantMessageQueryHandler <IMAssistantAudioPlayerDelegate, INPlayAudioMessageIntentHandling>
{
    IMAssistantAudioPlayer *_audioPlayer;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
- (void)imAssistantAudioPlayer:(id)arg1 didUpdateState:(long long)arg2;
- (id)createAudioPlayerWithIdentifier:(id)arg1;
- (id)activeAudioPlayer;
- (void)queryAudioMessageURLForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmPlayAudioMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePlayAudioMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

