//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, VKLabelFeatureMarker;

__attribute__((visibility("hidden")))
@interface VKRoadLabelPickingResult : NSObject
{
    VKLabelFeatureMarker *_labelFeatureMarker;
}

@property(readonly, nonatomic) VKLabelFeatureMarker *labelFeatureMarker; // @synthesize labelFeatureMarker=_labelFeatureMarker;
- (id)description;
@property(readonly, nonatomic) struct CGVector direction;
@property(readonly, nonatomic) float closestApproach;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithLabelFeatureMarkerPtr:(const shared_ptr_27db7edb *)arg1;

@end

