//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (AuthKit)
+ (id)ak_wrappedAnisetteError:(int)arg1;
+ (id)ak_errorWithCode:(long long)arg1;
- (BOOL)ak_isUserTryAgainError;
- (BOOL)ak_isUserSkippedError;
- (BOOL)ak_isUserCancelError;
@end

