//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMPingStatistics, NSMutableArray, NSMutableString, _IMPingPacketData;

@interface _IMPingStatisticsCollector : NSObject
{
    _IMPingPacketData *_timestampArray[160];
    NSMutableArray *_roundTriptimes;
    NSMutableString *_stringToWriteToFile;
    IMPingStatistics *_stats;
}

- (double)_computeStandardDeviation:(id)arg1 numPings:(int)arg2 averageRTT:(double)arg3;
- (double)_computeMedianTime:(id)arg1;
- (id)pingStatsForLastNSeconds:(double)arg1;
- (id)pingStats;
- (BOOL)logStatsToFile:(id)arg1 error:(id *)arg2;
- (void)timeoutOldSequenceNumbers:(double)arg1;
- (void)addEchoReplyPacket:(int)arg1;
- (struct timeval)timeSentForPacket:(int)arg1;
- (void)dealloc;
- (void)addEchoPacket:(int)arg1 packetTimestamp:(struct timeval)arg2 error:(int)arg3;
- (id)init;

@end

