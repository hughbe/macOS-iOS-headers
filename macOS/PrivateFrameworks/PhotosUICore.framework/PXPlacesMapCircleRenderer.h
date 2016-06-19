//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXPlacesMapAnnotationRenderer.h"

@class NSString;

@interface PXPlacesMapCircleRenderer : NSObject <PXPlacesMapAnnotationRenderer>
{
    id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
}

@property(nonatomic) __weak id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; // @synthesize pipelineComponentProvider;
- (void).cxx_destruct;
- (void)reset;
- (id)viewForAnnotation:(id)arg1 andMapView:(id)arg2;
- (id)annotationForGeotaggables:(id)arg1 initialCoordinate:(struct CLLocationCoordinate2D)arg2;
- (BOOL)supportsMoveAnimations;
@property(readonly) struct NSEdgeInsets minimumEdgeInsets;
- (long long)annotationType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

