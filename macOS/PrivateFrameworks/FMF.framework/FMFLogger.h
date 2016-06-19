//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMLoggerDelegate.h"

@class NSString;

@interface FMFLogger : NSObject <FMLoggerDelegate>
{
}

+ (id)sharedInstance;
- (void)logAtLevel:(unsigned int)arg1 facility:(id)arg2 path:(const char *)arg3 lineNumber:(long long)arg4 function:(const char *)arg5 message:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

