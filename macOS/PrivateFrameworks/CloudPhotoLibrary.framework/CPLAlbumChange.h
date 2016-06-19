//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLContainerChange.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSString;

@interface CPLAlbumChange : CPLContainerChange <NSSecureCoding, NSCopying>
{
    NSString *_keyAssetIdentifier;
    BOOL _albumSortAscending;
    unsigned long long _albumType;
    NSString *_name;
    long long _position;
    NSString *_parentIdentifier;
    unsigned long long _albumSortType;
    NSData *_smartQueryParamsData;
}

+ (BOOL)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (BOOL)cplShouldIgnorePropertyForCoding:(id)arg1;
@property(copy, nonatomic) NSData *smartQueryParamsData; // @synthesize smartQueryParamsData=_smartQueryParamsData;
@property(nonatomic) BOOL albumSortAscending; // @synthesize albumSortAscending=_albumSortAscending;
@property(nonatomic) unsigned long long albumSortType; // @synthesize albumSortType=_albumSortType;
@property(copy, nonatomic) NSString *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long albumType; // @synthesize albumType=_albumType;
- (void).cxx_destruct;
- (BOOL)supportsDeletion;
@property(copy, nonatomic) NSDictionary *smartQueryParams;
- (id)propertiesDescription;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)identifiersForMapping;

@end

