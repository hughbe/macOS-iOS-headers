//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class NSData, NSDictionary, NSError, NSNumber, NSString, NSUUID, WPPairing;

@protocol WPPairingDelegate <NSObject>
- (void)pairingDidUpdateState:(WPPairing *)arg1;

@optional
- (void)pairing:(WPPairing *)arg1 failedToStartScanningWithError:(NSError *)arg2;
- (void)pairingStoppedScanning:(WPPairing *)arg1;
- (void)pairingStartedScanning:(WPPairing *)arg1;
- (void)pairing:(WPPairing *)arg1 foundDevice:(NSUUID *)arg2 payload:(NSData *)arg3 rssi:(NSNumber *)arg4 peerInfo:(NSDictionary *)arg5;
- (BOOL)pairing:(WPPairing *)arg1 foundDevice:(NSString *)arg2 payload:(NSData *)arg3 rssi:(NSNumber *)arg4;
@end

