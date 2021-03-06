/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugDepthStencilState : MTLToolsDepthStencilState {
    unsigned char  _attachmentWriteMask;
    MTLDepthStencilDescriptor * _descriptor;
}

@property (nonatomic, readonly) unsigned char attachmentWriteMask;
@property (nonatomic, readonly) MTLDepthStencilDescriptor *descriptor;

+ (id)newDepthStencilStateWithBaseObject:(id)arg1 device:(id)arg2 descriptor:(id)arg3;

- (id)_initWithBaseDepthStencilState:(id)arg1 device:(id)arg2 descriptor:(id)arg3;
- (unsigned char)attachmentWriteMask;
- (void)dealloc;
- (id)description;
- (id)descriptor;
- (id)formattedDescription:(unsigned long long)arg1;

@end
