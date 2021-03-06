//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _CDAutoSuConfig : NSObject
{
    BOOL _alwaysFallBackToDefault;
    BOOL _alwaysReturnUnlockNow;
    BOOL _allowUnlockBeforeNow;
    int _restrictionStartInSlot;
    int _restrictionEndInSlot;
    int _suStartDefaultTime;
    int _suEndDefaultTimeOffsetFromSuStart;
    int _unlockMarginInSlot;
    double _unlockThreshold;
    double _startThreshold;
    double _endThreshold;
}

+ (id)config;
@property(nonatomic) int unlockMarginInSlot; // @synthesize unlockMarginInSlot=_unlockMarginInSlot;
@property(nonatomic) double endThreshold; // @synthesize endThreshold=_endThreshold;
@property(nonatomic) double startThreshold; // @synthesize startThreshold=_startThreshold;
@property(nonatomic) double unlockThreshold; // @synthesize unlockThreshold=_unlockThreshold;
@property(nonatomic) BOOL allowUnlockBeforeNow; // @synthesize allowUnlockBeforeNow=_allowUnlockBeforeNow;
@property(nonatomic) BOOL alwaysReturnUnlockNow; // @synthesize alwaysReturnUnlockNow=_alwaysReturnUnlockNow;
@property(nonatomic) BOOL alwaysFallBackToDefault; // @synthesize alwaysFallBackToDefault=_alwaysFallBackToDefault;
@property(nonatomic) int suEndDefaultTimeOffsetFromSuStart; // @synthesize suEndDefaultTimeOffsetFromSuStart=_suEndDefaultTimeOffsetFromSuStart;
@property(nonatomic) int suStartDefaultTime; // @synthesize suStartDefaultTime=_suStartDefaultTime;
@property(nonatomic) int restrictionEndInSlot; // @synthesize restrictionEndInSlot=_restrictionEndInSlot;
@property(nonatomic) int restrictionStartInSlot; // @synthesize restrictionStartInSlot=_restrictionStartInSlot;
- (void)setParam;
- (BOOL)validParam;
- (int)readConfig;

@end

