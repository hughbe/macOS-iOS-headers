//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalManagedObject.h>

@class CalManagedPublication, NSString;

@interface CalManagedNode : CalManagedObject
{
    NSString *_path;
}

+ (id)_infoDictionaryPathForNodeWithDirectoryName:(id)arg1;
+ (id)infoDictionaryPathForNodeWithInfoDictionary:(id)arg1;
+ (id)infoDictionaryForNodeWithUID:(id)arg1;
+ (id)infoDictionaryForNodeWithDirectoryName:(id)arg1;
+ (id)infoDictionaryDirectoryPathForNodeWithInfoDictionary:(id)arg1;
+ (id)infoDictionaryDirectoryNameForNodeWithInfoDictionary:(id)arg1;
+ (id)infoDictionaries;
+ (id)nodeWithHighestOrder:(id)arg1;
+ (id)nodeWithHighestOrder:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
+ (id)firstNodeInNodes:(id)arg1 ordered:(long long)arg2 passingTest:(CDUnknownBlockType)arg3;
+ (id)pathExtension;
+ (id)fetchRequestWithUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
- (void).cxx_destruct;
- (id)lastOperationError;
@property(readonly) NSString *type;
- (id)properties;
- (id)nodesForOrdering;
- (void)_updateOrderToOrder:(int)arg1 shouldUseFirstOrder:(BOOL)arg2 shouldUseLastOrder:(BOOL)arg3 nodesForOrdering:(id)arg4;
- (void)updateOrderToOrder:(int)arg1 withNodesForOrdering:(id)arg2;
- (void)updateOrderToLastOrderWithNodesForOrdering:(id)arg1;
- (void)updateOrderToFirstOrderWithNodesForOrdering:(id)arg1;
- (void)updateOrderToOrder:(int)arg1;
- (void)updateOrderToLastOrder;
- (void)updateOrderToFirstOrder;
- (id)nodesInNamespace;
- (id)titleWithPrefix:(id)arg1;
- (BOOL)isTitleInUse:(id)arg1;
- (BOOL)_isTitleInUse:(id)arg1 nodes:(id)arg2;
- (long long)compare:(id)arg1;
- (long long)compareTitle:(id)arg1;
@property(readonly) BOOL keepSyncRecordLocal;
- (long long)notificationCountForClass:(Class)arg1;
@property long long checked;
@property(retain) NSString *color; // @dynamic color;
@property(readonly) NSString *path; // @synthesize path=_path;
- (id)subscriptionOrPublishURL;
@property(readonly) BOOL supportsSharing;
@property(readonly) BOOL supportsPublishing;
@property(readonly) BOOL supportsCalDAVPublish;
@property(readonly) BOOL supportsAttendeeSearch;
@property(readonly) BOOL isWritable;
@property(readonly) BOOL isTaskContainer;
@property(readonly) BOOL isColorEditable;
@property(readonly) BOOL isRenameable;
@property(readonly) BOOL isRefreshable;
@property(readonly) BOOL isDeletable;
@property(readonly) BOOL isEventContainer;
@property int order;
@property(readonly) BOOL isSubscribed;
@property(readonly) BOOL isCalDAVPublished;
@property(readonly) BOOL isSharedByMe;
@property(readonly) BOOL isSharedToMe;
@property(readonly) BOOL isShared;
@property(readonly) BOOL isPublished;
- (void)willRefresh:(BOOL)arg1;
- (id)relativePath;
- (void)awakeFromFetch;
- (id)_makeSession;
- (id)session;
- (void)refreshSession:(long long)arg1;
- (void)refreshSession;
- (void)deactivateSession;
- (void)activateSession;
- (BOOL)wantsSession;
- (id)iCalendarDocumentWithID:(id)arg1 name:(id)arg2 description:(id)arg3 color:(id)arg4 options:(unsigned long long)arg5;
- (id)iCalendarDocumentWithOptions:(unsigned long long)arg1;
- (id)_iCalendarDocumentForCalendars:(id)arg1 calendarID:(id)arg2 name:(id)arg3 description:(id)arg4 color:(id)arg5 options:(unsigned long long)arg6;
- (void)setNeedsPublish:(BOOL)arg1;

// Remaining properties
@property BOOL isEnabled; // @dynamic isEnabled;
@property(retain) NSString *notes; // @dynamic notes;
@property BOOL omitSyncRecord; // @dynamic omitSyncRecord;
@property(retain) CalManagedPublication *publication; // @dynamic publication;
@property(retain) NSString *symbolicColorName; // @dynamic symbolicColorName;
@property(retain) NSString *title; // @dynamic title;
@property(retain) NSString *uid; // @dynamic uid;

@end

