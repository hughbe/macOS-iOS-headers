//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXViewController.h"

#import "PXPeopleSuggestionManagerDelegate.h"
#import "PXPeopleSummaryDelegate.h"

@class NSString, PXAnimatedHeaderView, PXPeopleConfirmationSummaryViewController, PXPeopleSuggestionManager, PXPeopleSuggestionView, UXLabel;

@interface PXPeopleBaseConfirmationViewController : UXViewController <PXPeopleSuggestionManagerDelegate, PXPeopleSummaryDelegate>
{
    PXPeopleSuggestionManager *_suggestionManager;
    PXPeopleSuggestionView *_suggestionView;
    PXAnimatedHeaderView *_headerView;
    UXLabel *_descriptionLabel;
    PXPeopleConfirmationSummaryViewController *_summaryViewController;
}

@property(retain) PXPeopleConfirmationSummaryViewController *summaryViewController; // @synthesize summaryViewController=_summaryViewController;
@property(retain, nonatomic) UXLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) PXAnimatedHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) PXPeopleSuggestionView *suggestionView; // @synthesize suggestionView=_suggestionView;
@property(readonly) PXPeopleSuggestionManager *suggestionManager; // @synthesize suggestionManager=_suggestionManager;
- (void).cxx_destruct;
- (unsigned long long)autoConfirmedCountForSummaryViewController:(id)arg1;
- (unsigned long long)userConfirmedCountForSummaryViewController:(id)arg1;
- (id)faceCollectionForSummaryViewController:(id)arg1;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1;
- (void)suggestionManager:(id)arg1 hasNewSuggestionAvailable:(id)arg2;
- (void)confirmationCountUpdatedForSuggestionManager:(id)arg1;
- (void)doneTapped:(id)arg1;
- (void)performUndo:(id)arg1;
- (void)undoDeny:(id)arg1;
- (void)undoConfirm:(id)arg1;
- (void)denyTapped:(id)arg1;
- (void)confirmTapped:(id)arg1;
- (void)dismissSummary;
- (void)displaySummary;
- (void)presentSuggestion:(id)arg1 animated:(BOOL)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithPerson:(id)arg1 initialSuggestions:(id)arg2;
- (id)initWithFaceCollection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

