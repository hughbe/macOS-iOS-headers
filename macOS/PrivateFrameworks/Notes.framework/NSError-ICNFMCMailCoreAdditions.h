//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (ICNFMCMailCoreAdditions)
@property(readonly, copy, nonatomic) NSString *ic_shortDescription;
@property(readonly, copy, nonatomic) NSString *ic_moreInfo;
@property(readonly, nonatomic) BOOL ic_isSSLCertificateError;
@property(readonly, nonatomic) BOOL ic_isAuthenticationError;
- (BOOL)shouldBeReportedToUser;
@end

