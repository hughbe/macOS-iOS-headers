//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MLFoundation/MLFoundationComputeEngineControl-Protocol.h>
#import <MLFoundation/MLFoundationComputeEngineDispatch-Protocol.h>
#import <MLFoundation/MLFoundationLayerOperations-Protocol.h>
#import <MLFoundation/NSCopying-Protocol.h>

@class MLFoundationDeviceGPUHeapAllocator, NSArray, NSMutableArray, NSString;

@interface MLFoundationDeviceGPU : NSObject <MLFoundationComputeEngineDispatch, MLFoundationLayerOperations, NSCopying, MLFoundationComputeEngineControl>
{
    int _deviceType;
    NSArray *_deviceList;
    MLFoundationDeviceGPUHeapAllocator *_gpuHeapAllocator;
    double *_executionTimeInterval;
    NSArray *_gpuSharedEventList;
    unsigned long long *_currentEventValue;
    NSMutableArray *_gpuCommandQueueList;
    NSMutableArray *_gpuCommandBufferList;
    NSMutableArray *_gpuMPSCommandBufferList;
    NSMutableArray *_gpuWriteTensorKernelList;
}

+ (id)filteredGPUListIncludingNonLowPoweredBuiltin:(BOOL)arg1;
+ (unsigned long long)calculateImageSizeForTensor:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *gpuWriteTensorKernelList; // @synthesize gpuWriteTensorKernelList=_gpuWriteTensorKernelList;
@property(readonly, nonatomic) NSMutableArray *gpuMPSCommandBufferList; // @synthesize gpuMPSCommandBufferList=_gpuMPSCommandBufferList;
@property(readonly, nonatomic) NSMutableArray *gpuCommandBufferList; // @synthesize gpuCommandBufferList=_gpuCommandBufferList;
@property(readonly, nonatomic) NSMutableArray *gpuCommandQueueList; // @synthesize gpuCommandQueueList=_gpuCommandQueueList;
@property(readonly, nonatomic) unsigned long long *currentEventValue; // @synthesize currentEventValue=_currentEventValue;
@property(readonly, nonatomic) NSArray *gpuSharedEventList; // @synthesize gpuSharedEventList=_gpuSharedEventList;
@property(readonly, nonatomic) double *executionTimeInterval; // @synthesize executionTimeInterval=_executionTimeInterval;
@property(retain, nonatomic) MLFoundationDeviceGPUHeapAllocator *gpuHeapAllocator; // @synthesize gpuHeapAllocator=_gpuHeapAllocator;
@property(readonly, nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) NSArray *deviceList; // @synthesize deviceList=_deviceList;
- (void)partitionTensor:(id)arg1;
- (id)allocateDeviceMemoryForTensor:(id)arg1 device:(id)arg2 count:(unsigned long long)arg3;
- (unsigned long long)deviceMemorySizeForTensor:(id)arg1;
- (void)waitForAllDevicesExcludingDevice:(unsigned long long)arg1 eventValue:(unsigned long long)arg2;
- (void)waitForOthers;
- (void)signalAllDevicesExcludingDevice:(unsigned long long)arg1 eventValue:(unsigned long long)arg2;
- (void)signalNextEvent;
- (void)dispatchWriteTensor:(id)arg1 toDeviceIndex:(unsigned long long)arg2 sourceBuffer:(void *)arg3;
- (void)dispatchWriteTensor:(id)arg1 toDeviceIndex:(unsigned long long)arg2;
- (void)writeTensor:(id)arg1 toDeviceIndex:(unsigned long long)arg2 sourceBuffer:(void *)arg3;
- (void)writeTensor:(id)arg1 toDeviceIndex:(unsigned long long)arg2;
- (void)dispatchBroadcastTensor:(id)arg1;
- (void)broadcastTensor:(id)arg1 sourceBuffer:(void *)arg2 allocate:(BOOL)arg3;
- (void)broadcastTensor:(id)arg1 allocate:(BOOL)arg2;
- (void)broadcastTensor:(id)arg1;
- (void)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 targetBuffer:(void *)arg3;
- (id)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2;
- (void)deallocateDeviceMemoryForTensor:(id)arg1 device:(id)arg2;
- (void)deallocateDeviceMemoryForTensor:(id)arg1;
- (id)allocateDeviceMemoryForTensor:(id)arg1 device:(id)arg2;
- (void)allocateDeviceMemoryForTensor:(id)arg1;
- (void)deviceHeapAllocatorWithHeapSize:(unsigned long long)arg1;
- (void)commitAndWaitForCompletion:(CDUnknownBlockType)arg1;
- (void)commitAndWaitForCompletion:(CDUnknownBlockType)arg1 enableProfiling:(BOOL)arg2 graphExecutionTime:(id)arg3 graphResultTensor:(id)arg4;
- (void)commitWithCompletionHandler:(CDUnknownBlockType)arg1 enableProfiling:(BOOL)arg2 graphExecutionTime:(id)arg3 graphResultTensor:(id)arg4;
- (void)commitWithProfiling:(BOOL)arg1 graphExecutionTime:(id)arg2;
- (void)commitDeviceAtIndex:(unsigned long long)arg1;
- (void)allocateCommandBufferForDeviceAtIndex:(unsigned long long)arg1;
- (void)synchronizeTensor:(id)arg1;
- (unsigned long long)numberOfDevices;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithType:(int)arg1 gpuDeviceList:(id)arg2 gpuSharedEventList:(id)arg3 currentEventValue:(unsigned long long *)arg4 gpuCommandQueueList:(id)arg5 gpuCommandBufferList:(id)arg6 gpuMPSCommandBufferList:(id)arg7;
- (id)initWithDeviceList:(id)arg1;
- (id)initWithType:(int)arg1;
- (void)setOptimizerLearningRate:(id)arg1 learningRate:(float)arg2;
- (void)convertUpdatesToTensorDataForLayer:(id)arg1;
- (void)synchronizeUpdatesForLayer:(id)arg1;
- (void)updateBatchNormalizationLayer:(id)arg1 optimizer:(id)arg2;
- (void)updateFullyConnectedLayer:(id)arg1 optimizer:(id)arg2;
- (void)updateConvolutionLayer:(id)arg1 optimizer:(id)arg2;
- (void)incrementReadCountForGradientState:(id)arg1 increment:(long long)arg2;
- (void)incrementReadCountForTensorDeviceMemory:(id)arg1 increment:(long long)arg2;
- (void)transformRNNLayerTensor:(id)arg1 isSourceTensor:(BOOL)arg2;
- (void)dispatchRNNGradientLayer:(id)arg1 sourceGradientTensors:(id)arg2 resultGradientTensors:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5;
- (void)dispatchRNNForwardLayerWithStates:(id)arg1 sourceTensors:(id)arg2 resultTensors:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5;
- (void)dispatchForwardAndGradientLossLayerWithStates:(id)arg1 sourceTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultTensor:(id)arg6 resultGradientTensor:(id)arg7 resultTensorIsTemporary:(BOOL)arg8 resultTensorAllocate:(BOOL)arg9;
- (void)dispatchGradientLossLayerWithInitialGradientAndStates:(id)arg1 sourceGradientTensor:(id)arg2 labelsTensor:(id)arg3 weightsTensor:(id)arg4 initialGradientResultTensor:(id)arg5 resultGradientTensor:(id)arg6 resultTensorIsTemporary:(BOOL)arg7 resultTensorAllocate:(BOOL)arg8;
- (void)dispatchGradientLossLayerWithStates:(id)arg1 sourceGradientTensor:(id)arg2 labelsTensor:(id)arg3 weightsTensor:(id)arg4 resultGradientTensor:(id)arg5 resultTensorIsTemporary:(BOOL)arg6 resultTensorAllocate:(BOOL)arg7;
- (void)dispatchGradientBatchNormalizationLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5;
- (void)dispatchGradientLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 secondaryResultGradientTensor:(id)arg4 resultTensorIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6;
- (void)dispatchGradientLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5;
- (void)dispatchForwardLossLayerWithStates:(id)arg1 sourceTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultTensor:(id)arg6 resultTensorIsTemporary:(BOOL)arg7 resultTensorAllocate:(BOOL)arg8;
- (void)dispatchForwardLayerWithStates:(id)arg1 sourceTensor:(id)arg2 secondaryTensor:(id)arg3 resultTensor:(id)arg4 resultTensorIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6;
- (void)dispatchForwardLayerBatchNormalizationWithStates:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5;
- (void)dispatchForwardLayerWithStates:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5;
- (void)dispatchForwardLayer:(id)arg1 sourceTensor:(id)arg2 secondaryTensor:(id)arg3 resultTensor:(id)arg4 resultTensorIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6;
- (void)dispatchForwardLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5;
- (void)updateTensorAllocator:(BOOL)arg1 deviceOps:(id)arg2;
- (BOOL)compileLayerDeviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (void)fuseLayersForTrainingGraph:(id)arg1;
- (void)setPoolingLayerPaddingPolicy:(id)arg1 poolingDescriptor:(id)arg2 paddingPolicy:(int)arg3;
- (void)setPaddingPolicyForLayer:(id)arg1 paddingPolicy:(int)arg2;
- (id)softmaxLayerWithOperation:(int)arg1;
- (id)reshapeLayerWithShape:(id)arg1;
- (id)poolingLayerWithDescriptor:(id)arg1;
- (id)optimizerSGDWithDescriptor:(id)arg1 momentunScale:(float)arg2 useNestrovMomentum:(BOOL)arg3;
- (id)optimizerAdamWithDescriptor:(id)arg1 beta1:(double)arg2 beta2:(double)arg3 epsilon:(float)arg4 timeStep:(unsigned long long)arg5;
- (id)lstmLayerWithDescriptor:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 peepholeWeights:(id)arg4 biasTerms:(id)arg5 gateActivations:(id)arg6 outputResultActivation:(id)arg7;
- (id)neuronLayerWithDescriptor:(id)arg1;
- (id)lossYOLOLayerWithDescriptor:(id)arg1;
- (id)lossLayerWithDescriptor:(id)arg1;
- (id)imageReshapeWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 alignCorners:(BOOL)arg3;
- (id)paddingLayerWithDescriptor:(id)arg1;
- (id)fullyConnectedLayerWithDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3;
- (id)dropoutLayerWithRate:(float)arg1 seed:(unsigned long long)arg2;
- (id)convolutionTransposeLayerWithDescriptor:(id)arg1 weights:(id)arg2;
- (id)convolutionLayerWithDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3;
- (id)fusedBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg1 numOfFeatureChannels:(unsigned long long)arg2 mean:(id)arg3 variance:(id)arg4 beta:(id)arg5 gamma:(id)arg6 variance_epsilon:(float)arg7 momentum:(float)arg8;
- (id)batchNormalizationLayerWithChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 variance_epsilon:(float)arg6 momentum:(float)arg7;
- (id)arithmeticLayerWithOperation:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

