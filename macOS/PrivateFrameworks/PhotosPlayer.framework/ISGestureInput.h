//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosPlayer/ISInput.h>

@class NSGestureRecognizer;

@interface ISGestureInput : ISInput
{
    struct {
        char respondsToViewHostingGestureRecognizer;
        char respondsToDelegateForGestureRecognizer;
        char respondsToGestureRecognizerDidChange;
    } _delegateFlags;
    BOOL __needsUpdateGestureRecognizer;
    NSGestureRecognizer *_gestureRecognizer;
    id <ISGestureInputDelegate> _delegate;
}

@property(nonatomic, setter=_setNeedsUpdateGestureRecognizer:) BOOL _needsUpdateGestureRecognizer; // @synthesize _needsUpdateGestureRecognizer=__needsUpdateGestureRecognizer;
@property(nonatomic) __weak id <ISGestureInputDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, setter=_setGestureRecognizer:) NSGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void).cxx_destruct;
- (void)gestureRecognizerDidChange;
- (void)gestureRecognizerViewDidChange;
- (id)newGestureRecognizer;
- (void)_updateGestureRecognizerIfNeeded;
- (void)invalidateGestureRecognizer;
- (void)cancelGestureRecognizer;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

