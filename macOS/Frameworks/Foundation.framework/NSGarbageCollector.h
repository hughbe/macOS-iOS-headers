//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSGarbageCollector : NSObject
{
}

+ (id)defaultCollector;
- (struct _NSZone *)zone;
- (void)enableCollectorForPointer:(const void *)arg1;
- (void)disableCollectorForPointer:(const void *)arg1;
- (void)collectExhaustively;
- (void)collectIfNeeded;
- (BOOL)isCollecting;
- (BOOL)isEnabled;
- (void)enable;
- (void)disable;

@end

