//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKMapView.h"

@interface PXPlacesMapView : MKMapView
{
    BOOL _userInteractionEnabled;
}

+ (CDStruct_02837cd9)canonicalMapRect:(CDStruct_02837cd9)arg1;
+ (CDStruct_02837cd9)mapRectForNearbyQueriesFromRect:(CDStruct_02837cd9)arg1 atScale:(double)arg2 targetViewSize:(struct CGSize)arg3;
+ (CDStruct_02837cd9)MKMapRectForCoordinateRegion:(CDStruct_26e8d939)arg1;
@property BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
- (id)hitTest:(struct CGPoint)arg1;
- (void)deselectAllAnnotationsAnimated:(BOOL)arg1;
- (double)zoomLevel;
- (id)currentViewPortWithThumbnailOverscan;
- (id)currentViewPort;
- (void)_commonInit;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

