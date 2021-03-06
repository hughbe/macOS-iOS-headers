//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProVideo/FxColorGamutAPI-Protocol.h>
#import <ProVideo/PROAPIObject-Protocol.h>

@class NSString;

@interface OZFxPlugColorGamutHandler : NSObject <PROAPIObject, FxColorGamutAPI>
{
    struct OZFxPlugSharedBase *sharedBase;
}

- (BOOL)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (unsigned long long)colorPrimaries;
- (id)colorMatrixFromYCbCrToDesiredRGB;
- (id)colorMatrixFromDesiredRGBToYCbCr;
- (id)colorMatrixFromYCbCrToDesiredRGBAtTime:(CDUnion_baaf6063)arg1;
- (id)colorMatrixFromDesiredRGBToYCbCrAtTime:(CDUnion_baaf6063)arg1;
- (id)pcFloat33MatrixToFxMatrix44:(const float *)arg1;
- (id)initWithPlugin:(struct OZFxPlugSharedBase *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

