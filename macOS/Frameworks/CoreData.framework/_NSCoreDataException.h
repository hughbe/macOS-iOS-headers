//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSException.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSCoreDataException : NSException
{
    long long _code;
    NSString *_domain;
}

+ (id)exceptionWithName:(id)arg1 code:(long long)arg2 reason:(id)arg3 userInfo:(id)arg4;
- (id)errorObjectWithUserInfo:(id)arg1;
- (id)domain;
- (long long)code;
- (void)_setDomain:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (id)initWithName:(id)arg1 code:(long long)arg2 reason:(id)arg3 userInfo:(id)arg4;

@end

