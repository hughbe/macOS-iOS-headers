//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKModelObject.h>

#import "VKMapLayer.h"
#import "VKStyleManagerObserver.h"

@class NSArray, NSMutableArray, NSString, VKMapModel;

__attribute__((visibility("hidden")))
@interface VKAnnotationModel : VKModelObject <VKMapLayer, VKStyleManagerObserver>
{
    NSMutableArray *_annotationMarkers;
    CDStruct_b0bd1676 _styleTransitionState;
    VKMapModel *_mapModel;
    struct unique_ptr<AnnotationPipelineStates, std::__1::default_delete<AnnotationPipelineStates>> _annotationPipelineStates;
}

+ (BOOL)reloadOnStylesheetChange;
@property(nonatomic) VKMapModel *mapModel; // @synthesize mapModel=_mapModel;
@property(nonatomic) CDStruct_b0bd1676 styleTransitionState; // @synthesize styleTransitionState=_styleTransitionState;
@property(readonly, nonatomic) NSArray *annotationMarkers; // @synthesize annotationMarkers=_annotationMarkers;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stylesheetDidChange;
@property(readonly, nonatomic) shared_ptr_a3c46825 styleManager;
- (void)removeAnnotationMarker:(id)arg1;
- (void)addAnnotationMarker:(id)arg1;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)dealloc;
@property(readonly, nonatomic) BOOL needsLayout;
- (unsigned long long)mapLayerPosition;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2;
- (id)init;
@property(readonly, nonatomic) const struct AnnotationPipelineStates *pipelineStates;
- (BOOL)shouldLayoutWithoutStyleManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

