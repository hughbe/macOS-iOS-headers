//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

#import "NSRuleEditorDelegate.h"
#import "NSTextFieldDelegate.h"
#import "TSearchCriteriaSheetDelegate.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FI_TSearchCriteriaViewController : FI_TViewController <NSTextFieldDelegate, NSRuleEditorDelegate, TSearchCriteriaSheetDelegate>
{
    id <TSearchCriteriaViewControllerDelegate> _delegate;
    struct TKeyValueBinder _criteriaRuleEditorRowsBinder;
    struct TNSRef<NSMutableArray *, void> _customFieldsArray;
    struct TNSRef<NSArray *, void> _rootSliceAttributes;
    struct TNSRef<NSMutableArray<NSMutableDictionary *>*, void> _boundRulesArray;
    struct TNSRef<FI_TSearchCriteriaSheetController *, void> _sheetController;
    struct TNSRef<FI_TMDUserSearch *, void> _search;
}

+ (id)itemDisplayValueForCriterion:(id)arg1;
+ (id)numberDisplayValueForCriterion:(int)arg1;
+ (id)queryStringForImages;
+ (id)queryStringForMusic;
+ (id)queryStringForText;
+ (id)queryStringForToDo;
+ (id)queryStringForSystemPrefs;
+ (id)queryStringForPresentations;
+ (id)queryStringForPDF;
+ (id)queryStringForVideo;
+ (id)queryStringForFonts;
+ (id)queryStringForEvents;
+ (id)queryStringForMessages;
+ (id)queryStringForDocuments;
+ (id)queryStringForContacts;
+ (id)queryStringForWebPages;
+ (id)queryStringForExecutables;
+ (id)queryStringForArchives;
+ (id)queryStringForApplications;
+ (id)queryStringForFolders;
+ (id)sliceForRawQueryString:(id)arg1;
+ (id)slicesForTag:(id)arg1 andLabel:(short)arg2;
+ (id)labelMatchSlice:(short)arg1;
+ (id)tagNameMatchSlice:(id)arg1;
+ (id)displayValueForCriterion:(id)arg1;
@property id <TSearchCriteriaViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)criterionWithSuggestion:(id)arg1;
- (id)criteriaWithSearchString:(id)arg1 nameOnly:(_Bool)arg2;
- (void)showCriteria:(id)arg1;
- (void)configureFor:(_Bool)arg1;
- (long long)criteriaCount;
- (void)searchCriteriaSheetDidEnd:(id)arg1 attributeNamesInMenu:(id)arg2 selectedAttributeName:(id)arg3 returnCode:(unsigned long long)arg4 contextInfo:(void *)arg5;
- (void)pickCustomField:(id)arg1;
- (id)numberDisplayValueForCriterion:(int)arg1 inRow:(long long)arg2;
- (id)controlForCriterion:(int)arg1;
- (id)newLabelPickerView;
- (id)newNumberTextField;
- (id)newNameTextField;
- (id)newDateTextField;
- (id)newDatePickerView;
- (long long)ruleEditor:(id)arg1 parentCriterion:(id)arg2 compareCriterion:(id)arg3 withLocalizedDisplayValue:(id)arg4 toCriterion:(id)arg5 withLocalizedDisplayValue:(id)arg6;
- (id)ruleEditor:(id)arg1 displayValueForCriterion:(id)arg2 inRow:(long long)arg3;
- (id)ruleEditor:(id)arg1 child:(long long)arg2 forCriterion:(id)arg3 withRowType:(unsigned long long)arg4;
- (long long)ruleEditor:(id)arg1 numberOfChildrenForCriterion:(id)arg2 withRowType:(unsigned long long)arg3;
- (id)itemForChild:(unsigned long long)arg1 andCriterion:(id)arg2;
- (id)numberForChild:(unsigned long long)arg1 andCriterion:(id)arg2;
- (id)rootItemForChild:(unsigned long long)arg1 withRowType:(unsigned long long)arg2;
- (long long)itemChildCount:(id)arg1;
- (long long)numberChildCountForItem:(id)arg1;
- (long long)rootChildCountWithRowType:(unsigned long long)arg1;
- (void)handleRuleEditorRowsDidChangeNotification;
- (void)ruleEditorRowsDidChange:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)controlValueChanged:(id)arg1;
- (_Bool)includeNonFinderFiles:(_Bool)arg1;
- (_Bool)showSystemFiles:(_Bool)arg1;
- (id)filter;
- (id)archivedSliceIncludingSpotlightItems;
- (id)archivedSliceMatchingSearchString:(id)arg1;
- (id)archivedSliceMatchingFileNameSearch:(id)arg1;
- (id)sliceAsPlistForSuggestion:(id)arg1;
- (id)slicesAsPlist;
- (id)archivedRowForSlice:(id)arg1;
- (id)slicesFromPlist:(id)arg1;
- (id)unarchivedSliceForRow:(id)arg1;
- (void)setupInitialSlice;
- (void)prepareUIForSlices:(id)arg1;
- (void)removeAllSlices;
- (void)setSlices:(id)arg1;
- (id)slices;
- (id)search;
@property(copy, nonatomic) NSArray *boundRulesArray; // @dynamic boundRulesArray;
- (id)criteriaRuleEditor;
- (void)aboutToTearDown;
- (void)viewLoaded;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

