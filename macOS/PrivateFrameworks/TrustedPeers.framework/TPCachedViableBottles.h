//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TPCachedViableBottles : NSObject
{
    NSArray *_viableBottles;
    NSArray *_partialBottles;
}

- (void).cxx_destruct;
@property(readonly, retain) NSArray *partialBottles; // @synthesize partialBottles=_partialBottles;
@property(readonly, retain) NSArray *viableBottles; // @synthesize viableBottles=_viableBottles;
- (id)initWithViableBottles:(id)arg1 partialBottles:(id)arg2;

@end

