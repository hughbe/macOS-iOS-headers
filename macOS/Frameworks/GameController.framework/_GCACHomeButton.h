//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/GCControllerButtonInput.h>

@protocol _GCACHomeButtonDelegate;

@interface _GCACHomeButton : GCControllerButtonInput
{
    id <_GCACHomeButtonDelegate> _delegate;
    BOOL needsReset;
}

- (void).cxx_destruct;
- (BOOL)_setValue:(float)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

