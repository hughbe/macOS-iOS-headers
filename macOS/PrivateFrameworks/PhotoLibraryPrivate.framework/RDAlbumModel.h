//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSData, NSDate, NSNumber, NSString, RDAlbumTable;

@interface RDAlbumModel : RDModel
{
}

+ (Class)tableClass;
+ (id)localIdentifierCode;
@property(nonatomic) long long cloudAlbumType;
@property(nonatomic) long long cloudSortType;
@property(nonatomic) BOOL isCloudQuarantined;
@property(copy, nonatomic) NSString *cloudIdentifier;
@property(nonatomic) BOOL hasBeenSynced;
@property(nonatomic) long long cloudLibraryState;
@property(nonatomic) BOOL isPinned;
@property(nonatomic) BOOL isFamilyStream;
@property(copy, nonatomic) NSDate *streamLastContributionDate;
@property(copy, nonatomic) NSDate *streamLastInterestingChangeDate;
@property(copy, nonatomic) NSString *streamOwnerFullName;
@property(copy, nonatomic) NSString *streamOwnerEmail;
@property(copy, nonatomic) NSString *streamOwnerPersonId;
@property(copy, nonatomic) NSNumber *streamRelationshipState;
@property(copy, nonatomic) NSString *streamAlbumIdentifier;
@property(copy, nonatomic) NSString *printProjectProductCode;
@property(nonatomic) double printProjectThumbnailScale;
@property(nonatomic) long long printProjectType;
@property(copy, nonatomic) NSString *printProjectUuid;
@property(copy, nonatomic) NSData *slideshowData;
@property(copy, nonatomic) NSData *queryData;
@property(copy, nonatomic) NSData *filterData;
@property(copy, nonatomic) NSDate *recentUserChangeDate;
@property(nonatomic) long long personId;
@property(copy, nonatomic) NSString *faceSortKeyPath;
@property(copy, nonatomic) NSNumber *colorLabelIndex;
@property(nonatomic) BOOL isMagic;
@property(nonatomic) BOOL isHidden;
@property(copy, nonatomic) NSDate *inTrashDate;
@property(nonatomic) BOOL isInTrash;
@property(nonatomic) BOOL isFavorite;
@property(copy, nonatomic) NSDate *createDate;
@property(nonatomic) BOOL customSortAvailable;
@property(nonatomic) BOOL sortAscending;
@property(copy, nonatomic) NSString *sortKeyPath;
@property(copy, nonatomic) NSString *selectedTrackPathUuid;
@property(copy, nonatomic) NSString *posterVersionUuid;
@property(copy, nonatomic) NSString *queryFolderUuid;
@property(copy, nonatomic) NSString *folderUuid;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) long long albumSubclass;
@property(nonatomic) long long albumType;
@property(readonly, nonatomic) RDAlbumTable *table;
@property(readonly, copy, nonatomic) NSData *viewData;

@end

