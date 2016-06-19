//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKModelObject.h>

#import "VKMapLayer.h"
#import "VKStyleManagerObserver.h"

@class NSString, VKMapModel;

__attribute__((visibility("hidden")))
@interface VKSkyModel : VKModelObject <VKMapLayer, VKStyleManagerObserver>
{
    float _skyStartOffset;
    Matrix_5173352a _fillColor;
    Matrix_5173352a _horizonColor;
    struct shared_ptr<ggl::ConstantDataTyped<ggl::Sky::Style>> _skyConstantData;
    struct shared_ptr<ggl::Sky::SkyPipelineSetup> _skyPipelineSetup;
    struct shared_ptr<ggl::Sky::SkyPipelineState> _skyPipelineState;
    struct shared_ptr<ggl::Sky::SkyMesh> _skyMesh;
    struct shared_ptr<ggl::IndexDataTyped<unsigned short>> _skyIndexData;
    struct shared_ptr<ggl::RenderState> _skyRenderState;
    struct RenderItem *_skyRenderItem;
    shared_ptr_696716c4 _fogViewConstantData;
    shared_ptr_c062e934 _fogConstantData;
    struct shared_ptr<ggl::Fog::FogPipelineState> _fogPipelineState;
    struct FogInfo _fogInfo;
    struct shared_ptr<ggl::PolygonBase::MeshMesh> _fogMesh;
    struct unique_ptr<ggl::Fog::FogPipelineSetup, std::__1::default_delete<ggl::Fog::FogPipelineSetup>> _fogPipelineSetup;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _fogRenderState;
    struct unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem>> _fogRenderItem;
    BOOL _needsNewStyle;
    _Bool _fogEnabled;
    VKMapModel *_mapModel;
}

+ (BOOL)reloadOnStylesheetChange;
@property(nonatomic) _Bool fogEnabled; // @synthesize fogEnabled=_fogEnabled;
@property(nonatomic) VKMapModel *mapModel; // @synthesize mapModel=_mapModel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)generateFogForScene:(id)arg1 context:(struct LayoutContext *)arg2 commandBuffer:(struct CommandBuffer *)arg3;
- (void)generateSkyForScene:(id)arg1 context:(struct LayoutContext *)arg2 commandBuffer:(struct CommandBuffer *)arg3;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)updateStyle;
- (void)stylesheetDidChange;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2;
@property(readonly, nonatomic) shared_ptr_a3c46825 styleManager;
- (unsigned long long)mapLayerPosition;
- (void)setHorizonColor:(Matrix_5173352a)arg1;
- (Matrix_5173352a)horizonColor;
- (void)setFillColor:(Matrix_5173352a)arg1;
- (Matrix_5173352a)fillColor;
- (BOOL)shouldLayoutWithoutStyleManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

