//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFNeXTStore.h>

@class MFMailAccount;

@interface MFParentalControlStore : MFNeXTStore
{
}

- (void)saveChanges;
- (void)setParentalControlMessageState:(long long)arg1 forMessages:(id)arg2;
- (void)setParentalControlMessageState:(long long)arg1 forMessage:(id)arg2;
@property(readonly, nonatomic) MFMailAccount *realAccount;
- (id)_defaultRouterDestination;
- (BOOL)shouldCallCompactWhenClosing;

@end

