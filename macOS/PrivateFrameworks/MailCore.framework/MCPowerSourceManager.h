//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MCPowerSourceManager : NSObject
{
    struct __CFRunLoopSource *_runLoopSource;
    BOOL _powerSourceIsLimited;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)log;
@property BOOL powerSourceIsLimited; // @synthesize powerSourceIsLimited=_powerSourceIsLimited;
- (id)init;
- (void)dealloc;

@end

