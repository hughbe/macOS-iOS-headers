//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdID/NSObject-Protocol.h>

@class AMSBagKeySet, NSString;

@protocol AMSBagConsumer <NSObject>
+ (NSString *)bagSubProfileVersion;
+ (NSString *)bagSubProfile;
+ (AMSBagKeySet *)bagKeySet;
@end

