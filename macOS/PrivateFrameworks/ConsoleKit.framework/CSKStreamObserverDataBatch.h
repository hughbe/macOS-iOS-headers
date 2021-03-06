//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConsoleKit/CSKStreamDataBatch.h>

#import <ConsoleKit/NSCopying-Protocol.h>

@interface CSKStreamObserverDataBatch : CSKStreamDataBatch <NSCopying>
{
    BOOL _anchorClosestIndexIsAnchor;
    unsigned long long _direction;
    long long _anchorClosestIndex;
}

@property(nonatomic) BOOL anchorClosestIndexIsAnchor; // @synthesize anchorClosestIndexIsAnchor=_anchorClosestIndexIsAnchor;
@property(nonatomic) long long anchorClosestIndex; // @synthesize anchorClosestIndex=_anchorClosestIndex;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToObserverDataBatch:(id)arg1;
- (id)init;

@end

