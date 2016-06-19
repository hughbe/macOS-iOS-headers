//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class OITSUCustomFormatData;

__attribute__((visibility("hidden")))
@interface OITSUCustomFormatCondition : NSObject <NSCopying>
{
    int mConditionType;
    double mConditionValue;
    OITSUCustomFormatData *mData;
}

@property(readonly, nonatomic) OITSUCustomFormatData *data; // @synthesize data=mData;
@property(readonly, nonatomic) double conditionValue; // @synthesize conditionValue=mConditionValue;
@property(readonly, nonatomic) int conditionType; // @synthesize conditionType=mConditionType;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1 value:(double)arg2 data:(id)arg3;
- (id)init;

@end

