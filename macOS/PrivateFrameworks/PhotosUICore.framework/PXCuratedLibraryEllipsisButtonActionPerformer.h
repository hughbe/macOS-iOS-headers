//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCuratedLibraryAssetCollectionActionPerformer.h>

@class PXCuratedLibraryActionManager, PXGLayout, PXPhotoKitAssetCollectionActionManager;

@interface PXCuratedLibraryEllipsisButtonActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer
{
    PXPhotoKitAssetCollectionActionManager *_assetCollectionActionManager;
    PXGLayout *_layout;
    PXCuratedLibraryActionManager *_actionManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXCuratedLibraryActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(nonatomic) __weak PXGLayout *layout; // @synthesize layout=_layout;
- (void)_presentToUserOptionsFromActionPerformers:(id)arg1;
- (BOOL)presentsMenu;
- (void)performUserInteractionTask;
- (id)buttonSpriteReference;
- (BOOL)performerResetsAfterCompletion;
- (id)initWithViewModel:(id)arg1 assetCollectionReference:(id)arg2 actionManager:(id)arg3;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2 assetCollectionReference:(id)arg3;

@end

