//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKPrivateKey-Protocol.h>

@class CRKIdentityConfiguration, NSData, NSString;

@interface CRKInMemoryPrivateKey : NSObject <CRKPrivateKey>
{
    CRKIdentityConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CRKIdentityConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) struct __SecKey *underlyingPrivateKey;
@property(readonly, copy, nonatomic) NSData *dataRepresentation;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

