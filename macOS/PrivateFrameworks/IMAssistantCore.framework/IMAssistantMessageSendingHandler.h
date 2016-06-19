//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAssistantCore/IMAssistantMessageHandler.h>

#import "INSendMessageIntentHandling.h"

@class NSString;

@interface IMAssistantMessageSendingHandler : IMAssistantMessageHandler <INSendMessageIntentHandling>
{
}

- (void)resolveContentForSendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)resolveMessageContent:(id)arg1;
- (void)resolveRecipientsForSendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveRecipients:(id)arg1 forIntent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleSendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

