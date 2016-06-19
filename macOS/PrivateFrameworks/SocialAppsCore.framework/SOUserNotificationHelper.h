//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle;

@interface SOUserNotificationHelper : NSObject
{
    NSBundle *_bundle;
}

+ (id)sharedHelper;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (id)subtitleForChatRoom:(id)arg1;
- (void)postAlertNotificationMentioningMeInChat:(id)arg1 message:(id)arg2;
- (void)clearAllUserNotificationsForGuid:(id)arg1;
- (void)postUserNotification:(id)arg1;
- (id)userNotificationForChat:(id)arg1 sound:(id)arg2;
- (id)userNotificationForKnockKnockMessage:(id)arg1 chat:(id)arg2 sound:(id)arg3;
- (id)userNotificationForMessage:(id)arg1 chat:(id)arg2 sound:(id)arg3 buddyImage:(id)arg4 includeReply:(BOOL)arg5;
- (id)_firstImageForMessage:(id)arg1;
- (id)_userNotificationWithTitle:(id)arg1 subtitle:(id)arg2 infomativeText:(id)arg3 actionButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 userInfo:(id)arg6 identifier:(id)arg7 date:(id)arg8 sound:(id)arg9 peopleIdentifiers:(id)arg10 buddyImage:(id)arg11 attachedImage:(id)arg12 includeReply:(BOOL)arg13 responsePlaceholder:(id)arg14 serviceIsiMessage:(BOOL)arg15 emojiSubstitutionEnabled:(BOOL)arg16;
- (id)init;

@end

