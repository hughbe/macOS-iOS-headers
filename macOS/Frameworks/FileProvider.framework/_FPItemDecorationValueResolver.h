//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FPItem;

__attribute__((visibility("hidden")))
@interface _FPItemDecorationValueResolver : NSObject
{
    FPItem *_item;
    unsigned long long _style;
}

+ (id)resolverForItem:(id)arg1 style:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)valueForKey:(id)arg1;
- (id)initWithItem:(id)arg1 style:(unsigned long long)arg2;

@end

