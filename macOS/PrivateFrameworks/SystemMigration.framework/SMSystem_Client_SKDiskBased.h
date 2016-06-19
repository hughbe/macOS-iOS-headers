//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMSystem_Client.h>

@class NSString;

@interface SMSystem_Client_SKDiskBased : SMSystem_Client
{
    BOOL _isPasswordLocked;
    BOOL _isEncrypted;
    NSString *_protocol;
}

+ (id)keyPathsForValuesAffectingAvailableAction;
+ (id)keyPathsForValuesAffectingVolumeIconAccesibilityLabel;
+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)keyPathsForValuesAffectingDisplayState;
+ (id)keyPathsForValuesAffectingUiRank;
+ (id)guiInterestedKeys;
+ (id)guiMonitorKeys;
@property(retain) NSString *protocol; // @synthesize protocol=_protocol;
@property BOOL isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property BOOL isPasswordLocked; // @synthesize isPasswordLocked=_isPasswordLocked;
- (void).cxx_destruct;
- (BOOL)validateFDEPassword:(id)arg1;
- (void)pressedActionButton:(id)arg1;
- (BOOL)availableAction;
- (id)availableActionLabel;
- (id)volumeIconAccesibilityLabel;
- (id)displayName;
- (id)displayState;
- (unsigned long long)uiRank;

@end

