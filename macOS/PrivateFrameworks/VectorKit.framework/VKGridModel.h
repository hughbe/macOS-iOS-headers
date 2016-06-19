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
@interface VKGridModel : VKModelObject <VKMapLayer, VKStyleManagerObserver>
{
    VKMapModel *_mapModel;
    BOOL _simpleGridEnabled;
    unsigned char _renderPass;
    double _gridMix;
    Matrix_5173352a _fillColor;
    Matrix_5173352a _lineColor;
    shared_ptr_696716c4 _viewConstantData;
    struct shared_ptr<ggl::ConstantDataTyped<ggl::GridBase::GridView>> _baseConstantData;
    struct shared_ptr<ggl::ConstantDataTyped<ggl::SimpleGrid::Style>> _simpleConstantData;
    struct shared_ptr<ggl::ConstantDataTyped<ggl::Grid::Style>> _constantData;
    struct shared_ptr<ggl::Grid::GridPipelineState> _pipelineState;
    struct unique_ptr<ggl::Grid::GridPipelineSetup, std::__1::default_delete<ggl::Grid::GridPipelineSetup>> _pipelineSetup;
    struct shared_ptr<ggl::SimpleGrid::GridPipelineState> _simplePipelineState;
    struct unique_ptr<ggl::SimpleGrid::GridPipelineSetup, std::__1::default_delete<ggl::SimpleGrid::GridPipelineSetup>> _simplePipelineSetup;
    struct shared_ptr<ggl::GridBase::GridMesh> _gridMesh;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _gridRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _simpleGridRenderState;
    struct RenderItem *_gridRenderItem;
    struct RenderItem *_simpleGridRenderItem;
    BOOL _needsUpdatedColor;
}

+ (BOOL)reloadOnStylesheetChange;
@property(nonatomic) unsigned char renderPass; // @synthesize renderPass=_renderPass;
@property(readonly, nonatomic) Matrix_5173352a fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) VKMapModel *mapModel; // @synthesize mapModel=_mapModel;
@property(nonatomic) BOOL simpleGridEnabled; // @synthesize simpleGridEnabled=_simpleGridEnabled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2;
- (void)stylesheetDoneChanging;
- (void)stylesheetDidChange;
- (void)updateGridColor;
- (void)setNeedsUpdatedGridColor;
@property(readonly, nonatomic) shared_ptr_a3c46825 styleManager;
- (unsigned long long)mapLayerPosition;
- (BOOL)shouldLayoutWithoutStyleManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

