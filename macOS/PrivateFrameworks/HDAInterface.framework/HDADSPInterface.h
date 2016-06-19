//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HDAInterface/HDAInterface.h>

@interface HDADSPInterface : HDAInterface
{
    _Bool mInput;
}

- (int)bypass:(unsigned int)arg1:(_Bool)arg2;
- (int)setParameter:(unsigned int)arg1:(unsigned long long)arg2:(unsigned long long)arg3;
- (int)findFunctionNumber:(_Bool)arg1 name:(const char *)arg2 number:(unsigned int *)arg3;
- (int)getNumInputChannels:(unsigned long long *)arg1;
- (int)getNumOutputChannels:(unsigned long long *)arg1;
- (int)getOutputMute:(unsigned long long *)arg1 Ch2:(unsigned long long *)arg2 Ch3:(unsigned long long *)arg3 Ch4:(unsigned long long *)arg4 Ch5:(unsigned long long *)arg5 Ch6:(unsigned long long *)arg6;
- (int)setOutputMute:(_Bool)arg1 Ch2:(_Bool)arg2 Ch3:(_Bool)arg3 Ch4:(_Bool)arg4 Ch5:(_Bool)arg5 Ch6:(_Bool)arg6;
- (int)setupLineOutDSPForMeasurement:(_Bool)arg1 verbose:(_Bool)arg2;
- (int)setupLineInDSPForMeasurement:(_Bool)arg1 verbose:(_Bool)arg2;
- (int)setupSpeakerDSPForMeasurement:(_Bool)arg1 bypass_nonlinear:(_Bool)arg2 verbose:(_Bool)arg3;
- (int)setupMicrophoneDSPForMeasurement:(_Bool)arg1 verbose:(_Bool)arg2;
- (int)getCoefficientsWithIndex:(unsigned int)arg1:(unsigned int)arg2:(void *)arg3:(void *)arg4;
- (int)getCoefficients:(unsigned int)arg1:(void *)arg2:(void *)arg3;
- (int)getFunctionName:(unsigned long long)arg1:(void *)arg2:(void *)arg3;
- (int)getNumberOfInstantiatedFunctions:(unsigned long long *)arg1;
- (int)getNumParameters:(unsigned int)arg1:(unsigned long long *)arg2;
- (int)getParameter:(unsigned int)arg1:(unsigned long long)arg2:(unsigned long long *)arg3;
- (void)dealloc;
- (id)initWithService:(int)arg1;
- (id)init:(_Bool)arg1;
- (id)initPrivate:(struct __CFString *)arg1;

@end

