//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface CKStreamSortedData : NSObject
{
    NSMutableArray *_activities;
    NSMutableArray *_messages;
    NSMutableDictionary *_activityMessagesMap;
}

@property(readonly, nonatomic) NSMutableDictionary *activityMessagesMap; // @synthesize activityMessagesMap=_activityMessagesMap;
@property(readonly, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(readonly, nonatomic) NSMutableArray *activities; // @synthesize activities=_activities;
- (void).cxx_destruct;
- (id)_removeActivitiesWithIdentifiers:(id)arg1 fromMutableArray:(id)arg2;
- (unsigned long long)_removeMessages:(id)arg1 fromMutableArray:(id)arg2;
- (void)_addMessageToActivityMessagesMap:(id)arg1;
- (id)removeActivitiesRelatedToMessagesIfEligible:(id)arg1;
- (id)removeMessagesRelatedToActivities:(id)arg1;
- (id)popMessagesAtRange:(struct _NSRange)arg1;
- (id)popActivitiesAtRange:(struct _NSRange)arg1;
- (unsigned long long)allMessagesCount;
- (id)allMessages;
- (unsigned long long)allActivitiesCount;
- (id)allActivities;
- (void)addMessage:(id)arg1 direction:(unsigned long long)arg2;
- (void)addActivity:(id)arg1 direction:(unsigned long long)arg2;
- (id)init;

@end

