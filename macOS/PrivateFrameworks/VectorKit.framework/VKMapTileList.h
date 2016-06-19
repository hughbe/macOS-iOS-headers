//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VKMapTileList : NSObject
{
    struct vector<VKMapTile *, std::__1::allocator<VKMapTile *>> _list;
    float _maximumStyleZ;
}

@property(readonly, nonatomic) float maximumStyleZ; // @synthesize maximumStyleZ=_maximumStyleZ;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)consolidateList;
- (void)clearList;
- (void)addTileToList:(id)arg1;
@property(readonly, nonatomic) unsigned long long numTiles;
@property(readonly, nonatomic) id *tileList;
- (id)init;

@end

