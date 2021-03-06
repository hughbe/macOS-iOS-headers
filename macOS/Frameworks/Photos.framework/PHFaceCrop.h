//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHObject.h>

@class NSData;

@interface PHFaceCrop : PHObject
{
    short _state;
    short _type;
    NSData *_resourceData;
}

+ (id)fetchFaceCropsNeedingFaceDetectionWithOptions:(id)arg1;
+ (id)fetchFaceCropsForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchFaceCropsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchFaceCropsWithOptions:(id)arg1;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)identifierCode;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyMap;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) short type; // @synthesize type=_type;
@property(readonly, nonatomic) short state; // @synthesize state=_state;
@property(readonly, nonatomic) NSData *resourceData; // @synthesize resourceData=_resourceData;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;

@end

