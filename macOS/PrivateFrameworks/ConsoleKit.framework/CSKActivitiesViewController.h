//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConsoleKit/CSKTableViewController.h>

#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"

@class CKUIActivitiesOutlineView, NSString;

@interface CSKActivitiesViewController : CSKTableViewController <NSOutlineViewDelegate, NSOutlineViewDataSource>
{
    BOOL _allowsActivitiesInsertion;
    id <CSKActivitiesViewControllerDataSource> _dataSource;
    CKUIActivitiesOutlineView *_outlineView;
}

@property(readonly, nonatomic) CKUIActivitiesOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(nonatomic) BOOL allowsActivitiesInsertion; // @synthesize allowsActivitiesInsertion=_allowsActivitiesInsertion;
@property(nonatomic) __weak id <CSKActivitiesViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_removeActivitiesAtIndexes:(id)arg1 parentActivity:(id)arg2;
- (void)_insertActivitiesAtIndexes:(id)arg1 parentActivity:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)supportsFind;
- (id)defaultColumnLayout;
- (id)entitiesAtIndexes:(id)arg1;
- (id)entityAtIndex:(unsigned long long)arg1;
- (void)scrollToMostRecentRows;
- (void)removeActivitiesAtIndexes:(id)arg1 childrenActivitiesAtIndexes:(id)arg2;
- (void)insertActivitiesAtIndexes:(id)arg1 childrenActivitiesAtIndexes:(id)arg2;
- (void)insertActivitiesAtIndexes:(id)arg1 parentActivity:(id)arg2;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

