//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _MTLIndirectDrawIndexedPatchesArguments : NSObject
{
    unsigned long long _numberOfPatchControlPoints;
    unsigned long long _patchStart;
    unsigned long long _patchCount;
    void *_patchIndexBufferVirtualAddress;
    unsigned long long _patchIndexBufferOffset;
    void *_controlPointIndexBufferVirtualAddress;
    unsigned long long _controlPointIndexBufferOffset;
    unsigned long long _instanceCount;
    unsigned long long _baseInstance;
}

@property(nonatomic) unsigned long long baseInstance; // @synthesize baseInstance=_baseInstance;
@property(nonatomic) unsigned long long instanceCount; // @synthesize instanceCount=_instanceCount;
@property(nonatomic) void *controlPointIndexBufferVirtualAddress; // @synthesize controlPointIndexBufferVirtualAddress=_controlPointIndexBufferVirtualAddress;
@property(nonatomic) void *patchIndexBufferVirtualAddress; // @synthesize patchIndexBufferVirtualAddress=_patchIndexBufferVirtualAddress;
@property(nonatomic) unsigned long long patchCount; // @synthesize patchCount=_patchCount;
@property(nonatomic) unsigned long long patchStart; // @synthesize patchStart=_patchStart;
@property(nonatomic) unsigned long long numberOfPatchControlPoints; // @synthesize numberOfPatchControlPoints=_numberOfPatchControlPoints;

@end

