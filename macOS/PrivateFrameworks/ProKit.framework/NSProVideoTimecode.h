//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSProBasicTimecode.h"
#import "NSProOneDimensionalTimeTimecode.h"
#import "NSProOneDimensionalVideoTimecode.h"
#import "NSProSMPTETimecode.h"

@interface NSProVideoTimecode : NSObject <NSProBasicTimecode, NSProSMPTETimecode, NSProOneDimensionalTimeTimecode, NSProOneDimensionalVideoTimecode, NSCopying, NSCoding>
{
    struct {
        long long value;
        int timescale;
        unsigned int flags;
        long long epoch;
        long long reserved;
    } pt_time;
    double pt_seconds;
    long long pt_mode;
    id pt_customVideoModeInfo;
    struct {
        unsigned int useSeconds:1;
        unsigned int maintainFrames:1;
        unsigned int reserved:30;
    } pt_flags;
    long long pt_maintainedFrames;
}

+ (unsigned long long)timeRateForTimecodeModes:(id)arg1 otherTimeRates:(id)arg2;
+ (long long)fallbackTimecodeMode;
+ (void)setFallbackTimecodeMode:(long long)arg1;
+ (unsigned long long)minimumTickRateForMode:(long long)arg1;
+ (void)initialize;
- (void)subtractVideoFrames:(unsigned long long)arg1;
- (void)addVideoFrames:(unsigned long long)arg1;
- (unsigned long long)videoFrames;
- (void)setVideoFrames:(unsigned long long)arg1;
- (long long)signedVideoFrames;
- (void)setSignedVideoFrames:(long long)arg1;
- (id)privateTimeForVideoFrames:(unsigned long long)arg1;
- (void)subtractSeconds:(double)arg1;
- (void)addSeconds:(double)arg1;
- (void)setSeconds:(double)arg1;
- (double)seconds;
- (id)privateTimeForSeconds:(double)arg1;
- (void)addTimecodeNumberValue:(id)arg1 isNegativeDelta:(BOOL)arg2;
- (void)subtractSMPTEHours:(long long)arg1 minutes:(long long)arg2 seconds:(long long)arg3 frames:(long long)arg4 subframes:(long long)arg5 quarterFrames:(long long)arg6;
- (void)addSMPTEHours:(long long)arg1 minutes:(long long)arg2 seconds:(long long)arg3 frames:(long long)arg4 subframes:(long long)arg5 quarterFrames:(long long)arg6;
- (void)setSMPTEQuarterFrames:(long long)arg1;
- (void)setSMPTESubframes:(long long)arg1;
- (void)setSMPTEFrames:(long long)arg1;
- (void)setSMPTESeconds:(long long)arg1;
- (void)setSMPTEMinutes:(long long)arg1;
- (void)setSMPTEHours:(long long)arg1;
- (long long)SMPTEQuarterFrames;
- (long long)SMPTESubframes;
- (long long)SMPTEFrames;
- (long long)SMPTESeconds;
- (long long)SMPTEMinutes;
- (long long)SMPTEHours;
- (void)getSMPTEHours:(long long *)arg1 minutes:(long long *)arg2 seconds:(long long *)arg3 frames:(long long *)arg4 subframes:(long long *)arg5 quarterFrames:(long long *)arg6;
- (BOOL)isDropFrame;
- (BOOL)isDuration;
- (double)videoFrameRate;
- (double)nominalFrameRate;
- (void)privateAddSMPTEHours:(long long)arg1 minutes:(long long)arg2 seconds:(long long)arg3 frames:(long long)arg4 subframes:(long long)arg5 quarterFrames:(long long)arg6 isNegativeDelta:(BOOL)arg7;
- (void)privateAddHMSFs:(struct _HMSFs)arg1 isNegativeDelta:(BOOL)arg2;
- (long long)privateDropFrameAdjustmentForHMFSsBeforeChange:(struct _HMSFs)arg1 afterChange:(struct _HMSFs)arg2 change:(struct _HMSFs)arg3;
- (struct _HMSFs)privateNormalizeHMSFs:(struct _HMSFs)arg1;
- (id)privateTimeForHours:(long long)arg1 minutes:(long long)arg2 seconds:(long long)arg3 frames:(long long)arg4 subframes:(long long)arg5 quarterFrames:(long long)arg6;
- (void)privateSetSMPTEHours:(long long)arg1 minutes:(long long)arg2 seconds:(long long)arg3 frames:(long long)arg4 fractionalFrames:(double)arg5;
- (void)privateGetSMPTEHours:(long long *)arg1 minutes:(long long *)arg2 seconds:(long long *)arg3 frames:(long long *)arg4 fractionalFrames:(double *)arg5;
- (void)privateSetSMPTEQuarterFrames:(long long)arg1;
- (void)privateSetSMPTESubframes:(long long)arg1;
- (void)privateSetSMPTEFrames:(long long)arg1;
- (void)privateSetSMPTESeconds:(long long)arg1;
- (void)privateSetSMPTEMinutes:(long long)arg1;
- (void)privateSetSMPTEHours:(long long)arg1;
- (double)privateVideoFramesFractionalPart;
- (unsigned long long)privateWholeVideoFrames;
- (void)privateClampIntegerValue:(long long *)arg1 min:(long long)arg2 max:(long long)arg3 warn:(BOOL)arg4;
- (double)_doubleFrameTime;
- (unsigned int)privateFramesPerMinute;
- (unsigned int)privateFramesPerTenMinutes;
- (unsigned int)privateFramesPerHour;
- (void)_normalizeTimeScaleForFrameRateIfNecessary;
- (void)takeConvertedValueFromTimecode:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)_compareDouble:(id)arg1;
- (void)clearTimecode;
- (void)setIsNegative:(BOOL)arg1;
- (BOOL)isNegative;
- (BOOL)useSeconds;
- (unsigned long long)timeRate;
- (void)setTimeRate:(unsigned long long)arg1;
- (id)timecodeNumberValue;
- (void)setTimecodeNumberValue:(id)arg1;
- (id)description;
- (void)setCustomVideoFrameRate:(double)arg1;
- (id)timecodePreservingSMPTEWithMode:(long long)arg1;
- (long long)timecodeMode;
- (void)setTimecodeMode:(long long)arg1;
- (CDStruct_198678f7)timeValue;
- (void)setTimeValue:(CDStruct_198678f7)arg1;
- (id)initWithTimecodeNumberValue:(id)arg1 timeRate:(unsigned long long)arg2 timecodeMode:(long long)arg3;
- (id)initWithTime:(CDStruct_198678f7)arg1 timecodeMode:(long long)arg2;
- (id)initWithTime:(CDStruct_198678f7)arg1 frameDuration:(CDStruct_198678f7)arg2 dropFrame:(long long)arg3;
- (id)initWithTime:(CDStruct_198678f7)arg1 frameDuration:(CDStruct_198678f7)arg2;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initForCopy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CDStruct_198678f7)_figTimeFromOldTimeValue:(unsigned long long)arg1 rate:(unsigned long long)arg2 isNegative:(BOOL)arg3;
- (int)_bestTimeScale;
- (int)_timeScaleForTimeRate:(unsigned long long)arg1;
- (void)privateNormalizeSecondsValue;

@end

