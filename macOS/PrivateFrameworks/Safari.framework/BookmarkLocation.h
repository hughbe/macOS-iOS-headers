//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BookmarkLocation : NSObject
{
    NSString *_parentUUID;
    unsigned long long _childIndex;
}

- (void).cxx_destruct;
@property unsigned long long childIndex; // @synthesize childIndex=_childIndex;
@property(copy) NSString *parentUUID; // @synthesize parentUUID=_parentUUID;

@end

