//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKImageCanvas.h>

#import "MDSnapshotMap.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKGlobeImageCanvas : VKImageCanvas <MDSnapshotMap>
{
    struct GlobeView {
        CDUnknownFunctionPointerType *;
        struct AnchorManagerPrivate *;
        struct Scene *;
        struct Context *;
        struct DtmCacheNode *;
        struct DtmRequestManager *;
        struct FreezeViewNode *;
        struct Projection;
        struct FrameLatLon;
        _Bool;
        basic_string_805fe43b;
        basic_string_805fe43b;
        struct vector<altitude::TileBound, std::__1::allocator<altitude::TileBound>>;
        struct vector<altitude::SimpleTileKey, std::__1::allocator<altitude::SimpleTileKey>>;
        _Bool;
        unsigned int;
        unsigned int;
        unsigned int;
        unsigned int;
        struct VKClassicGlobeCanvas *;
        _Bool;
        _Bool;
        int;
        struct AnimationManager;
        struct Timer;
        double;
        _Bool;
        double;
        double;
        double;
        struct FrameLatLon;
        struct C3mmRequestManager *;
        struct RenderableGroup *;
        unsigned int;
        double;
        _Bool;
        _Bool;
        struct LabelDataManagerPrivate *;
        _Bool;
        _Bool;
        _Bool;
        _Bool;
        struct RouteLineManager *;
        struct GlobeCleanupLoader *;
        struct CompleteGlobeTileSetCullingGraph *;
        struct CompleteGlobeTileSetLoader *;
        struct TileSetNode *;
        struct GlobeTileRenderManager *;
        struct CullingNode *;
        struct EarthAdjustedViewNode *;
        struct UserViewNode *;
        struct View *;
        struct BasicViewNode *;
        struct GlobeMainViewNode *;
        struct C3bRequestManager *;
        float;
        _Bool;
        struct shared_ptr<bool>;
        struct HeightRequestManager *;
        struct map<gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d>, altitude::GlobeView::LessVector2i, std::__1::allocator<std::__1::pair<const gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d>>>>;
        struct Mutex;
        struct shared_ptr<altitude::Stylesheet>;
        struct FlyoverTour *;
        _Bool;
        struct TriggerManager *;
        struct Viewport;
        struct AnimationReferenceTimer;
        _Bool;
        struct set<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *>>;
        struct GeoServicesLoader *;
        struct ManifestManager *;
        struct GlobeDispatch *;
    } *_globeView;
    struct unique_ptr<md::GlobeAdapter, std::__1::default_delete<md::GlobeAdapter>> _globeAdapter;
    struct shared_ptr<md::VKGlobeStylesheet> _globeStyleSheet;
    BOOL _notifyFullyLoaded;
    BOOL _notifyFullyDrawn;
    struct _MDRenderTargetRef _renderTargetRef;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isShowingNoDataPlaceholders;
@property(nonatomic) BOOL showsBuildings;
@property(nonatomic) BOOL showsPointsOfInterest;
@property(nonatomic) unsigned char labelScaleFactor;
@property(nonatomic) BOOL localizeLabels;
- (void)cancelTileRequests;
- (void)globeDidBecomeFullyDrawn;
- (void)globeWillBecomeFullyDrawn;
- (void)_updateViewTransform;
- (void)_updateCameraFromGlobe;
- (void)_updateViewport;
- (void)didLayout;
- (void)update;
- (void)setMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)setMapType:(long long)arg1;
- (void)dealloc;
- (void)removeRenderer;
- (id)initWithTarget:(id)arg1 device:(struct Device *)arg2 homeQueue:(id)arg3 renderer:(struct Renderer *)arg4 manifestConfiguration:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

