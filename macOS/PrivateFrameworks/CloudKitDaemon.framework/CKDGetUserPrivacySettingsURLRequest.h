//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDPUserPrivacySettings;

__attribute__((visibility("hidden")))
@interface CKDGetUserPrivacySettingsURLRequest : CKDURLRequest
{
    CKDPUserPrivacySettings *_userPrivacySettings;
}

@property(retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings; // @synthesize userPrivacySettings=_userPrivacySettings;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)requestOperationClasses;
- (int)operationType;

@end

