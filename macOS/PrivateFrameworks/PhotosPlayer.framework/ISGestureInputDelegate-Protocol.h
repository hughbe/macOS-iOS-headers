//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISGestureInput, NSGestureRecognizer, NSView;

@protocol ISGestureInputDelegate <NSObject>

@optional
- (void)gestureInputGestureRecognizerDidChange:(ISGestureInput *)arg1;
- (id <NSGestureRecognizerDelegate>)gestureInput:(ISGestureInput *)arg1 delegateForGestureRecognizer:(NSGestureRecognizer *)arg2;
- (NSView *)gestureInput:(ISGestureInput *)arg1 viewHostingGestureRecognizer:(NSGestureRecognizer *)arg2;
@end

