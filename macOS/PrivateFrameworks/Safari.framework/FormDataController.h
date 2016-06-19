//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSFormDataController.h"

#import "WBSFormAutoFillCorrectionManagerDelegate.h"
#import "WBSFormFieldClassificationCorrectorDelegate.h"

@class NSArray, NSString, WBSFormAutoFillCorrectionManager, WBSFormAutoFillParsecFeedbackProcessor;

__attribute__((visibility("hidden")))
@interface FormDataController : WBSFormDataController <WBSFormAutoFillCorrectionManagerDelegate, WBSFormFieldClassificationCorrectorDelegate>
{
    struct unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter>> _formDataWriter;
    WBSFormAutoFillCorrectionManager *_autoFillCorrectionManager;
    WBSFormAutoFillParsecFeedbackProcessor *_autoFillFeedbackProcessor;
}

+ (BOOL)contactIsMe:(id)arg1;
+ (unsigned long long)numberOfTextFieldsInForm:(id)arg1;
+ (BOOL)isAddressBookPropertyAnAddressProperty:(id)arg1;
+ (BOOL)isAddressBookPropertyANameProperty:(id)arg1;
+ (id)sharedFormDataController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)test_processCorrectionsIfPossibleForSourceFrame:(const struct Frame *)arg1 formMetadata:(id)arg2 formValues:(id)arg3;
- (id)test_bestAddressBookLabelForControlValue:(id)arg1;
- (id)test_peopleWithFullNameContainingPrefix:(id)arg1;
- (id)test_peopleWithAddressBookProperty:(id)arg1 containingPrefix:(id)arg2;
- (id)feedbackProcessorForAutoFillCorrectionManager:(id)arg1;
- (BOOL)autoFillCorrectionManagerShouldProcessFeedback:(id)arg1;
- (id)formAutoFillCorrectionManagerForFormFieldClassificationCorrector:(id)arg1;
- (id)formFieldClassificationCorrector:(id)arg1 bestAddressBookLabelForControlValue:(id)arg2;
- (BOOL)_processCorrectionsIfPossibleForSourceFrame:(const struct Frame *)arg1 formMetadata:(id)arg2 formValues:(id)arg3;
- (id)_autoFillCorrectionManager;
- (void)displayNoAutoFillDialogForBrowserContentViewController:(struct BrowserContentViewController *)arg1 result:(int)arg2;
- (id)encryptOrDecryptData:(id)arg1 encrypt:(BOOL)arg2;
- (void)verifyKeychainAccessWithContentViewController:(struct BrowserContentViewController *)arg1;
- (void)displayInternetAccountSetupPromptForFrame:(const struct Frame *)arg1 sourceFrame:(const struct Frame *)arg2 userName:(id)arg3 password:(id)arg4;
- (id)completionDBPath;
- (id)substituteCredential:(id)arg1 inProtectionSpace:(id)arg2;
- (BOOL)hasUserDeniedAccessToCredential:(id)arg1 inProtectionSpace:(id)arg2;
- (BOOL)shouldAutoFillPasswords;
- (BOOL)shouldAutoFillFromPreviousData;
- (BOOL)shouldAutoFillFromAddressBook;
- (BOOL)_shouldSaveCreditCardDataInFrame:(const struct Frame *)arg1;
- (id)localizedAddressBookDescriptionForTextField:(id)arg1;
- (BOOL)shouldSaveUsernamesAndPasswordsInFrame:(const struct Frame *)arg1;
- (BOOL)_shouldSaveFormDataInFrame:(const struct Frame *)arg1;
- (unsigned long long)_numberOfAddressBookElementsInControls:(id)arg1;
- (BOOL)shouldOfferAddressBookAutoFillInTextField:(id)arg1 formMetadata:(id)arg2;
- (id)preferredAddressLabelForPerson:(id)arg1;
- (id)preferredAddressLabel;
- (void)_findAllContactsWithSameFullNameAsPerson:(id)arg1 andGetValuesForContactFormWithCompletionController:(struct FormCompletionController *)arg2 metadata:(id)arg3 inDomain:(id)arg4 contactLabel:(id)arg5;
- (void)showFlexibleContactsAutoFillUIForCompletionController:(struct FormCompletionController *)arg1 metadataProvider:(id)arg2 contactLabel:(id)arg3;
- (BOOL)shouldDeferLoadingWhileSavingFormDataInPage:(const struct Page *)arg1 frame:(const struct Frame *)arg2 sourceFrame:(const struct Frame *)arg3 formMetadata:(id)arg4 passwordGenerationCredentials:(id)arg5;
- (void)_saveFormDataIfNecessary:(id)arg1 page:(const struct Page *)arg2 frame:(const struct Frame *)arg3 sourceFrame:(const struct Frame *)arg4 values:(id)arg5 forceConfirmationIfOverwritingSavedPassword:(BOOL)arg6 passwordGenerationCredentials:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)saveUnsubmittedFormDataFromRemovedFrameIfNecessary:(id)arg1 page:(const struct Page *)arg2 frame:(const struct Frame *)arg3 sourceFrame:(const struct Frame *)arg4 passwordGenerationCredentials:(id)arg5;
- (void)willSubmitFormInPage:(const struct Page *)arg1 toFrame:(const struct Frame *)arg2 fromFrame:(const struct Frame *)arg3 values:(id)arg4 userData:(const struct Type *)arg5 listener:(const struct FormSubmissionListener *)arg6;
- (void)willSubmitFormWithCredentials:(id)arg1 toFrame:(const struct Frame *)arg2 fromFrame:(const struct Frame *)arg3 forceConfirmationIfOverwritingSavedPassword:(BOOL)arg4 passwordGenerationCredentials:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)offerToSaveCredentialsFromForm:(id)arg1 forFrame:(const struct Frame *)arg2 passwordGenerationCredentials:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)willSubmitStandardForm:(id)arg1 values:(id)arg2 toFrame:(const struct Frame *)arg3 fromFrame:(const struct Frame *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)formContainsNonEmptyTextField:(id)arg1;
- (void)saveCreditCardDataIfNecessary:(id)arg1 frame:(const struct Frame *)arg2 sourceFrame:(const struct Frame *)arg3 exitHandler:(struct ScopeExitHandler *)arg4;
- (int)_performCredentialAutoFillActionForForm:(id)arg1 ofType:(unsigned long long)arg2 inViewController:(struct BrowserContentViewController *)arg3 isPreFill:(BOOL)arg4 frame:(const struct Frame *)arg5;
- (int)sendAutoFillDataForStandardForm:(id)arg1 inViewController:(struct BrowserContentViewController *)arg2 frame:(const struct Frame *)arg3 usingOnlyAddressBookData:(BOOL)arg4 contactLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6 person:(id)arg7 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg8;
- (int)preFillActiveOrFirstLoginFormInViewController:(struct BrowserContentViewController *)arg1 metadataOfFormToPreFill:(id)arg2 ancestorFramesOfFormToPreFill:(const struct Array *)arg3 pageContainsAtLeastOneForm:(_Bool)arg4;
- (_Bool)_mayPrefillInFrame:(const struct Frame *)arg1 ancestorFramesOfFormToPreFill:(const struct Array *)arg2;
- (id)_activeElementMetadataInForm:(id)arg1;
- (void)autoFillActiveFormOrBestFormForPageLevelAutoFillInViewController:(struct BrowserContentViewController *)arg1 metadataProvider:(id)arg2 usingOnlyAddressBookData:(BOOL)arg3 contactLabel:(id)arg4 multiRoundAutoFillManager:(id)arg5 person:(id)arg6 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg7;
- (id)noAutoFillDialogDetailTextForResult:(int)arg1;
- (id)noAutoFillDialogTitleForResult:(int)arg1;
- (id)_peopleWithFullNameCompositeContainingPrefix:(id)arg1;
- (id)_peopleWithAddressBookProperty:(id)arg1 containingPrefix:(id)arg2;
- (id)_addressBookMatchesForValue:(id)arg1 property:(id)arg2 key:(id)arg3 label:(id)arg4 person:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 partialString:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 contact:(id)arg4 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg5;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3;
- (id)uniqueIDOfContact:(id)arg1;
- (id)_addressBookMatchesForProxyProperty:(id)arg1 addressBookEntry:(struct AddressBookEntry *)arg2;
- (void)domainsWithPreviousDataChanged;
- (void)savePendingChangesBeforeTermination;
- (void)saveCompletionDBSoon;
@property(readonly, nonatomic) NSArray *nameMatchesForMeCard;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

