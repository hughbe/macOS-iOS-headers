//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMServicePlugInGroupListSupport.h"

@class NSArray, NSString;

@protocol IMServicePlugInGroupListEditingSupport <IMServicePlugInGroupListSupport>
- (oneway void)removeHandles:(NSArray *)arg1 fromGroup:(NSString *)arg2;
- (oneway void)addHandles:(NSArray *)arg1 toGroup:(NSString *)arg2;
- (oneway void)renameGroup:(NSString *)arg1 toGroup:(NSString *)arg2;
- (oneway void)removeGroups:(NSArray *)arg1;
- (oneway void)addGroups:(NSArray *)arg1;
@end

