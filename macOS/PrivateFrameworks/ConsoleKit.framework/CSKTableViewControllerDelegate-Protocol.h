//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSKTableViewController, NSArray, NSSortDescriptor, NSString;

@protocol CSKTableViewControllerDelegate <NSObject>
- (NSArray *)tableViewController:(CSKTableViewController *)arg1 menuItemsForRow:(unsigned long long)arg2 columnIdentifier:(NSString *)arg3;
- (void)tableViewController:(CSKTableViewController *)arg1 entityAtRowDidDoubleClick:(long long)arg2;
- (void)tableViewController:(CSKTableViewController *)arg1 entitiesDidSelect:(NSArray *)arg2;

@optional
- (void)tableViewController:(CSKTableViewController *)arg1 needSortingUsingSortDescriptor:(NSSortDescriptor *)arg2;
- (void)tableViewController:(CSKTableViewController *)arg1 lockFocusStateDidChange:(BOOL)arg2;
@end

