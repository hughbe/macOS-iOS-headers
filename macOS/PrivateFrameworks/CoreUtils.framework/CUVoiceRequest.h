//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CUVoiceRequest : NSObject
{
    unsigned int _flags;
    CDUnknownBlockType _completion;
    id _owner;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id owner; // @synthesize owner=_owner;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;

@end

