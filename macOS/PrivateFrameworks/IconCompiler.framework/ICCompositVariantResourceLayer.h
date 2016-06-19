//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICCompositVariantResourceLayerProtocol.h"

@class NSDictionary, NSString;

@interface ICCompositVariantResourceLayer : NSObject <ICCompositVariantResourceLayerProtocol>
{
    NSDictionary *_layerInfo;
    id <ICVariantResourceProviderProtocol> _resourceProvider;
}

@property __weak id <ICVariantResourceProviderProtocol> resourceProvider; // @synthesize resourceProvider=_resourceProvider;
@property(retain) NSDictionary *layerInfo; // @synthesize layerInfo=_layerInfo;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)applyToContext:(struct CGContext *)arg1 size:(unsigned long long)arg2 scale:(unsigned long long)arg3;
- (BOOL)isActiveAtSize:(long long)arg1;
- (BOOL)maskWithResource:(id)arg1 context:(struct CGContext *)arg2 size:(unsigned long long)arg3 scale:(unsigned long long)arg4;
- (BOOL)drawResource:(id)arg1 context:(struct CGContext *)arg2 size:(unsigned long long)arg3 scale:(unsigned long long)arg4;
- (void)drawText:(id)arg1 context:(struct CGContext *)arg2 size:(unsigned long long)arg3 scale:(unsigned long long)arg4;
- (struct CGRect)drawingRectForSize:(struct CGSize)arg1;
- (id)initWithLayerInfo:(id)arg1 resourceProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

