//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface AMRemoveQuarantineRecoveryAttempter : NSObject
{
    unsigned long long __recoveryOptionIndex;
    NSURL *__url;
}

+ (id)removeQuarantineRecoveryAttempterWithRecoveryOptionIndex:(unsigned long long)arg1 url:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *_url; // @synthesize _url=__url;
@property(nonatomic) unsigned long long _recoveryOptionIndex; // @synthesize _recoveryOptionIndex=__recoveryOptionIndex;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (BOOL)_removeQuarantine;
- (id)initWithRecoveryOptionIndex:(unsigned long long)arg1 url:(id)arg2;

@end

