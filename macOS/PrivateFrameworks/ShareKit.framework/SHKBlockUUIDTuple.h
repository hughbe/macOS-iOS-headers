//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface SHKBlockUUIDTuple : NSObject
{
    CDUnknownBlockType _block;
    NSUUID *_uuid;
}

- (void).cxx_destruct;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy) CDUnknownBlockType block; // @synthesize block=_block;
- (id)description;
- (id)initWithBlock:(CDUnknownBlockType)arg1 UUID:(id)arg2;

@end

