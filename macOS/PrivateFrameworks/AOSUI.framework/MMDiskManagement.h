//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMDiskManagement : NSObject
{
}

+ (BOOL)systemHasTRB;
+ (BOOL)recoveryPartitionNeedsUpdate:(id)arg1;
+ (BOOL)containsRecoveryPartitionAndVersion:(id *)arg1 error:(id *)arg2;
+ (BOOL)hasCorrectRecoveryPartition:(id)arg1;
+ (BOOL)hasRecoveryPartition:(id *)arg1;

@end

