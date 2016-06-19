//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface VCPDCNFDOverfeatNetwork : NSObject
{
    struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net>>> gpu_nets;
    struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net>>> ecpu_nets;
    struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long>>> net_scales;
    struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long>>> full_scales;
    struct vector<double, std::__1::allocator<double>> scalesc;
    struct vector<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>>> resizers_for_batching;
    int n_resizers_for_batching;
    struct vector<std::__1::shared_ptr<Espresso::blob<float, 3>>, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3>>>> probBlobs;
    struct vector<std::__1::shared_ptr<Espresso::blob<float, 3>>, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3>>>> boxBlobs;
    NSMutableDictionary *_errorForLayers;
    struct pair<unsigned long long, unsigned long long> cropDims;
    struct CGColorSpace *colorSpace;
    struct net_strides_configuration strideConf;
    int retile_stride;
    int retile_tile_sz;
    struct vector<int, std::__1::allocator<int>> retile_n_outputs_v;
    int tile_w_1;
    int tile_h_1;
    BOOL _useGPUScaler;
    int _scalingMode;
    float _maxScale;
    int _scaleConfig;
    int _mode;
    int _cpin;
    NSString *_basename;
    NSString *_weights;
}

@property(nonatomic) int cpin; // @synthesize cpin=_cpin;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) int scaleConfig; // @synthesize scaleConfig=_scaleConfig;
@property(retain, nonatomic) NSString *weights; // @synthesize weights=_weights;
@property(retain, nonatomic) NSString *basename; // @synthesize basename=_basename;
@property(nonatomic) float maxScale; // @synthesize maxScale=_maxScale;
@property(nonatomic) int scalingMode; // @synthesize scalingMode=_scalingMode;
@property(nonatomic) BOOL useGPUScaler; // @synthesize useGPUScaler=_useGPUScaler;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)errorForLayers;
- (BOOL)needRetiling:(int)arg1;
- (void)storeDataForPruning:(shared_ptr_86ba3c2c)arg1 prob:(float)arg2;
- (void)forward_cpu_network_at_index:(int)arg1 pyr:(const shared_ptr_7fb9d9f9 *)arg2;
- (void)retile_and_forward_espresso_network_at_index:(int)arg1 net:(const shared_ptr_a302c975 *)arg2 pyr:(const shared_ptr_7fb9d9f9 *)arg3;
- (void)setup_retile;
- (int)default_retile_outputs;
- (void)processPyramid:(shared_ptr_7fb9d9f9)arg1 gpu_resizer:(struct fast_pyramid_resizer_metal *)arg2;
- (void)processPyramid:(shared_ptr_7fb9d9f9)arg1;
- (void)processBlobNoRotation:(const shared_ptr_5e9c0076 *)arg1 tex:(id)arg2 doBGRA2RGBA:(BOOL)arg3;
- (void)processBlob:(const shared_ptr_5e9c0076 *)arg1 tex:(id)arg2;
- (void)generatePyramid:(const shared_ptr_5e9c0076 *)arg1 tex:(id)arg2;
- (void)processCGImageBatch:(CDUnknownBlockType)arg1 block:(CDUnknownBlockType)arg2;
- (void)processCGImage:(struct CGImage *)arg1;
- (void)processCIImage:(id)arg1;
- (void)buildPyramid:(struct CGImage *)arg1 ci:(id)arg2 resizer:(shared_ptr_7fb9d9f9)arg3;
- (shared_ptr_dc6ac1b7)boxBlobForScale:(int)arg1;
- (shared_ptr_dc6ac1b7)probBlobForScale:(int)arg1;
- (int)getNumScales;
- (void)retryLoadingCaffeNet:(shared_ptr_a302c975 *)arg1 name:(id)arg2 weights:(id)arg3 platform:(int)arg4 cp:(int)arg5;
- (void)autoSetupNetBaseName:(id)arg1 weights:(id)arg2 scaleConfig:(int)arg3 setupMode:(int)arg4 computePath:(int)arg5 autoAspectRatio:(float)arg6 forceReset:(BOOL)arg7;
- (void)reset;
- (void)autoResizeForAspectRatio:(float)arg1;
- (struct net_strides_configuration)strideConfiguration;
- (double)getScale:(int)arg1;
- (void)dealloc;
- (id)init;
- (shared_ptr_a302c975)cpu_net:(int)arg1;
- (shared_ptr_a302c975)gpu_net:(int)arg1;
- (int)resizerCount;
- (shared_ptr_7fb9d9f9)resizerAtIndex:(int)arg1;

@end

