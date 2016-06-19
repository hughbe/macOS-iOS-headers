//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFLibraryUpgradeStep.h>

@class NSArray;

@interface MFRemoveMessagesUpgradeStep : MFLibraryUpgradeStep
{
    BOOL _shouldRecalculateMessageCounts;
    NSArray *_accounts;
}

@property(nonatomic) BOOL shouldRecalculateMessageCounts; // @synthesize shouldRecalculateMessageCounts=_shouldRecalculateMessageCounts;
@property(readonly, copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;
- (void)cleanUpAfterRemovingMessagesWithRowIDs:(id)arg1 subjects:(id)arg2 senders:(id)arg3 recalculateMessageCounts:(BOOL)arg4;
- (void)removeMessagesWithRowIDs:(id)arg1 rowIDsByMailboxURLStrings:(id)arg2;
- (id)initWithSQLHandle:(id)arg1;
- (id)initWithSQLHandle:(id)arg1 accounts:(id)arg2;

@end

