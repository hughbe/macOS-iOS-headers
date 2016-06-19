//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (GameKitErrors)
+ (id)_gkUnauthenticatedError;
+ (id)serverErrorForCode:(long long)arg1 withReason:(id)arg2;
+ (id)serverErrorForCode:(long long)arg1 withUserInfo:(id)arg2;
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2 userInfo:(id)arg3;
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2;
+ (id)userErrorForServerError:(id)arg1 userInfo:(id)arg2;
+ (id)userErrorForServerError:(id)arg1;
+ (id)userErrorForCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)userErrorForCode:(long long)arg1 userInfo:(id)arg2;
- (BOOL)_gkIsUnauthenticatedError;
@end

