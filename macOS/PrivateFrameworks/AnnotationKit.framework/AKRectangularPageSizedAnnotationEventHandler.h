//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKRectangularAnnotationEventHandler.h>

@interface AKRectangularPageSizedAnnotationEventHandler : AKRectangularAnnotationEventHandler
{
}

- (struct CGRect)_validateAnnotationRectForDrag:(struct CGRect)arg1;
- (struct CGRect)_validateAnnotationRectForResize:(struct CGRect)arg1;
- (void)updateModelWithCurrentPoint:(struct CGPoint)arg1;
- (void)getInitialDraggedPoint:(struct CGPoint *)arg1 otherPoint:(struct CGPoint *)arg2 center:(struct CGPoint *)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;

@end

