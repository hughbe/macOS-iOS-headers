//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CertificateRevocationContext : NSObject
{
    struct RefPtr<Safari::Certificate, WTF::DumbPtrTraits<Safari::Certificate>> _certificate;
    struct RefPtr<Safari::Certificate, WTF::DumbPtrTraits<Safari::Certificate>> _intermediateCertificate;
    double _verifyTime;
    CDUnknownBlockType _completionHandler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) double verifyTime; // @synthesize verifyTime=_verifyTime;
@property(readonly, nonatomic) struct Certificate *intermediateCertificate;
@property(readonly, nonatomic) struct Certificate *certificate;
- (id)initWithCertificate:(Ref_46982f58 *)arg1 intermediateCertificate:(Ref_46982f58 *)arg2 verifyTime:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

