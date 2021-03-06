//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet, NSScrubberFlowLayout;

__attribute__((visibility("hidden")))
@interface NSScrubberFlowLayoutSupport : NSObject
{
    id _layout;
    BOOL _dynamicSizes;
    struct CGRect *_frames;
    long long _frameCount;
    NSMutableIndexSet *_dirtyIndexes;
}

- (void).cxx_destruct;
@property BOOL dynamicSizes; // @synthesize dynamicSizes=_dynamicSizes;
- (void)invalidateItemsAtIndexes:(id)arg1;
- (void)invalidateEverything;
- (long long)_indexOfItemAtLocation:(double)arg1;
- (void)enumerateFramesForItemsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGRect)frameForItemAtIndex:(long long)arg1;
@property(readonly) double contentWidth;
- (void)ensureValidLayout;
@property(nonatomic) __weak NSScrubberFlowLayout *scrubberLayout;
- (void)dealloc;
- (id)init;

@end

