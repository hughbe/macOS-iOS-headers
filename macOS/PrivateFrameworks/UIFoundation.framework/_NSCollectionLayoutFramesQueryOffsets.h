//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSCollectionLayoutFramesQueryOffsets : NSObject
{
    long long _indexOffset;
    long long _supplementaryIndexOffset;
    struct CGPoint _frameOffset;
}

@property(nonatomic) long long supplementaryIndexOffset; // @synthesize supplementaryIndexOffset=_supplementaryIndexOffset;
@property(nonatomic) long long indexOffset; // @synthesize indexOffset=_indexOffset;
@property(nonatomic) struct CGPoint frameOffset; // @synthesize frameOffset=_frameOffset;
- (id)initWithFrameOffset:(struct CGPoint)arg1 indexOffset:(long long)arg2 supplementaryIndexOffset:(long long)arg3;
- (id)init;

@end

