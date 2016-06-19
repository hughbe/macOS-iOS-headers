//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKOverlayPainter.h>

#import "VKPolylineObserver.h"

@class NSSet, NSString, VKPolylineOverlay, VKRouteLine, VKTileKeyList, VKTimedAnimation;

@interface VKPolylineOverlayPainter : VKOverlayPainter <VKPolylineObserver>
{
    VKRouteLine *_routeLine;
    double _routeLineWidthScaleRegular;
    BOOL _selected;
    VKPolylineOverlay *_routeOverlay;
    shared_ptr_696716c4 _viewUniforms;
    struct unique_ptr<md::SolidTrafficLayer, std::__1::default_delete<md::SolidTrafficLayer>> _solidTrafficLayer;
    struct unique_ptr<md::PilledTrafficLayer, std::__1::default_delete<md::PilledTrafficLayer>> _pilledTrafficLayer;
    struct unique_ptr<md::RouteLineArrowSharedResources, std::__1::default_delete<md::RouteLineArrowSharedResources>> _arrowSharedResources;
    struct vector<std::__1::unique_ptr<md::RouteLineArrowLayer, std::__1::default_delete<md::RouteLineArrowLayer>>, std::__1::allocator<std::__1::unique_ptr<md::RouteLineArrowLayer, std::__1::default_delete<md::RouteLineArrowLayer>>>> _arrowLayers;
    struct unique_ptr<md::RouteLineSharedResources, std::__1::default_delete<md::RouteLineSharedResources>> _routeSharedResources;
    struct unique_ptr<md::RouteLineLayer, std::__1::default_delete<md::RouteLineLayer>> _routeLineLayer;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _debugRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem>>> _debugRenderItems;
    struct unique_ptr<ggl::FragmentedPool<ggl::Debug::BasePipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::BasePipelineSetup>>> _debugPipelineSetups;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _debugLineRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::Debug::BaseMesh>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::BaseMesh>>> _debugUnmatchedRouteLineMeshes;
    double _previousViewUnitsPerPoint;
    int _styleZ;
    struct unordered_set<GEOComposedRouteSection *, std::__1::hash<GEOComposedRouteSection *>, std::__1::equal_to<GEOComposedRouteSection *>, std::__1::allocator<GEOComposedRouteSection *>> _selectedSections;
    struct fast_shared_ptr<md::RouteLineSection> _automobileSection;
    Matrix_08d701e4 _matrix;
    NSSet *_previousTilesInView;
    VKTileKeyList *_previousKeysInView;
    double _simplificationEpsilon;
    VKTimedAnimation *_fadeAnimation;
    float _alphaScale;
    VKTimedAnimation *_arrowFadeAnimation;
    float _arrowAlphaScale;
    BOOL _showArrows;
    VKTimedAnimation *_arrowCrossFadeAnimation;
    BOOL _showTraffic;
    BOOL _forceRoutelineUpdate;
    int _stencilValue;
    double _contentScale;
    unsigned long long _targetDisplayStep;
    float _crossfadingDisplayStep;
    BOOL _wasInRealisticMode;
    struct FeatureAttributeSet _trafficAttributes;
    struct FeatureAttributeSet _travelledTrafficAttributes;
    struct TrafficMeshStyle _builtMeshStyle;
    shared_ptr_c5d816ee _carStyleQuery;
}

@property(nonatomic) BOOL showTraffic; // @synthesize showTraffic=_showTraffic;
@property(retain, nonatomic) VKPolylineOverlay *routeOverlay; // @synthesize routeOverlay=_routeOverlay;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)polyline:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;
- (void)stylesheetDidChange;
- (void)setContainerModel:(id)arg1;
- (shared_ptr_a3c46825)styleManager;
- (void)updateRouteLineStencilValue:(int)arg1;
- (void)prepareToDrawWithCanvas:(id)arg1;
- (float)automobileRouteLineWidthForCamera:(id)arg1 canvasSize:(struct CGSize)arg2;
- (BOOL)_shouldShowTraffic;
- (void)layoutWithContext:(struct LayoutContext *)arg1 tiles:(id)arg2 keysInView:(id)arg3;
- (void)layoutDebugUnmatchedRouteLine:(struct LayoutContext *)arg1 commandBuffer:(struct CommandBuffer *)arg2;
- (void)prepareDebugLines;
- (void)flush;
- (void)gglLayoutWithContext:(struct LayoutContext *)arg1 overlayMaskCommandBuffer:(struct CommandBuffer *)arg2 traveledStrokeCommandBuffer:(struct CommandBuffer *)arg3 strokeCommandBuffer:(struct CommandBuffer *)arg4 traveledFillCommandBuffer:(struct CommandBuffer *)arg5 fillCommandBuffer:(struct CommandBuffer *)arg6 tiles:(id)arg7 layer:(unsigned char)arg8;
- (void)gglLayoutWithContext:(struct LayoutContext *)arg1 overlayMaskCommandBuffer:(struct CommandBuffer *)arg2 traveledStrokeCommandBuffer:(struct CommandBuffer *)arg3 strokeCommandBuffer:(struct CommandBuffer *)arg4 traveledFillCommandBuffer:(struct CommandBuffer *)arg5 fillCommandBuffer:(struct CommandBuffer *)arg6 tiles:(id)arg7;
- (void)setNeedsLayoutForPolyline:(id)arg1;
@property(readonly, nonatomic) VKPolylineOverlay *polyline;
- (void)dealloc;
- (void)_userDefaultsDidChange:(id)arg1;
- (id)initWithOverlay:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

