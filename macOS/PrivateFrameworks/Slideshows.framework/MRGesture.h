//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRHitBlob;

@interface MRGesture : NSObject
{
    MRHitBlob *_hitBlob;
    double _linearScaleAtStart;
    double _slideRotationAtStart;
    double _slideScaleAtStart;
    double _currentRotation;
    double _currentScale;
    struct CGPoint _locationInViewAtStart;
    struct CGPoint _locationInSlideAtStart;
    struct CGPoint _slideCenterAtStart;
    struct CGPoint _currentTranslation;
}

@property double currentScale; // @synthesize currentScale=_currentScale;
@property double currentRotation; // @synthesize currentRotation=_currentRotation;
@property struct CGPoint currentTranslation; // @synthesize currentTranslation=_currentTranslation;
@property double slideScaleAtStart; // @synthesize slideScaleAtStart=_slideScaleAtStart;
@property double slideRotationAtStart; // @synthesize slideRotationAtStart=_slideRotationAtStart;
@property struct CGPoint slideCenterAtStart; // @synthesize slideCenterAtStart=_slideCenterAtStart;
@property double linearScaleAtStart; // @synthesize linearScaleAtStart=_linearScaleAtStart;
@property struct CGPoint locationInSlideAtStart; // @synthesize locationInSlideAtStart=_locationInSlideAtStart;
@property struct CGPoint locationInViewAtStart; // @synthesize locationInViewAtStart=_locationInViewAtStart;
@property(retain) MRHitBlob *hitBlob; // @synthesize hitBlob=_hitBlob;
- (void)dealloc;
- (id)initWithHitBlob:(id)arg1;

@end

