//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKMapViewDelegate.h"
#import "NSGestureRecognizerDelegate.h"

@class FMAnnotationView, FMFWildcardGestureRecognizer, MKMapView, NSString;

__attribute__((visibility("hidden")))
@interface FMFMapViewDelegateInternal : NSObject <NSGestureRecognizerDelegate, MKMapViewDelegate>
{
    BOOL _isMapCenteringDisabled;
    BOOL _pressureActionEnabled;
    BOOL _respondingToUserTouch;
    id <FMFMapViewDelegateInternalDelegate> _delegate;
    FMFWildcardGestureRecognizer *_gr;
    FMAnnotationView *_selectedAnnotationView;
    MKMapView *_mapView;
    struct CLLocationCoordinate2D _lastUserLocationCoordinate;
}

@property(nonatomic) struct CLLocationCoordinate2D lastUserLocationCoordinate; // @synthesize lastUserLocationCoordinate=_lastUserLocationCoordinate;
@property(nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) FMAnnotationView *selectedAnnotationView; // @synthesize selectedAnnotationView=_selectedAnnotationView;
@property(retain, nonatomic) FMFWildcardGestureRecognizer *gr; // @synthesize gr=_gr;
@property(nonatomic) BOOL respondingToUserTouch; // @synthesize respondingToUserTouch=_respondingToUserTouch;
@property __weak id <FMFMapViewDelegateInternalDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL pressureActionEnabled; // @synthesize pressureActionEnabled=_pressureActionEnabled;
@property(nonatomic) BOOL isMapCenteringDisabled; // @synthesize isMapCenteringDisabled=_isMapCenteringDisabled;
- (void).cxx_destruct;
- (BOOL)regionIsValid:(CDStruct_26e8d939)arg1;
- (struct NSEdgeInsets)edgeInsetsWithMinApplied:(struct NSEdgeInsets)arg1;
- (CDStruct_90e2a262)mapRectMakeWithRadialDistanceForCoordinate:(struct CLLocationCoordinate2D)arg1 andRadius:(double)arg2;
- (void)zoomToFitAnnotationsForMapView:(id)arg1 includeMe:(BOOL)arg2 disallowAnimation:(BOOL)arg3;
- (void)zoomToFitLocation:(id)arg1 forMapView:(id)arg2;
- (void)_moveCenterByOffset:(struct CGPoint)arg1 from:(struct CLLocationCoordinate2D)arg2 mapView:(id)arg3;
- (void)slideAnnotation:(id)arg1 intoViewIfNeededForMapView:(id)arg2;
- (void)updateOverlaysForAnnotationMove:(id)arg1 mapView:(id)arg2;
- (id)accuracyCircleForLocation:(id)arg1;
- (id)fmfOverlayColorSatellite;
- (id)fmfOverlayColor;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)willRemoveAnnotation:(id)arg1;
- (void)selectAnnotation:(id)arg1;
- (BOOL)canSelectAnnotation:(id)arg1;
- (void)endTouches;
- (void)handleGesture:(id)arg1;
- (id)selectAnnotationViewUnderPoint:(struct CGPoint)arg1;
- (void)doubleClickGestureEnabled:(BOOL)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithDelegate:(id)arg1 mapView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

