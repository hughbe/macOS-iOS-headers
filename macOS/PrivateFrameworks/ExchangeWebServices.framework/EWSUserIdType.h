//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class NSString;

@interface EWSUserIdType : NSObject <XSDefinitionProvider>
{
    NSString *_SID;
    NSString *_PrimarySmtpAddress;
    NSString *_DisplayName;
    long long _DistinguishedUser;
}

+ (id)definition;
- (void).cxx_destruct;
@property(nonatomic) long long DistinguishedUser; // @synthesize DistinguishedUser=_DistinguishedUser;
@property(copy, nonatomic) NSString *DisplayName; // @synthesize DisplayName=_DisplayName;
@property(copy, nonatomic) NSString *PrimarySmtpAddress; // @synthesize PrimarySmtpAddress=_PrimarySmtpAddress;
@property(copy, nonatomic) NSString *SID; // @synthesize SID=_SID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

