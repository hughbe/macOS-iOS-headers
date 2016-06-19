//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreFoundation/ISDataProvider.h>

@class ISServiceProxy, NSArray, NSMutableArray;

@interface ISPropertyListProvider : ISDataProvider
{
    BOOL _shouldProcessAccount;
    BOOL _shouldProcessDialogs;
    BOOL _shouldProcessDownloads;
    BOOL _shouldProcessProtocol;
    BOOL _shouldTriggerDownloads;
    BOOL _shouldRedirectOnGotoAction;
    BOOL _shouldProcessDownloadsForUpToDate;
    NSMutableArray *_upToDateDownloadItemIDs;
    BOOL _didProcessDialog;
    CDUnknownBlockType _actionHandler;
    ISServiceProxy *_serviceProxy;
}

@property(readonly) ISServiceProxy *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(copy) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property BOOL shouldTriggerDownloads; // @synthesize shouldTriggerDownloads=_shouldTriggerDownloads;
@property(readonly) NSArray *upToDateDownloadItemIDs; // @synthesize upToDateDownloadItemIDs=_upToDateDownloadItemIDs;
@property BOOL shouldProcessDownloadsForUpToDate; // @synthesize shouldProcessDownloadsForUpToDate=_shouldProcessDownloadsForUpToDate;
@property BOOL shouldProcessDownloads; // @synthesize shouldProcessDownloads=_shouldProcessDownloads;
@property BOOL shouldProcessProtocol; // @synthesize shouldProcessProtocol=_shouldProcessProtocol;
@property(readonly) BOOL didProcessDialog; // @synthesize didProcessDialog=_didProcessDialog;
@property BOOL shouldProcessDialogs; // @synthesize shouldProcessDialogs=_shouldProcessDialogs;
@property BOOL shouldProcessAccount; // @synthesize shouldProcessAccount=_shouldProcessAccount;
- (void).cxx_destruct;
- (void)_processDownloads:(id)arg1 fallback:(id)arg2;
- (void)_processTriggerDownload:(id)arg1 fallback:(id)arg2;
- (BOOL)_processStoreVersion:(id)arg1 returningError:(id *)arg2;
- (void)_processStoreCredits:(id)arg1 fallback:(id)arg2;
- (void)_processPingsInDictionary:(id)arg1;
- (void)_processActions:(id)arg1 fallback:(id)arg2;
- (void)_processAccount:(id)arg1 fallback:(id)arg2;
- (BOOL)parseData:(id)arg1 returningError:(id *)arg2;
- (BOOL)processPropertyList:(id)arg1 returningError:(id *)arg2;
- (BOOL)processDialogFromPropertyList:(id)arg1 returningError:(id *)arg2;
- (id)initWithStoreClient:(id)arg1;

@end

