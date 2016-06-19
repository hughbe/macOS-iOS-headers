//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DMAppleRAID : NSObject
{
    id _instPriv;
}

- (int)updateRAIDSetParameters:(struct __DADisk *)arg1 setKey:(id)arg2 value:(id)arg3;
- (int)repairRAIDSet:(struct __DADisk *)arg1 newDisk:(struct __DADisk *)arg2;
- (int)repairRAIDSetUUID:(id)arg1 newDisk:(struct __DADisk *)arg2;
- (int)removeFromRAIDSetUUID:(id)arg1 memberUUID:(id)arg2;
- (int)removeFromRAIDSet:(struct __DADisk *)arg1 disk:(struct __DADisk *)arg2;
- (int)deleteRAIDSet:(struct __DADisk *)arg1;
- (int)deleteRAIDSetUUID:(id)arg1;
- (int)addToRAIDSet:(struct __DADisk *)arg1 newDisk:(struct __DADisk *)arg2 type:(id)arg3;
- (int)addToRAIDSetUUID:(id)arg1 newDisk:(struct __DADisk *)arg2 type:(id)arg3;
- (int)enableRAIDSetWithDisk:(struct __DADisk *)arg1 setType:(id)arg2 options:(id)arg3;
- (int)createRAIDSetWithDisks:(id)arg1 setType:(id)arg2 name:(id)arg3 format:(id)arg4 options:(id)arg5;
- (id)childrenOfRAID:(struct __DADisk *)arg1;
- (id)directRAIDLevelForSet:(struct __DADisk *)arg1;
- (BOOL)isRAIDMember:(struct __DADisk *)arg1;
- (BOOL)isRAIDSet:(struct __DADisk *)arg1;
- (id)raidMembers:(id)arg1 returnMembers:(BOOL)arg2 returnSpares:(BOOL)arg3 master:(id *)arg4;
- (struct __DADisk *)UUIDToDADisk:(id)arg1;
- (id)DADiskToUUID:(struct __DADisk *)arg1;
- (id)DADiskToUUID:(struct __DADisk *)arg1 lookupMembers:(BOOL)arg2 lookupSpares:(BOOL)arg3;
- (void)dealloc;
- (id)initWithManager:(id)arg1;
- (id)init;

@end

