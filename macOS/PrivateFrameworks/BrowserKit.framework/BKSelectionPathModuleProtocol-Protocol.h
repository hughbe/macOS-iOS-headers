//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class BKSelectionPathComponent, NSArray;

@protocol BKSelectionPathModuleProtocol
@property id <BKSelectionPathModuleProtocol> nextSelectionModule;
- (BOOL)setSelectionPath:(NSArray *)arg1;
- (NSArray *)selectionPath;
- (BOOL)handlesPathComponent:(BKSelectionPathComponent *)arg1;

@optional
- (BOOL)handlesRootedSelectionPaths;
- (NSArray *)rootObjectsFromSelectionPath:(NSArray *)arg1;
- (void)appendItemsToSelectionPath:(NSArray *)arg1;
@end

