//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBContact, _INPBDataString, _INPBIntentMetadata, _INPBSendMessageAttachment, _INPBString;

@protocol _INPBSendMessageIntent <NSObject>
+ (Class)recipientType;
+ (Class)attachmentsType;
@property(readonly, nonatomic) BOOL hasSpeakableGroupName;
@property(retain, nonatomic) _INPBDataString *speakableGroupName;
@property(readonly, nonatomic) BOOL hasServiceName;
@property(copy, nonatomic) NSString *serviceName;
@property(readonly, nonatomic) BOOL hasSender;
@property(retain, nonatomic) _INPBContact *sender;
@property(readonly, nonatomic) unsigned long long recipientsCount;
@property(copy, nonatomic) NSArray *recipients;
@property(nonatomic) BOOL hasMessageType;
@property(nonatomic) int messageType;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) BOOL hasGroupName;
@property(retain, nonatomic) _INPBString *groupName;
@property(nonatomic) BOOL hasEffect;
@property(nonatomic) int effect;
@property(readonly, nonatomic) BOOL hasConversationIdentifier;
@property(copy, nonatomic) NSString *conversationIdentifier;
@property(readonly, nonatomic) BOOL hasContent;
@property(retain, nonatomic) _INPBString *content;
@property(readonly, nonatomic) unsigned long long attachmentsCount;
@property(copy, nonatomic) NSArray *attachments;
- (_INPBContact *)recipientAtIndex:(unsigned long long)arg1;
- (void)addRecipient:(_INPBContact *)arg1;
- (void)clearRecipients;
- (int)StringAsMessageType:(NSString *)arg1;
- (NSString *)messageTypeAsString:(int)arg1;
- (int)StringAsEffect:(NSString *)arg1;
- (NSString *)effectAsString:(int)arg1;
- (_INPBSendMessageAttachment *)attachmentsAtIndex:(unsigned long long)arg1;
- (void)addAttachments:(_INPBSendMessageAttachment *)arg1;
- (void)clearAttachments;
@end

