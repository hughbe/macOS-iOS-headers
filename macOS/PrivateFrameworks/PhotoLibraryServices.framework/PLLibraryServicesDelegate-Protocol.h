//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, PLLibraryServicesManager;

@protocol PLLibraryServicesDelegate
- (void)handleCompletedAllOperationsForLibraryState:(long long)arg1;
- (NSArray *)operationsForLibraryStateTransition:(long long)arg1;
- (id)initWithLibraryServicesManager:(PLLibraryServicesManager *)arg1;
@end

