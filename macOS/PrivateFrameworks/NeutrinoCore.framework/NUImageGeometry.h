//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUTaggedSpaceMapping-Protocol.h>

@protocol NUTaggedSpaceMapping;

@interface NUImageGeometry : NSObject <NUTaggedSpaceMapping>
{
    long long _orientation;
    id <NUTaggedSpaceMapping> _spaceMap;
    CDStruct_1e2b2e48 _renderScale;
    CDStruct_996ac03c _extent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <NUTaggedSpaceMapping> spaceMap; // @synthesize spaceMap=_spaceMap;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) CDStruct_912cb5d2 renderScale; // @synthesize renderScale=_renderScale;
@property(readonly, nonatomic) CDStruct_996ac03c extent; // @synthesize extent=_extent;
- (id)description;
@property(readonly, nonatomic) CDStruct_912cb5d2 size;
@property(readonly, nonatomic) CDStruct_912cb5d2 scaledSize;
@property(readonly, nonatomic) struct CGRect scaledExtent;
- (id)transformWithSourceSpace:(id)arg1 destinationSpace:(id)arg2 error:(out id *)arg3;
- (id)initWithExtent:(CDStruct_996ac03c)arg1 renderScale:(CDStruct_912cb5d2)arg2 orientation:(long long)arg3 spaceMap:(id)arg4;
- (id)initWithExtent:(CDStruct_996ac03c)arg1 renderScale:(CDStruct_912cb5d2)arg2 orientation:(long long)arg3;
- (id)initWithExtent:(CDStruct_996ac03c)arg1 renderScale:(CDStruct_912cb5d2)arg2;
- (id)init;

@end

