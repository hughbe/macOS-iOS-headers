//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/GCControllerElement.h>

@class GCControllerButtonInput;

@interface GCControllerAxisInput : GCControllerElement
{
    BOOL _flipped;
    float _value;
    CDUnknownBlockType _valueChangedHandler;
    GCControllerButtonInput *_positive;
    GCControllerButtonInput *_negative;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isFlipped) BOOL flipped; // @synthesize flipped=_flipped;
@property(retain, nonatomic) GCControllerButtonInput *negative; // @synthesize negative=_negative;
@property(retain, nonatomic) GCControllerButtonInput *positive; // @synthesize positive=_positive;
@property(nonatomic) float value; // @synthesize value=_value;
@property(copy, nonatomic) CDUnknownBlockType valueChangedHandler; // @synthesize valueChangedHandler=_valueChangedHandler;
- (int)getAndResetTimesPressed;
- (BOOL)_setValue:(float)arg1 queue:(id)arg2;
- (BOOL)_setValue:(float)arg1;
- (BOOL)isAnalog;
- (id)description;
- (id)initWithCollection:(id)arg1 flipped:(BOOL)arg2;

@end

