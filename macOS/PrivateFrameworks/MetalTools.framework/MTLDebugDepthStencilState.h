//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalTools/MTLToolsDepthStencilState.h>

@class MTLDepthStencilDescriptor;

@interface MTLDebugDepthStencilState : MTLToolsDepthStencilState
{
    MTLDepthStencilDescriptor *_descriptor;
}

@property(readonly, nonatomic) MTLDepthStencilDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBaseDepthStencilState:(id)arg1 device:(id)arg2 descriptor:(id)arg3;

@end

