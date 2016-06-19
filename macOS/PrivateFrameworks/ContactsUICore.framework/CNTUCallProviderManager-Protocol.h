//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNObservable, NSArray, NSString;

@protocol CNTUCallProviderManager <NSObject>
- (id <CNTUCallProvider>)thirdPartyCallProviderWithBundleIdentifier:(NSString *)arg1;
- (NSArray *)thirdPartyCallProvidersForActionType:(NSString *)arg1;
- (CNObservable *)observableForCallProvidersChangedWithSchedulerProvider:(id <CNSchedulerProvider>)arg1;
@end

