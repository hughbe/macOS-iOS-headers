//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol AFUISpeechSynthesis <NSObject>
@property(nonatomic) BOOL disableAudioDucking;
- (void)invalidate;
- (void)skipCurrentSynthesis;
- (void)cancel;
- (void)enqueueText:(NSString *)arg1 completion:(void (^)(long long))arg2;
- (void)enqueueText:(NSString *)arg1 isPhonetic:(BOOL)arg2 provisionally:(BOOL)arg3 eligibleAfterDuration:(double)arg4 preparationIdentifier:(NSString *)arg5 completion:(void (^)(long long))arg6 animationIdentifier:(NSString *)arg7;
@end

