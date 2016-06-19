//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSImage, NSString, NSURL, WBSAutomaticReadingListSocialSource;

@interface WBSAutomaticReadingListItem : NSObject
{
    NSImage *_fallbackProfileImage;
    BOOL _repostedByAuthenticatedUser;
    BOOL _fetchingProfileImage;
    id _sourceRecordID;
    NSDate *_sourceRecordCreationDate;
    NSString *_sourceRecordText;
    id _originatorID;
    NSString *_originatorDisplayName;
    NSString *_urlString;
    NSString *_reposterDisplayName;
    NSString *_reposterScreenName;
    NSString *_socialSourceAccountIdentifier;
    NSImage *_serviceImage;
    NSString *_uniqueIdentifier;
    NSImage *_originatorProfileImage;
}

+ (id)keyPathsForValuesAffectingDomainString;
@property(nonatomic) BOOL fetchingProfileImage; // @synthesize fetchingProfileImage=_fetchingProfileImage;
@property(retain, nonatomic) NSImage *originatorProfileImage; // @synthesize originatorProfileImage=_originatorProfileImage;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSImage *serviceImage; // @synthesize serviceImage=_serviceImage;
@property(readonly, copy, nonatomic) NSString *socialSourceAccountIdentifier; // @synthesize socialSourceAccountIdentifier=_socialSourceAccountIdentifier;
@property(nonatomic, getter=isRepostedByAuthenticatedUser) BOOL repostedByAuthenticatedUser; // @synthesize repostedByAuthenticatedUser=_repostedByAuthenticatedUser;
@property(readonly, nonatomic) NSString *reposterScreenName; // @synthesize reposterScreenName=_reposterScreenName;
@property(readonly, nonatomic) NSString *reposterDisplayName; // @synthesize reposterDisplayName=_reposterDisplayName;
@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, copy, nonatomic) NSString *originatorDisplayName; // @synthesize originatorDisplayName=_originatorDisplayName;
@property(readonly, copy, nonatomic) id originatorID; // @synthesize originatorID=_originatorID;
@property(readonly, copy, nonatomic) NSString *sourceRecordText; // @synthesize sourceRecordText=_sourceRecordText;
@property(readonly, copy, nonatomic) NSDate *sourceRecordCreationDate; // @synthesize sourceRecordCreationDate=_sourceRecordCreationDate;
@property(readonly, copy, nonatomic) id sourceRecordID; // @synthesize sourceRecordID=_sourceRecordID;
- (void).cxx_destruct;
- (id)description;
- (void)_fetchOriginatorProfileImageForSize:(struct CGSize)arg1;
- (void)_getFallbackImage;
- (void)updateFallbackImageIfNecessary;
- (id)bestOriginatorProfileImageForSize:(struct CGSize)arg1;
- (BOOL)isAcceptableOriginatorProfileImage:(id)arg1;
@property(readonly, nonatomic) NSURL *biggerOriginatorProfileImageURL;
@property(readonly, nonatomic) NSURL *originatorProfileImageURL;
@property(readonly, nonatomic) struct _NSRange emphasizedTextRange;
@property(readonly, nonatomic) struct _NSRange displayURLRange;
@property(readonly, nonatomic) NSString *continuousBannerTitle;
@property(readonly, nonatomic) NSString *continuousBannerDisplayString;
@property(readonly, nonatomic) NSString *displayString;
@property(readonly, nonatomic) NSURL *originatorProfileURL;
@property(readonly, nonatomic) NSURL *sourceRecordURL;
@property(readonly, nonatomic) NSString *domainString;
@property(readonly, nonatomic) WBSAutomaticReadingListSocialSource *socialSource;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2;

@end

