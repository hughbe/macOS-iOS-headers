//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_os_log>;

@interface MBLogManager : NSObject
{
    NSObject<OS_os_log> *_connObj;
}

+ (id)sharedManager;
@property(retain) NSObject<OS_os_log> *connObj; // @synthesize connObj=_connObj;
- (void).cxx_destruct;
- (void)logType:(int)arg1 inFunction:(const char *)arg2 atLine:(int)arg3 withFormat:(id)arg4;
- (void)logType:(int)arg1 inFunction:(const char *)arg2 atLine:(int)arg3 withString:(id)arg4;
- (id)init;

@end

