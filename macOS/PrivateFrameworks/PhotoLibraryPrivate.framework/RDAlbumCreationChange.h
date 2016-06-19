//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDUndoRedoChange.h>

@class LiAddress, NSArray, NSString, RDFolder, RDMultiItemQuery, RDUndoRedoGroupChange;

@interface RDAlbumCreationChange : RDUndoRedoChange
{
    LiAddress *_address;
    LiAddress *_folderAddress;
    BOOL _customSortAvailable;
    BOOL _sortAscending;
    NSString *_uuid;
    NSString *_name;
    long long _albumSubclass;
    long long _albumType;
    NSString *_themeName;
    NSString *_queryFolderUuid;
    RDMultiItemQuery *_userQuery;
    RDMultiItemQuery *_filter;
    NSString *_sortKeyPath;
    NSArray *_customOrderUuids;
    NSString *_faceSortKeyPath;
    RDUndoRedoGroupChange *_attachmentCreationChange;
}

+ (id)albumChangeWithAlbum:(id)arg1;
@property(retain, nonatomic) RDUndoRedoGroupChange *attachmentCreationChange; // @synthesize attachmentCreationChange=_attachmentCreationChange;
@property(retain, nonatomic) NSString *faceSortKeyPath; // @synthesize faceSortKeyPath=_faceSortKeyPath;
@property(retain, nonatomic) NSArray *customOrderUuids; // @synthesize customOrderUuids=_customOrderUuids;
@property(retain, nonatomic) NSString *sortKeyPath; // @synthesize sortKeyPath=_sortKeyPath;
@property(retain, nonatomic) RDMultiItemQuery *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) RDMultiItemQuery *userQuery; // @synthesize userQuery=_userQuery;
@property(retain, nonatomic) NSString *queryFolderUuid; // @synthesize queryFolderUuid=_queryFolderUuid;
@property(retain, nonatomic) NSString *themeName; // @synthesize themeName=_themeName;
@property(readonly, nonatomic) long long albumType; // @synthesize albumType=_albumType;
@property(readonly, nonatomic) long long albumSubclass; // @synthesize albumSubclass=_albumSubclass;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)description;
- (void)redo;
- (void)undo;
- (void)setAlbumCreationChangeInformationForAlbum:(id)arg1;
@property(readonly, nonatomic) RDFolder *folder;
- (id)initWithAlbum:(id)arg1;

@end

