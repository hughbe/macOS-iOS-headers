//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMMessagePartChatItem.h"

@interface IMMessagePartChatItem (SocialUIAdditions)
- (long long)acknowledgmentFromMe;
- (BOOL)latestAcknowledgmentIsFromMe;
- (BOOL)includesAcknoweldgmentFromMe;
- (long long)latestAcknowledgment;
- (BOOL)includesMultipleAcknowledgments;
- (BOOL)isAcknowledged;
- (id)aggregateAcknowledgmentChatItem;
- (void)getAcknowledgmentsInfoWith:(id *)arg1 latestAcknowledgmentType:(long long *)arg2 includesMultiple:(char *)arg3 includesFromMe:(char *)arg4 latestsIsFromMe:(char *)arg5 latestAcknowledgmentFromMe:(long long *)arg6;
@end

