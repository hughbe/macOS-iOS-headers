//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNObservable, NSString;

@protocol CNMCProfileConnection <NSObject>
- (BOOL)communicationServiceRulesExistForBundleID:(NSString *)arg1 forCommunicationServiceType:(NSString *)arg2;
- (NSString *)defaultAppBundleIDForCommunicationServiceType:(NSString *)arg1 forAccountWithIdentifier:(NSString *)arg2;
- (CNObservable *)observableForManagedConfigChanged;
@end

