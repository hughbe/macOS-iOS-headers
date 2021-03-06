/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKDashboardMultiplayerPickerViewController : GKDashboardCollectionViewController <CNContactPickerDelegate, GKDashboardMultiplayerPickerDatasourceDelegate, UITextFieldDelegate> {
    UIVisualEffectView * _backgroundEffectView;
    id /* block */  _completionHandler;
    CNContactPickerViewController * _contactPicker;
    NSLayoutConstraint * _customizeMessageBottomConstraint;
    UIButton * _customizeMessageButton;
    UILabel * _descriptionLabel;
    double  _initialCustomizeMessageBottomConstraintConstant;
    NSArray * _initiallySelectedPlayers;
    NSString * _message;
    UITextField * _messageField;
    <GKDashboardMultiplayerPickerDelegate> * _multiplayerPickerDelegate;
    <GKDashboardNearbyBrowserDelegate> * _nearbyDelegate;
    UIView * _searchBackgroundView;
    GKPickerSearchTextField * _searchTextField;
    UIButton * _sendButton;
    bool  _shouldIgnoreClearSelection;
    UIButton * _showContactPickerButton;
}

@property (nonatomic, retain) UIVisualEffectView *backgroundEffectView;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) CNContactPickerViewController *contactPicker;
@property (nonatomic, retain) NSLayoutConstraint *customizeMessageBottomConstraint;
@property (nonatomic, retain) UIButton *customizeMessageButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initialCustomizeMessageBottomConstraintConstant;
@property (nonatomic, retain) NSArray *initiallySelectedPlayers;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) UITextField *messageField;
@property (nonatomic) <GKDashboardMultiplayerPickerDelegate> *multiplayerPickerDelegate;
@property (nonatomic) <GKDashboardNearbyBrowserDelegate> *nearbyDelegate;
@property (nonatomic, readonly) bool nearbyOnly;
@property (nonatomic, readonly) GKDashboardMultiplayerPickerDataSource *pickerDataSource;
@property (nonatomic, retain) UIView *searchBackgroundView;
@property (nonatomic, retain) GKPickerSearchTextField *searchTextField;
@property (nonatomic, retain) UIButton *sendButton;
@property (nonatomic) bool shouldIgnoreClearSelection;
@property (nonatomic, retain) UIButton *showContactPickerButton;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsNearby;

- (void).cxx_destruct;
- (void)_updateButtonEnableState;
- (void)_updateCollectionView;
- (void)addMessage:(id)arg1;
- (void)adjustCustomizeMessageConstraint;
- (id)backgroundEffectView;
- (id)blurEffectForTraitCollection:(id)arg1;
- (void)cancel:(id)arg1;
- (void)clearSelection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionSectionInset;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id /* block */)completionHandler;
- (id)contactPicker;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)createSortPickerMenu;
- (id)customizeMessageBottomConstraint;
- (id)customizeMessageButton;
- (void)dataUpdated:(bool)arg1 withError:(id)arg2;
- (id)descriptionLabel;
- (void)didBeginSearchTextEditing;
- (void)didEndSearchTextEditing;
- (void)didPressShowContactPickerButton:(id)arg1;
- (void)handleSearchTextFieldReturn:(id)arg1;
- (bool)hasData;
- (id)initWithMaxSelectable:(long long)arg1 hiddenPlayers:(id)arg2 nearbyOnly:(bool)arg3;
- (double)initialCustomizeMessageBottomConstraintConstant;
- (id)initiallySelectedPlayers;
- (id)message;
- (id)messageField;
- (id)multiplayerPickerDelegate;
- (id)nearbyDelegate;
- (bool)nearbyOnly;
- (id)pickerDataSource;
- (void)pickerDatasource:(id)arg1 didPickPlayers:(id)arg2;
- (void)pickerDatasourceDidSelectAddFriend:(id)arg1;
- (id)preferredFocusEnvironments;
- (id)searchBackgroundView;
- (id)searchTextField;
- (void)selectPlayersAtIndexPaths:(id)arg1 askDelegateFirst:(bool)arg2;
- (void)send:(id)arg1;
- (id)sendButton;
- (void)setBackgroundEffectView:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setContactPicker:(id)arg1;
- (void)setCustomizeMessageBottomConstraint:(id)arg1;
- (void)setCustomizeMessageButton:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setInitialCustomizeMessageBottomConstraintConstant:(double)arg1;
- (void)setInitiallySelectedPlayers:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageField:(id)arg1;
- (void)setMultiplayerPickerDelegate:(id)arg1;
- (void)setNearbyDelegate:(id)arg1;
- (void)setSearchBackgroundView:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)setSearchTextField:(id)arg1;
- (void)setSendButton:(id)arg1;
- (void)setShouldIgnoreClearSelection:(bool)arg1;
- (void)setShowContactPickerButton:(id)arg1;
- (void)setSupportsNearby:(bool)arg1;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (bool)shouldIgnoreClearSelection;
- (id)showContactPickerButton;
- (bool)supportsNearby;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
