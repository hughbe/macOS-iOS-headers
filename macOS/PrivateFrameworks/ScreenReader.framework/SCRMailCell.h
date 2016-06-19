//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRCell.h>

#import "SCRMailMessageContentHost.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SCRMailCell : SCRCell <SCRMailMessageContentHost>
{
}

@property(readonly, nonatomic) NSArray *potentialMessageContent;
@property(readonly, nonatomic) id <SCRMailMessageContent> messageContent;
- (void)addElementSummaryToRequest:(id)arg1;
- (void)addItemDescriptionToRequest:(id)arg1;
- (void)addCellLabelToRequest:(id)arg1;
- (void)_addDetailedMessageDescriptionToRequest:(id)arg1;
- (id)_senderElement;
- (id)reorderedChildrenForSummaryDescription:(id)arg1;
- (unsigned long long)_speakingPriorityOfID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

