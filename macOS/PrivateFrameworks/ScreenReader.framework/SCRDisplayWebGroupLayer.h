//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class SCRCTargetSelectorTimer, SCRCThreadKey;

__attribute__((visibility("hidden")))
@interface SCRDisplayWebGroupLayer : CALayer
{
    struct CGRect _windowScreenBounds;
    struct CGRect _webGroup;
    BOOL _isDisplayed;
    SCRCThreadKey *_fadeThreadKey;
    SCRCTargetSelectorTimer *_fadeTimer;
}

- (void)_fadeDisplay;
- (void)clearWebGroup;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_popDisplay;
- (void)_animate;
- (void)displayWebGroup:(struct CGRect)arg1 option:(int)arg2;
- (void)setWindowScreenBounds:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

@end

