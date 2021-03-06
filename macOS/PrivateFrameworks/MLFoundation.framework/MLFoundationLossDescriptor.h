//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLFoundationLossDescriptor : NSObject
{
    int _lossType;
    int _reductionType;
    float _weight;
    float _labelSmoothing;
    float _epsilon;
    float _delta;
    unsigned long long _numberOfClasses;
}

+ (id)lossDescriptorWithType:(int)arg1 reduceType:(int)arg2 weight:(float)arg3 labelSmoothing:(float)arg4 numberOfClasses:(unsigned long long)arg5 epsilon:(float)arg6 delta:(float)arg7;
+ (id)lossDescriptorWithType:(int)arg1 reduceType:(int)arg2 weight:(float)arg3 labelSmoothing:(float)arg4 numberOfClasses:(unsigned long long)arg5;
+ (id)lossDescriptorWithType:(int)arg1 reduceType:(int)arg2;
@property(readonly, nonatomic) float delta; // @synthesize delta=_delta;
@property(readonly, nonatomic) float epsilon; // @synthesize epsilon=_epsilon;
@property(readonly, nonatomic) unsigned long long numberOfClasses; // @synthesize numberOfClasses=_numberOfClasses;
@property(readonly, nonatomic) float labelSmoothing; // @synthesize labelSmoothing=_labelSmoothing;
@property(readonly, nonatomic) float weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) int reductionType; // @synthesize reductionType=_reductionType;
@property(readonly, nonatomic) int lossType; // @synthesize lossType=_lossType;
- (id)description;
- (id)initWithLossDescriptorWithType:(int)arg1 reduceType:(int)arg2 weight:(float)arg3 labelSmoothing:(float)arg4 numberOfClasses:(unsigned long long)arg5 epsilon:(float)arg6 delta:(float)arg7;
- (id)initWithLossDescriptorWithType:(int)arg1 reduceType:(int)arg2;

@end

