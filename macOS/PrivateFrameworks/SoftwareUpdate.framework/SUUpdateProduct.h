//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@interface SUUpdateProduct : NSObject <NSSecureCoding>
{
    BOOL _allowedToUseInstallLater;
    BOOL _shouldAuthenticateReboot;
    BOOL _shouldLaunchFirstLoginOptimization;
    BOOL _doItLaterUpdateAndNowIsLater;
    BOOL _isFirmwareUpdate;
    BOOL _showPostInstallNotification;
    int _action;
    NSString *_title;
    NSString *_versionString;
    NSString *_currentLocalization;
    NSData *_longDescriptionData;
    NSString *_longDescriptionMIMEType;
    NSData *_licenseAgreementData;
    NSString *_licenseAgreementMIMEType;
    NSData *_firmwareWarningData;
    NSString *_firmwareWarningMIMEType;
    NSString *_productKey;
    long long _serverState;
    long long _type;
    NSArray *_applicationIdentifiersToClose;
    NSArray *_tags;
    id _auxInfo;
    NSString *_identifierForProductLabel;
    NSString *_versionForProductLabel;
    NSString *_serverMetadataURL;
    NSDictionary *_matchingDictionary;
    NSArray *_packageIdentifiersToInstall;
    long long _downloadSize;
    long long _shouldAutoInstallWithDelayInHours;
    NSString *_customCriticalNotificationTitle;
    NSString *_customCriticalNotificationText;
    NSString *_customTitleForPostInstallNotification;
    NSString *_customTextForPostInstallNotification;
    NSURL *_customURLForPostInstallNotification;
}

+ (id)stringForUpdateType:(long long)arg1;
+ (id)stringForUpdateState:(long long)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, retain) NSURL *customURLForPostInstallNotification; // @synthesize customURLForPostInstallNotification=_customURLForPostInstallNotification;
@property(readonly, retain) NSString *customTextForPostInstallNotification; // @synthesize customTextForPostInstallNotification=_customTextForPostInstallNotification;
@property(readonly, retain) NSString *customTitleForPostInstallNotification; // @synthesize customTitleForPostInstallNotification=_customTitleForPostInstallNotification;
@property(readonly) BOOL showPostInstallNotification; // @synthesize showPostInstallNotification=_showPostInstallNotification;
@property(readonly, retain) NSString *customCriticalNotificationText; // @synthesize customCriticalNotificationText=_customCriticalNotificationText;
@property(readonly, retain) NSString *customCriticalNotificationTitle; // @synthesize customCriticalNotificationTitle=_customCriticalNotificationTitle;
@property(readonly) long long shouldAutoInstallWithDelayInHours; // @synthesize shouldAutoInstallWithDelayInHours=_shouldAutoInstallWithDelayInHours;
@property BOOL isFirmwareUpdate; // @synthesize isFirmwareUpdate=_isFirmwareUpdate;
@property BOOL doItLaterUpdateAndNowIsLater; // @synthesize doItLaterUpdateAndNowIsLater=_doItLaterUpdateAndNowIsLater;
@property(readonly) long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly) NSArray *packageIdentifiersToInstall; // @synthesize packageIdentifiersToInstall=_packageIdentifiersToInstall;
@property(readonly, retain) NSDictionary *matchingDictionary; // @synthesize matchingDictionary=_matchingDictionary;
@property(readonly) BOOL shouldLaunchFirstLoginOptimization; // @synthesize shouldLaunchFirstLoginOptimization=_shouldLaunchFirstLoginOptimization;
@property(readonly) BOOL shouldAuthenticateReboot; // @synthesize shouldAuthenticateReboot=_shouldAuthenticateReboot;
@property(readonly) BOOL allowedToUseInstallLater; // @synthesize allowedToUseInstallLater=_allowedToUseInstallLater;
@property(readonly, retain) NSString *serverMetadataURL; // @synthesize serverMetadataURL=_serverMetadataURL;
@property(readonly, retain) NSString *versionForProductLabel; // @synthesize versionForProductLabel=_versionForProductLabel;
@property(readonly, retain) NSString *identifierForProductLabel; // @synthesize identifierForProductLabel=_identifierForProductLabel;
@property(readonly, retain) id auxInfo; // @synthesize auxInfo=_auxInfo;
@property(readonly, retain) NSArray *tags; // @synthesize tags=_tags;
@property(readonly, retain) NSArray *applicationIdentifiersToClose; // @synthesize applicationIdentifiersToClose=_applicationIdentifiersToClose;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly) long long serverState; // @synthesize serverState=_serverState;
@property(readonly, retain) NSString *productKey; // @synthesize productKey=_productKey;
@property(readonly, retain) NSString *firmwareWarningMIMEType; // @synthesize firmwareWarningMIMEType=_firmwareWarningMIMEType;
@property(readonly, retain) NSData *firmwareWarningData; // @synthesize firmwareWarningData=_firmwareWarningData;
@property(readonly, retain) NSString *licenseAgreementMIMEType; // @synthesize licenseAgreementMIMEType=_licenseAgreementMIMEType;
@property(readonly, retain) NSData *licenseAgreementData; // @synthesize licenseAgreementData=_licenseAgreementData;
@property(readonly, retain) NSString *longDescriptionMIMEType; // @synthesize longDescriptionMIMEType=_longDescriptionMIMEType;
@property(readonly, retain) NSData *longDescriptionData; // @synthesize longDescriptionData=_longDescriptionData;
@property(readonly, retain) NSString *currentLocalization; // @synthesize currentLocalization=_currentLocalization;
@property(readonly) int action; // @synthesize action=_action;
@property(readonly, retain) NSString *versionString; // @synthesize versionString=_versionString;
@property(readonly, retain) NSString *title; // @synthesize title=_title;
- (id)updateLabel;
- (id)licenseAgreement;
- (id)firmwareWarning;
- (id)stringRepresentationOfLongDescription;
- (id)longDescription;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSUProduct:(id)arg1;

@end

