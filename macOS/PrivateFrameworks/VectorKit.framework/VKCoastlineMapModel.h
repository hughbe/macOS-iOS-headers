//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKVectorMapModel.h>

__attribute__((visibility("hidden")))
@interface VKCoastlineMapModel : VKVectorMapModel
{
    struct unique_ptr<ggl::FragmentedPool<ggl::GlowAlpha::MeshPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::GlowAlpha::MeshPipelineSetup>>> _glowAlphaPipelineSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::Glow::MeshPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Glow::MeshPipelineSetup>>> _glowPipelineSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonFill::CompressedMeshPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonFill::CompressedMeshPipelineSetup>>> _coastlineStencilPipelineSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonShadowedStroke::ShadowPathPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonShadowedStroke::ShadowPathPipelineSetup>>> _coastlinePipelineSetupPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _coastlineStencilRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _stencilInvertRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _stencilWaterEraseRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _coastlineRenderStateNoStencil;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _coastlineRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _coastlineGlowAlphaRenderStateFront;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _coastlineGlowRenderStateFront;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _coastlineGlowAlphaRenderStateBack;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _coastlineGlowRenderStateBack;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem>>> _coastlineStencilRenderItemPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem>>> _coastlineRenderItemPool;
    struct unique_ptr<ggl::PolygonFill::MeshPipelineSetup, std::__1::default_delete<ggl::PolygonFill::MeshPipelineSetup>> _stencilInvertPipelineSetup;
    struct shared_ptr<ggl::GlowAlpha::MeshPipelineState> _glowAlphaPipelineState;
    struct shared_ptr<ggl::Glow::MeshPipelineState> _glowPipelineState;
    struct shared_ptr<ggl::PolygonFill::MeshPipelineState> _stencilFillPipelineState;
    struct shared_ptr<ggl::PolygonFill::CompressedMeshPipelineState> _stencilFillCompressedPipelineState;
    struct shared_ptr<ggl::PolygonShadowedStroke::ShadowPathPipelineState> _polygonShadowedStrokePipelineState;
    struct unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem>> _stencilInvertRenderItem;
    struct unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem>> _stencilEraseWaterRenderItem;
    vector_87190c80 _coastlineStencilItems;
    struct ClearItem *_clearItem;
    int _coastlineSourceTileZtoStencilOffset;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)generateCoastlineRenderItemsWithContext:(struct LayoutContext *)arg1 commandBuffer:(struct CommandBuffer *)arg2;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (const struct FeatureAttributeSet *)waterFeatureAttributes;
- (void)resetPools;
- (void)flushPools;
- (void)stylesheetDidChange;
- (void)didReceiveMemoryWarning:(BOOL)arg1;
- (unsigned long long)mapLayerPosition;
- (void)reserveStencilRangeForScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2;

@end

