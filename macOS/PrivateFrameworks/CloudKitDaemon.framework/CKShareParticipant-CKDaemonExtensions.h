//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKShareParticipant.h"

@interface CKShareParticipant (CKDaemonExtensions)
- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;
- (BOOL)hasEncryptedPersonalInfo;
@end

