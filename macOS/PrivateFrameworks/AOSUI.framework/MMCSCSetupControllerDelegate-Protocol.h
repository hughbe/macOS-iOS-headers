//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMCSCSetupController;

@protocol MMCSCSetupControllerDelegate <NSObject>

@optional
- (void)mmCSCSetupControllerDidCancel:(MMCSCSetupController *)arg1;
- (void)mmCSCSetupControllerDidOptOut:(MMCSCSetupController *)arg1;
- (void)mmCSCSetupControllerDidEnd:(MMCSCSetupController *)arg1;
@end

