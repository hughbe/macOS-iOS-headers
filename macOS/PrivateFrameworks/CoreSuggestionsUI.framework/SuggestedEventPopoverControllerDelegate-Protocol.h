//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsUI/NSObject-Protocol.h>

@class EKEvent, SGRealtimeEvent, SGUISuggestedEventPopoverViewController;

@protocol SuggestedEventPopoverControllerDelegate <NSObject>
- (void)suggestedEventPopoverController:(SGUISuggestedEventPopoverViewController *)arg1 wantsToIgnoreSuggestedEvent:(SGRealtimeEvent *)arg2;
- (void)suggestedEventPopoverController:(SGUISuggestedEventPopoverViewController *)arg1 wantsToCommitSuggestedEvent:(SGRealtimeEvent *)arg2 asEvent:(EKEvent *)arg3;
- (void)cancelSuggestedEventPopoverController:(SGUISuggestedEventPopoverViewController *)arg1;
@end

