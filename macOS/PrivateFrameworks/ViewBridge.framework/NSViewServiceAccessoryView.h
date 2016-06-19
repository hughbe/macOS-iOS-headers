//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSViewServiceMarshal;

@interface NSViewServiceAccessoryView : NSView
{
    NSViewServiceMarshal *_marshal;
    unsigned int _canBecomeKeyViewInProgress:1;
    double _disclosureAnimationDuration;
}

+ (double)disclosureAnimationDuration;
@property double disclosureAnimationDuration; // @synthesize disclosureAnimationDuration=_disclosureAnimationDuration;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGPoint)originRelativeToFrame;
- (void)viewDidMoveToWindow;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)canBecomeKeyView;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)keyEvent:(id)arg1 shouldClimbResponderChain:(CDUnknownBlockType)arg2;
- (id)accessibilityChildrenInNavigationOrder;
- (id)accessibilityChildren;
- (id)accessibilityChildren:(id)arg1;
- (void)disclose:(BOOL)arg1 withAnimation:(int)arg2;
- (void)refreshBitmap:(id)arg1;
- (void)setViewServiceMarshal:(id)arg1;
- (id)viewServiceMarshal;
- (id)initWithFrame:(struct CGRect)arg1;

@end

