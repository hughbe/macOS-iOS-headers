//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/PXDataSectionManagerChangeObserver-Protocol.h>

@class NSArray, NSString;

@interface PXStackedDataSourceManager : PXSectionedDataSourceManager <PXDataSectionManagerChangeObserver>
{
    BOOL _initialDataSourceCreated;
    NSArray *_dataSectionManagers;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL initialDataSourceCreated; // @synthesize initialDataSourceCreated=_initialDataSourceCreated;
@property(copy, nonatomic) NSArray *dataSectionManagers; // @synthesize dataSectionManagers=_dataSectionManagers;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)createInitialDataSource;
- (void)_updateDataSourceWithSectionChanges:(id)arg1 itemChanges:(id)arg2;
- (id)_newDataSource;
- (void)_unregisterAsChangeObserverForDataSectionManagers:(id)arg1;
- (void)_registerAsChangeObserverForDataSectionManagers:(id)arg1;
- (id)initWithDataSectionManagers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

