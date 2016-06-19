//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSString, RDPersonTable;

@interface RDPersonModel : RDModel
{
}

+ (Class)tableClass;
+ (id)localIdentifierCode;
@property(nonatomic) long long faceCount;
@property(nonatomic) long long associatedClusterId;
@property(nonatomic) BOOL isVerified;
@property(nonatomic) BOOL isInPersonNamingModel;
@property(nonatomic) BOOL isCloudQuarantined;
@property(copy, nonatomic) NSString *cloudIdentifier;
@property(nonatomic) BOOL hasBeenSynced;
@property(nonatomic) long long cloudLibraryState;
@property(copy, nonatomic) NSString *personUri;
@property(nonatomic) long long representativeFaceId;
@property(nonatomic) long long personType;
@property(nonatomic) long long manualOrder;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) RDPersonTable *table;

@end

