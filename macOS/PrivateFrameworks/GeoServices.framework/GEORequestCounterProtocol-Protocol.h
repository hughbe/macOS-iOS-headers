//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@protocol GEORequestCounterProtocol <NSObject>
@property(nonatomic) BOOL countersEnabled;
- (void)clearCounters;
- (void)readRequestsPerAppSince:(NSDate *)arg1 handler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)incrementAtTime:(NSDate *)arg1 app:(NSString *)arg2 requestType:(unsigned char)arg3 result:(unsigned char)arg4;
- (void)incrementForApp:(NSString *)arg1 requestType:(unsigned char)arg2 result:(unsigned char)arg3;
@end

