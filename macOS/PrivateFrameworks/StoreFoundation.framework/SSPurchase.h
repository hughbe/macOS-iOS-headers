//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class ISOperation, NSData, NSDictionary, NSNumber, NSString, SSDownloadMetadata;

@interface SSPurchase : NSObject <NSSecureCoding, NSCopying>
{
    NSNumber *_accountIdentifier;
    NSString *_appleID;
    NSString *_buyParameters;
    SSDownloadMetadata *_downloadMetadata;
    NSString *_uniqueIdentifier;
    BOOL _isUpdate;
    long long _purchaseType;
    BOOL _checkPreflightAterPurchase;
    NSData *_receiptData;
    NSString *_parentalControls;
    BOOL _isRedownload;
    BOOL _isVPP;
    BOOL _shouldBeInstalledAfterLogout;
    BOOL _isCancelled;
    BOOL _isDSIDLessPurchase;
    NSString *_sortableAccountIdentifier;
    unsigned long long _itemIdentifier;
    CDUnknownBlockType _authFallbackHandler;
    ISOperation *_purchaseOperation;
    NSDictionary *_responseDialog;
    NSDictionary *_dsidLessOptions;
}

+ (id)purchasesGroupedByAccountIdentifierWithPurchases:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)purchaseWithBuyParameters:(id)arg1;
@property(retain) NSDictionary *dsidLessOptions; // @synthesize dsidLessOptions=_dsidLessOptions;
@property BOOL isDSIDLessPurchase; // @synthesize isDSIDLessPurchase=_isDSIDLessPurchase;
@property(copy) NSDictionary *responseDialog; // @synthesize responseDialog=_responseDialog;
@property __weak ISOperation *purchaseOperation; // @synthesize purchaseOperation=_purchaseOperation;
@property BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(copy) CDUnknownBlockType authFallbackHandler; // @synthesize authFallbackHandler=_authFallbackHandler;
@property unsigned long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property BOOL shouldBeInstalledAfterLogout; // @synthesize shouldBeInstalledAfterLogout=_shouldBeInstalledAfterLogout;
@property BOOL checkPreflightAterPurchase; // @synthesize checkPreflightAterPurchase=_checkPreflightAterPurchase;
@property(readonly, nonatomic) NSString *sortableAccountIdentifier; // @synthesize sortableAccountIdentifier=_sortableAccountIdentifier;
@property(retain, nonatomic) NSString *parentalControls; // @synthesize parentalControls=_parentalControls;
@property(retain, nonatomic) NSData *receiptData; // @synthesize receiptData=_receiptData;
@property(nonatomic) long long purchaseType; // @synthesize purchaseType=_purchaseType;
@property BOOL isVPP; // @synthesize isVPP=_isVPP;
@property BOOL isRedownload; // @synthesize isRedownload=_isRedownload;
@property BOOL isUpdate; // @synthesize isUpdate=_isUpdate;
@property(retain, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(copy, nonatomic) SSDownloadMetadata *downloadMetadata; // @synthesize downloadMetadata=_downloadMetadata;
@property(copy, nonatomic) NSString *buyParameters; // @synthesize buyParameters=_buyParameters;
@property(retain, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void).cxx_destruct;
- (BOOL)purchaseDSIDMatchesPrimaryAccount;
@property(readonly) BOOL needsAuthentication; // @dynamic needsAuthentication;
@property BOOL isRecoveryPurchase; // @dynamic isRecoveryPurchase;
- (id)productID;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (id)_sortableAccountIdentifier;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

