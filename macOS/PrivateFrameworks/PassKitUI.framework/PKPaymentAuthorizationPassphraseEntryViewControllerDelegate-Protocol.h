//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSString, PKPaymentAuthorizationPassphraseEntryViewController;

@protocol PKPaymentAuthorizationPassphraseEntryViewControllerDelegate <NSObject>
- (void)paymentAuthorizationPassphraseEntryViewController:(PKPaymentAuthorizationPassphraseEntryViewController *)arg1 didEnterPassphrase:(NSString *)arg2;
- (void)paymentAuthorizationPassphraseEntryViewControllerDidCancel:(PKPaymentAuthorizationPassphraseEntryViewController *)arg1;
@end

