//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKImageCanvas.h>

#import "MDSnapshotMap.h"
#import "VKMapModelDelegate.h"

@class NSString, VKMapModel;

__attribute__((visibility("hidden")))
@interface VKMapImageCanvas : VKImageCanvas <VKMapModelDelegate, MDSnapshotMap>
{
    VKMapModel *_mapModel;
}

- (void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)mapModelWillBecomeFullyDrawn:(id)arg1;
- (void)mapModelDidBecomePartiallyDrawn:(id)arg1;
- (void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1;
- (id)mapModel:(id)arg1 painterForOverlay:(id)arg2;
- (void)mapModelLabelsDidLayout:(id)arg1;
- (void)mapModel:(id)arg1 selectedLabelMarkerDidChangeState:(const shared_ptr_2d33c5e4 *)arg2;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 *)arg2;
- (void)mapModel:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapModelDidFinishLoadingTiles:(id)arg1;
- (void)mapModelDidStartLoadingTiles:(id)arg1;
- (BOOL)isShowingNoDataPlaceholders;
@property(nonatomic) BOOL showsBuildings;
@property(nonatomic) BOOL showsPointsOfInterest;
@property(nonatomic) unsigned char labelScaleFactor;
@property(nonatomic) BOOL localizeLabels;
- (void)cancelTileRequests;
- (void)clearScene;
- (void)setMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)setMapType:(long long)arg1;
- (void)update;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 device:(struct Device *)arg2 homeQueue:(id)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5;
- (id)initWithTarget:(id)arg1 device:(struct Device *)arg2 homeQueue:(id)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5 localizeLabels:(BOOL)arg6 mapType:(long long)arg7;
- (id)initWithTarget:(id)arg1 device:(struct Device *)arg2 homeQueue:(id)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5 mapPurpose:(unsigned long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

