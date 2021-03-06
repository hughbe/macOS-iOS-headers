/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosBarsController : PXBarsController <PXActionPerformerDelegate, PXAssetCollectionActionPerformerDelegate, PXChangeObserver, PXPhotosGridActionPerformerDelegate, PXPhotosGridOptionsControllerDelegate, PXSettingsKeyObserver> {
    NSMapTable * _actionTypeByBarButtonItem;
    PXActionPerformer * _activeActionPerformer;
    PXAssetSelectionTypeCounter * _assetTypeCounter;
    PXPhotosBarButtonItemsController * _barButtonItemsController;
    NSString * _contentSizeCategory;
    PLDateRangeFormatter * _dateRangeFormatter;
    double  _endButtonSpacing;
    double  _interButtonSpacing;
    PXActionPerformer * _lastActionPerformer;
    NSArray * _leftBarButtonItemIdentifiers;
    PXPhotosGridActionMenuController * _menuController;
    PXMiroMoviePresenter * _miroMoviePresenter;
    NSArray * _rightBarButtonItemIdentifiers;
    NSArray * _toolbarItemIdentifiers;
    PXPhotosViewModel * _viewModel;
}

@property (nonatomic, readonly) NSMapTable *actionTypeByBarButtonItem;
@property (nonatomic, retain) PXActionPerformer *activeActionPerformer;
@property (nonatomic, readonly) PXAssetSelectionTypeCounter *assetTypeCounter;
@property (nonatomic, readonly) PXPhotosBarButtonItemsController *barButtonItemsController;
@property (nonatomic, retain) NSString *contentSizeCategory;
@property (nonatomic, readonly) PLDateRangeFormatter *dateRangeFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double endButtonSpacing;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interButtonSpacing;
@property (nonatomic, retain) PXActionPerformer *lastActionPerformer;
@property (nonatomic, retain) NSArray *leftBarButtonItemIdentifiers;
@property (nonatomic, retain) PXPhotosGridActionMenuController *menuController;
@property (nonatomic, retain) PXMiroMoviePresenter *miroMoviePresenter;
@property (nonatomic, readonly) PXPhotosUIViewController *photosViewController;
@property (nonatomic, retain) NSArray *rightBarButtonItemIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *toolbarItemIdentifiers;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;

- (void).cxx_destruct;
- (bool)_actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)_handleActionTypeBarButtonItem:(id)arg1;
- (id)_identifierForActionType:(id)arg1;
- (void)_reloadOptionsButton;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 transitionToViewController:(id)arg2 transitionType:(long long)arg3;
- (id)actionTypeByBarButtonItem;
- (id)activeActionPerformer;
- (void)assetCollectionActionPerformer:(id)arg1 playMovieForAssetCollection:(id)arg2;
- (id)assetTypeCounter;
- (id)barAppearance;
- (id)barButtonItemsController;
- (id)contentSizeCategory;
- (id)createAssetActionManagerForAssetReference:(id)arg1;
- (id)createBarButtonItemForIdentifier:(id)arg1 placement:(unsigned long long)arg2;
- (id)dateRangeFormatter;
- (void)didChangeActionPerformerTypeForOptionsController:(id)arg1;
- (void)didChangeSystemItemForOptionsController:(id)arg1;
- (double)endButtonSpacing;
- (double)fixedSpaceForEndButtonSpacing;
- (double)fixedSpaceForInterButtonSpacing;
- (void)handleActionMenuBarButtonItem:(id)arg1;
- (void)handleAddButtonItem:(id)arg1;
- (void)handleCancelBarButtonItem:(id)arg1;
- (void)handleDeselectAllBarButtonItem:(id)arg1;
- (void)handleSelectAllBarButtonItem:(id)arg1;
- (void)handleSelectBarButtonItem:(id)arg1;
- (id)hostViewControllerForActionPerformer:(id)arg1;
- (id)init;
- (id)initWithPhotosViewController:(id)arg1 viewModel:(id)arg2;
- (double)interButtonSpacing;
- (id)lastActionPerformer;
- (id)leftBarButtonItemIdentifiers;
- (id)menuController;
- (id)miroMoviePresenter;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photosGridActionPerformer:(id)arg1 filterStateChanged:(id)arg2;
- (id)photosViewController;
- (id)rightBarButtonItemIdentifiers;
- (void)setActiveActionPerformer:(id)arg1;
- (void)setContentSizeCategory:(id)arg1;
- (void)setEndButtonSpacing:(double)arg1;
- (void)setInterButtonSpacing:(double)arg1;
- (void)setLastActionPerformer:(id)arg1;
- (void)setLeftBarButtonItemIdentifiers:(id)arg1;
- (void)setMenuController:(id)arg1;
- (void)setMiroMoviePresenter:(id)arg1;
- (void)setRightBarButtonItemIdentifiers:(id)arg1;
- (void)setToolbarItemIdentifiers:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)toolbarItemIdentifiers;
- (void)updateBars;
- (id)viewModel;

@end
