//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBAnnotation : NSObject
{
}

+ (id)readRangedFrom:(id)arg1 index:(unsigned int)arg2 type:(int)arg3 paragraph:(id)arg4;
+ (void)readFrom:(id)arg1 at:(int)arg2 paragraph:(id)arg3;
+ (unsigned long long)findStartFrom:(id)arg1 annotation:(const struct WrdAnnotation *)arg2;

@end

