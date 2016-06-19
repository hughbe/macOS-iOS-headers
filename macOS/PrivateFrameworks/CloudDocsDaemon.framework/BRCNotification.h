//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BRQueryItem.h"

@class BRCAppLibrary, BRCItemID, BRFileObjectID, NSMutableSet, NSSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BRCNotification : BRQueryItem
{
    BOOL _isInDocumentScope;
    BOOL _isInDataScope;
    BOOL _isInTrashScope;
    BRCItemID *_itemID;
    BRCItemID *_parentID;
    unsigned long long _oldParentFileID;
    unsigned long long _parentFileID;
    NSSet *_parentIDs;
    NSMutableSet *_appLibraryIDsWithReverseAliases;
    BRCAppLibrary *_appLibrary;
    NSString *_aliasSourceAppLibraryID;
    NSString *_unsaltedBookmarkData;
}

+ (id)notificationWithAliasItem:(id)arg1 targetItemNotification:(id)arg2;
+ (id)notificationGatheredFromItem:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL isInTrashScope; // @synthesize isInTrashScope=_isInTrashScope;
@property(readonly, nonatomic) BOOL isInDataScope; // @synthesize isInDataScope=_isInDataScope;
@property(readonly, nonatomic) BOOL isInDocumentScope; // @synthesize isInDocumentScope=_isInDocumentScope;
@property(retain, nonatomic) NSString *unsaltedBookmarkData; // @synthesize unsaltedBookmarkData=_unsaltedBookmarkData;
@property(readonly, nonatomic) NSString *aliasSourceAppLibraryID; // @synthesize aliasSourceAppLibraryID=_aliasSourceAppLibraryID;
@property(readonly, nonatomic) BRCAppLibrary *appLibrary; // @synthesize appLibrary=_appLibrary;
@property(retain, nonatomic) NSMutableSet *appLibraryIDsWithReverseAliases; // @synthesize appLibraryIDsWithReverseAliases=_appLibraryIDsWithReverseAliases;
@property(retain, nonatomic) NSSet *parentIDs; // @synthesize parentIDs=_parentIDs;
@property(readonly, nonatomic) unsigned long long parentFileID; // @synthesize parentFileID=_parentFileID;
@property(readonly, nonatomic) unsigned long long oldParentFileID; // @synthesize oldParentFileID=_oldParentFileID;
@property(readonly, nonatomic) BRCItemID *parentID; // @synthesize parentID=_parentID;
@property(readonly, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (void)generateLogicalExtension:(id)arg1 physicalExtension:(id)arg2;
- (void)merge:(id)arg1;
- (BOOL)canMerge:(id)arg1;
- (id)notificationByStrippingSharingInfoIfNeeded;
- (id)initWithAliasItem:(id)arg1 itemDiffs:(unsigned long long)arg2;
- (void)_addAliasDecoration:(id)arg1;
- (void)setNumberAttribute:(id)arg1 forKey:(id)arg2;
- (id)initWithLocalItem:(id)arg1 itemDiffs:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)classForCoder;
@property(readonly, nonatomic) BRFileObjectID *parentFileObjectID;
@property(readonly, nonatomic) BRFileObjectID *oldParentFileObjectID;
- (id)subclassDescription;

// Remaining properties
@property(readonly, nonatomic) NSURL *url; // @dynamic url;

@end

