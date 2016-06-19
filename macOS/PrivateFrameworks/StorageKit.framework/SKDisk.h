//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSImage, NSString, SKFilesystem;

@interface SKDisk : NSObject
{
    NSArray *_sortedChildren;
    NSObject *_daDiskRef;
    BOOL _isValid;
    BOOL _canBeDeleted;
    BOOL _isDiskImage;
    BOOL _isSystemRAMDisk;
    BOOL _isInternal;
    BOOL _isSolidState;
    BOOL _isWholeDisk;
    BOOL _isPhysicalDisk;
    BOOL _isWritable;
    BOOL _supportsJournaling;
    BOOL _isJournaled;
    BOOL _isEjectable;
    BOOL _isNetwork;
    BOOL _isLocked;
    BOOL _isOpticalDisc;
    BOOL _canSupportRecoveryPartition;
    BOOL _supportsRepair;
    BOOL _supportsVerify;
    BOOL _ownersEnabled;
    BOOL _isCaseSensitive;
    BOOL _partitionMapIsIncorrectlySized;
    int _smartStatus;
    NSString *_type;
    NSString *_filesystemType;
    NSImage *_diskIcon;
    NSString *_volumeName;
    NSString *_volumeUUID;
    NSString *_mountPoint;
    unsigned long long _freeSpace;
    unsigned long long _purgeableSpace;
    unsigned long long _availableSpace;
    unsigned long long _totalSpace;
    unsigned long long _minimumDiskSize;
    unsigned long long _maximumDiskSize;
    NSString *_diskIdentifier;
    NSString *_protocol;
    NSString *_mediaName;
    unsigned long long _unformattedSize;
    unsigned long long _childCount;
    unsigned long long _startLocation;
    SKFilesystem *_filesystem;
    NSString *_role;
}

@property(retain) NSString *role; // @synthesize role=_role;
@property BOOL partitionMapIsIncorrectlySized; // @synthesize partitionMapIsIncorrectlySized=_partitionMapIsIncorrectlySized;
@property(retain) SKFilesystem *filesystem; // @synthesize filesystem=_filesystem;
@property int smartStatus; // @synthesize smartStatus=_smartStatus;
@property unsigned long long startLocation; // @synthesize startLocation=_startLocation;
@property unsigned long long childCount; // @synthesize childCount=_childCount;
@property BOOL isCaseSensitive; // @synthesize isCaseSensitive=_isCaseSensitive;
@property unsigned long long unformattedSize; // @synthesize unformattedSize=_unformattedSize;
@property(retain) NSString *mediaName; // @synthesize mediaName=_mediaName;
@property BOOL ownersEnabled; // @synthesize ownersEnabled=_ownersEnabled;
@property BOOL supportsVerify; // @synthesize supportsVerify=_supportsVerify;
@property BOOL supportsRepair; // @synthesize supportsRepair=_supportsRepair;
@property BOOL canSupportRecoveryPartition; // @synthesize canSupportRecoveryPartition=_canSupportRecoveryPartition;
@property BOOL isOpticalDisc; // @synthesize isOpticalDisc=_isOpticalDisc;
@property BOOL isLocked; // @synthesize isLocked=_isLocked;
@property BOOL isNetwork; // @synthesize isNetwork=_isNetwork;
@property BOOL isEjectable; // @synthesize isEjectable=_isEjectable;
@property BOOL isJournaled; // @synthesize isJournaled=_isJournaled;
@property BOOL supportsJournaling; // @synthesize supportsJournaling=_supportsJournaling;
@property BOOL isWritable; // @synthesize isWritable=_isWritable;
@property BOOL isPhysicalDisk; // @synthesize isPhysicalDisk=_isPhysicalDisk;
@property BOOL isWholeDisk; // @synthesize isWholeDisk=_isWholeDisk;
@property BOOL isSolidState; // @synthesize isSolidState=_isSolidState;
@property BOOL isInternal; // @synthesize isInternal=_isInternal;
@property BOOL isSystemRAMDisk; // @synthesize isSystemRAMDisk=_isSystemRAMDisk;
@property BOOL isDiskImage; // @synthesize isDiskImage=_isDiskImage;
@property(retain) NSString *protocol; // @synthesize protocol=_protocol;
@property(retain) NSString *diskIdentifier; // @synthesize diskIdentifier=_diskIdentifier;
@property BOOL canBeDeleted; // @synthesize canBeDeleted=_canBeDeleted;
@property unsigned long long maximumDiskSize; // @synthesize maximumDiskSize=_maximumDiskSize;
@property unsigned long long minimumDiskSize; // @synthesize minimumDiskSize=_minimumDiskSize;
@property unsigned long long totalSpace; // @synthesize totalSpace=_totalSpace;
@property unsigned long long availableSpace; // @synthesize availableSpace=_availableSpace;
@property unsigned long long purgeableSpace; // @synthesize purgeableSpace=_purgeableSpace;
@property unsigned long long freeSpace; // @synthesize freeSpace=_freeSpace;
@property(retain) NSString *mountPoint; // @synthesize mountPoint=_mountPoint;
@property(retain) NSString *volumeUUID; // @synthesize volumeUUID=_volumeUUID;
@property(retain) NSString *volumeName; // @synthesize volumeName=_volumeName;
@property(retain) NSImage *diskIcon; // @synthesize diskIcon=_diskIcon;
@property BOOL isValid; // @synthesize isValid=_isValid;
@property(retain) NSString *filesystemType; // @synthesize filesystemType=_filesystemType;
@property(retain) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (BOOL)fixIncorrectlySizedPartitionMapWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)extendedInfoForDiskWithCallback:(CDUnknownBlockType)arg1;
- (BOOL)blockRestoreFromDiskImageFileURL:(id)arg1 handlingProgress:(CDUnknownBlockType)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (BOOL)blockRestoreFromDisk:(id)arg1 handlingProgress:(CDUnknownBlockType)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)getRecoverySystemInfo:(CDUnknownBlockType)arg1;
- (BOOL)ensureRecovery:(id)arg1 chunkkList:(id)arg2 diagnostics:(id)arg3 handlingProgress:(CDUnknownBlockType)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (BOOL)ensureRecovery:(id)arg1 chunkkList:(id)arg2 handlingProgress:(CDUnknownBlockType)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (BOOL)convertDiskToFDEWithUsers:(id)arg1 recoveryKey:(id)arg2 handlingProgress:(CDUnknownBlockType)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (BOOL)resizeToSize:(unsigned long long)arg1 handlingProgress:(CDUnknownBlockType)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)convertToCoreStorage:(BOOL)arg1 handlingProgress:(CDUnknownBlockType)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (BOOL)removeDiskHandlingProgress:(CDUnknownBlockType)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)splitToSize:(unsigned long long)arg1 newDiskRole:(id)arg2 name:(id)arg3 caseSensitive:(BOOL)arg4 password:(id)arg5 handlingProgress:(CDUnknownBlockType)arg6 withCompletionBlock:(CDUnknownBlockType)arg7;
- (BOOL)splitToSize:(unsigned long long)arg1 newDiskType:(id)arg2 name:(id)arg3 caseSensitive:(BOOL)arg4 password:(id)arg5 handlingProgress:(CDUnknownBlockType)arg6 withCompletionBlock:(CDUnknownBlockType)arg7;
- (BOOL)repairUserHomeForUser:(long long)arg1 withProgressHandler:(CDUnknownBlockType)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (BOOL)repairWithProgressHandler:(CDUnknownBlockType)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (BOOL)verifyWithProgressHandler:(CDUnknownBlockType)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (BOOL)secureEraseWithLevel:(int)arg1 handlingProgress:(CDUnknownBlockType)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (BOOL)eraseToFileSystemType:(id)arg1 partitionMap:(id)arg2 name:(id)arg3 caseSensitive:(BOOL)arg4 password:(id)arg5 handlingProgress:(CDUnknownBlockType)arg6 withCompletionBlock:(CDUnknownBlockType)arg7;
- (BOOL)eraseToFileSystemType:(id)arg1 name:(id)arg2 caseSensitive:(BOOL)arg3 password:(id)arg4 handlingProgress:(CDUnknownBlockType)arg5 withCompletionBlock:(CDUnknownBlockType)arg6;
- (BOOL)eraseToFilesystem:(id)arg1 name:(id)arg2 partitionMap:(id)arg3 password:(id)arg4 handlingProgress:(CDUnknownBlockType)arg5 withCompletionBlock:(CDUnknownBlockType)arg6;
- (BOOL)eraseToFilesystem:(id)arg1 name:(id)arg2 password:(id)arg3 handlingProgress:(CDUnknownBlockType)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (BOOL)eraseHandlingProgress:(CDUnknownBlockType)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)canBeErasedToRole:(id)arg1;
- (BOOL)ejectWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)mountWithOptions:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (BOOL)mountWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)unmountWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)enableJournalingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)enablePermissionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)setDiskIcon:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (BOOL)rename:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (BOOL)blessWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)setBootWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)setBootOnceWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)canBoot;
- (void)expireCache;
- (void)expireCacheWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)canResize;
- (id)supportedFilesystems;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)children;
- (void)updateWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)matchesDictionary:(id)arg1;
- (id)dictionaryRepresentationIncludingIcon;
- (id)dictionaryRepresentation;
- (id)minimalDictionaryRepresentation;

@end

