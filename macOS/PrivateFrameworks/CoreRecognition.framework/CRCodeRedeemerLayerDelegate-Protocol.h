//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreRecognition/NSObject-Protocol.h>

@class CRCodeRedeemerLayer, NSArray, NSError;

@protocol CRCodeRedeemerLayerDelegate <NSObject>
- (void)codeRedeemerLayerCameraDidStart:(CRCodeRedeemerLayer *)arg1;
- (void)codeRedeemerLayerDidFindBox:(CRCodeRedeemerLayer *)arg1;
- (void)codeRedeemerLayerDidFadeStatus:(CRCodeRedeemerLayer *)arg1;
- (void)codeRedeemerLayerWillFadeStatus:(CRCodeRedeemerLayer *)arg1;
- (void)codeRedeemerLayer:(CRCodeRedeemerLayer *)arg1 didFailWithError:(NSError *)arg2;
- (void)codeRedeemerLayer:(CRCodeRedeemerLayer *)arg1 didSucceedWithCodes:(NSArray *)arg2;

@optional
- (void)codeRedeemerLayer:(CRCodeRedeemerLayer *)arg1 willRecognizeCodes:(NSArray *)arg2;
@end

