//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSData, NSDate, NSString, RDMemoryTable;

@interface RDMemoryModel : RDModel
{
}

+ (Class)tableClass;
+ (id)localIdentifierCode;
@property(nonatomic) BOOL isCloudQuarantined;
@property(copy, nonatomic) NSString *cloudIdentifier;
@property(copy, nonatomic) NSData *queryHintData;
@property(nonatomic) BOOL hasBeenSynced;
@property(nonatomic) long long cloudLibraryState;
@property(nonatomic) BOOL userCreated;
@property(nonatomic) BOOL favorite;
@property(nonatomic) double score;
@property(nonatomic) long long subcategory;
@property(nonatomic) BOOL pending;
@property(copy, nonatomic) NSData *movieAssetState;
@property(copy, nonatomic) NSData *movieData;
@property(copy, nonatomic) NSData *photosGraphData;
@property(nonatomic) long long photosGraphVersion;
@property(nonatomic) BOOL rejected;
@property(nonatomic) long long category;
@property(nonatomic) long long keyVersionId;
@property(copy, nonatomic) NSDate *createDate;
@property(copy, nonatomic) NSString *subTitle;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) RDMemoryTable *table;
@property(readonly, copy, nonatomic) NSData *representativeAssets;
@property(readonly, nonatomic) BOOL bookmarked;
@property(readonly, copy, nonatomic) NSData *miroProjectData;

@end

