//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKVectorMapModel.h>

#import "VKStyleManagerObserver.h"

@class NSString, VKRouteContext;

__attribute__((visibility("hidden")))
@interface VKPolygonMapModel : VKVectorMapModel <VKStyleManagerObserver>
{
    struct shared_ptr<ggl::PolygonStroke::MeshPipelineState> _strokePipelineState;
    struct shared_ptr<ggl::PolygonAnimatableStroke::MeshPipelineState> _animatableStrokePipelineState;
    struct shared_ptr<ggl::PolygonFill::CompressedMeshPipelineState> _fillPipelineState;
    struct shared_ptr<ggl::PolygonFill::CompressedMeshPipelineState> _blendedFillPipelineState;
    struct shared_ptr<ggl::PolygonAnimatableFill::CompressedMeshPipelineState> _animatableFillPipelineState;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonStroke::MeshPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonStroke::MeshPipelineSetup>>> _strokePipelineSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonAnimatableStroke::MeshPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonAnimatableStroke::MeshPipelineSetup>>> _animatableStrokePipelineSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonFill::CompressedMeshPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonFill::CompressedMeshPipelineSetup>>> _fillPipelineSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonFill::CompressedMeshPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonFill::CompressedMeshPipelineSetup>>> _blendedFillPipelineSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonAnimatableFill::CompressedMeshPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonAnimatableFill::CompressedMeshPipelineSetup>>> _animatableFillPipelineSetupPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _polygonRenderStates[32];
    int _belowRoadsSourceTileZtoStencilOffset;
    int _aboveRoadsSourceTileZToStencilOffset;
    int _aboveBuildingsSourceTileZToStencilOffset;
    struct ClearItem *_belowRoadsClearItem;
    struct ClearItem *_aboveRoadsClearItem;
    struct ClearItem *_aboveBuildingsClearItem;
    struct shared_ptr<ggl::ConstantDataTyped<ggl::AnimatableTexture::Variant>> _variantData;
    struct RenderItemBatcher _batcher;
    VKRouteContext *_routeContext;
    unordered_map_9fd1a77d _transitNodesRouteAttributesMap;
    _Bool _buildingsAre3D;
    struct CommandBufferIdSet _commandBufferIds;
    unsigned long long _mapLayerPosition;
}

@property(nonatomic) unsigned long long mapLayerPosition; // @synthesize mapLayerPosition=_mapLayerPosition;
@property(retain, nonatomic) VKRouteContext *routeContext; // @synthesize routeContext=_routeContext;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CommandBuffer *)aboveBuildingsCommanderBuffer:(struct RenderQueue *)arg1;
- (struct CommandBuffer *)aboveRoadsCommanderBuffer:(struct RenderQueue *)arg1;
- (struct CommandBuffer *)belowRoadsCommanderBuffer:(struct RenderQueue *)arg1;
- (shared_ptr_430519ce)featureMarkerInTile:(id)arg1 atPoint:(Matrix_6e1d3589 *)arg2;
- (void)updateStylesInTiles:(id)arg1 updateTextures:(BOOL)arg2;
- (void)stylesheetTransitionDidProgress;
- (void)willStartDrawingTiles:(id)arg1;
- (void)stylesheetDoneChanging;
- (void)stylesheetDidChange;
- (void)stylesheetWillChange;
- (BOOL)wantsCategorizedSourceTiles;
- (void)generateRenderItemsForTransparentPolygonsInScene:(id)arg1 context:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)generateRenderItemsForOpaquePolygonsInScene:(id)arg1 context:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (struct RenderState *)renderStateForFilling:(_Bool)arg1 usingStencilType:(unsigned char)arg2 blendingEnabled:(_Bool)arg3 depthTestingEnabled:(_Bool)arg4;
- (Matrix_99e705ad)worldTransformForPolygonGroup:(id)arg1 atZoom:(float)arg2;
- (void)reserveStencilRangeAboveBuildingsForScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)reserveStencilRangeAboveRoadsForScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)reserveStencilRangeBelowRoadsForScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)generateRenderItemsForScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)buildingsDidBecome3D:(_Bool)arg1;
- (void)resetPools;
- (void)flushPools;
- (void)didReceiveMemoryWarning:(BOOL)arg1;
- (unsigned long long)textureSize;
- (void)reset;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2 commandBufferIdSet:(struct CommandBufferIdSet)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) shared_ptr_a3c46825 styleManager;
@property(readonly) Class superclass;

@end

