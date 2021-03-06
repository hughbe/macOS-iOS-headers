//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNPersonsModel.h>

#import <Vision/VNPersonsModelDataSource-Protocol.h>

@class NSString, VNPersonsModelFaceModel;

__attribute__((visibility("hidden")))
@interface VNReadOnlyPersonsModel : VNPersonsModel <VNPersonsModelDataSource>
{
    VNPersonsModelFaceModel *_faceModel_DO_NOT_ACCESS_DIRECTLY;
}

+ (id)newModelFromVersion:(unsigned long long)arg1 objects:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (id)personsModel:(id)arg1 faceObservationAtIndex:(unsigned long long)arg2 forPersonAtIndex:(unsigned long long)arg3;
- (unsigned long long)personsModel:(id)arg1 numberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)personsModel:(id)arg1 indexOfPersonWithUniqueIdentifier:(id)arg2;
- (id)personsModel:(id)arg1 uniqueIdentifierOfPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPersonsInPersonsModel:(id)arg1;
- (id)faceCountsForAllPersons;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;
- (id)personUniqueIdentifiers;
- (unsigned long long)personCount;
- (id)upToDateFaceModelWithCanceller:(id)arg1 error:(id *)arg2;
- (id)initWithConfiguration:(id)arg1 faceModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

