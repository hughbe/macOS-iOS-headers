//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSPopoverDelegate.h"
#import "SafeAutoFillChoicesPopUpButtonViewControllerDelegate.h"

@class ABPerson, NSArray, NSButton, NSDictionary, NSImageView, NSMutableDictionary, NSMutableSet, NSStackView, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface SafeAutoFillChoicesConfirmationPopoverViewController : NSViewController <NSPopoverDelegate, SafeAutoFillChoicesPopUpButtonViewControllerDelegate>
{
    NSDictionary *_displayData;
    NSString *_contactName;
    NSTextField *_textFieldForFittingSize;
    NSArray *_popUpButtonViewControllers;
    BOOL _isNameFieldGoingToBeFilled;
    NSMutableDictionary *_initiallySelectedAddressBookPropertiesToIdentifiersMap;
    ABPerson *_person;
    NSMutableSet *_availableLabels;
    NSArray *_addressBookMatchesForContact;
    NSMutableDictionary *_addressBookLabelsToPropertyNamesToPropertyIndexes;
    struct SafeAutoFillConfirmationController *_safeAutoFillConfirmationController;
    NSStackView *_addressBookDisplayDataStackView;
    NSButton *_autoFillButton;
    NSButton *_cancelButton;
    NSTextField *_contactNameLabel;
    NSImageView *_contactImageView;
}

+ (id)test_sortKeysForDisplayOrder:(id)arg1;
@property(nonatomic) __weak NSImageView *contactImageView; // @synthesize contactImageView=_contactImageView;
@property(nonatomic) __weak NSTextField *contactNameLabel; // @synthesize contactNameLabel=_contactNameLabel;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak NSButton *autoFillButton; // @synthesize autoFillButton=_autoFillButton;
@property(nonatomic) __weak NSStackView *addressBookDisplayDataStackView; // @synthesize addressBookDisplayDataStackView=_addressBookDisplayDataStackView;
@property(nonatomic) struct SafeAutoFillConfirmationController *safeAutoFillConfirmationController; // @synthesize safeAutoFillConfirmationController=_safeAutoFillConfirmationController;
- (void).cxx_destruct;
- (void)safeAutoFillChoicesPopUpButtonViewControllerDidChangeSelection:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (BOOL)_customizationsWereMadeInPopover;
- (void)_updateAutoFillButtonState;
- (id)_addressBookMatchesForDoNotFillFromSelectionsInPopover;
- (id)_addressBookMatchesToFillFromSelectionsInPopover;
- (id)_controlIDToAutoFillValues;
- (id)_preferredIdentifiersFromSelectionsInPopover;
- (void)_acceptAutoFill:(id)arg1;
- (void)_cancelAutoFill:(id)arg1;
- (double)_maximumPopupMenuWidth;
- (void)_constrainStackViewWithPopupButton;
- (void)_alignSectionTitlesInPopUpButtons;
- (void)_addPopUpButtonsToStackView;
- (void)_addPopUpButtonsToStackViewWithAddressBookDisplayData:(id)arg1 popUpButtonViewControllers:(id)arg2;
- (void)_setContactImageViewPropertiesForCircularImage;
- (void)viewDidLoad;
- (id)initWithSafeAutoFillConfirmationController:(struct SafeAutoFillConfirmationController *)arg1 addressBookDisplayData:(id)arg2 autoFillMatches:(id)arg3;
- (id)preferredAddressBookDataFromArray:(id)arg1;
- (id)_initialLabelForAddressBookDataInPopover;
- (void)_createAddressBookLabelsToPropertyNamesToPropertyIndexesMap;
- (void)_setDisplayDataAndContactNameFromArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

