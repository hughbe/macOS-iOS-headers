//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BridgeOSInstall/BOSSUCOperation.h>

@interface BOSSUCPreflightOperation : BOSSUCOperation
{
}

- (void)bridgeOSSoftwareUpdateController:(id)arg1 preflightComplete:(id)arg2;
- (void)bridgeOSSoftwareUpdateController:(id)arg1 preflightProgress:(double)arg2;
- (void)startControllerOperation;
- (id)description;
- (int)controllerEndingState;
- (int)controllerOperation;
- (id)initWithRequest:(id)arg1 controller:(id)arg2;

@end

