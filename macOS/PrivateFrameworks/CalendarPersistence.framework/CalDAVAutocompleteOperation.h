//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalDAVPrincipalSearchPropertySet, CalLimitingQueue, NSArray, NSDictionary, NSMutableArray, NSString;

@interface CalDAVAutocompleteOperation : NSObject
{
    BOOL _isCancelled;
    id <CalDAVAutocompleOperationDelegate> _delegate;
    CalDAVPrincipalSearchPropertySet *_searchSet;
    NSString *_searchString;
    NSArray *_searchTypes;
    NSString *_collectionSetName;
    NSString *_host;
    CalLimitingQueue *_limitingQueue;
    NSDictionary *_searchTerms;
    NSMutableArray *_currentResults;
}

@property BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain) NSMutableArray *currentResults; // @synthesize currentResults=_currentResults;
@property(retain) NSDictionary *searchTerms; // @synthesize searchTerms=_searchTerms;
@property(retain) CalLimitingQueue *limitingQueue; // @synthesize limitingQueue=_limitingQueue;
@property(retain) NSString *host; // @synthesize host=_host;
@property(retain) NSString *collectionSetName; // @synthesize collectionSetName=_collectionSetName;
@property(retain) NSArray *searchTypes; // @synthesize searchTypes=_searchTypes;
@property(retain) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain) CalDAVPrincipalSearchPropertySet *searchSet; // @synthesize searchSet=_searchSet;
@property(retain) id <CalDAVAutocompleOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSArray *results;
- (void)_handleOperationResults:(id)arg1;
- (void)_launchAgentSearch;
- (id)searchFor:(id)arg1 ofTypes:(id)arg2 withAccountInfoProvider:(id)arg3;
- (void)resetQuery;
- (void)cancelQuery;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

