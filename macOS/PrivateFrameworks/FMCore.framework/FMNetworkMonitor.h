//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NWPathEvaluator;

@interface FMNetworkMonitor : NSObject
{
    NWPathEvaluator *_evaluator;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NWPathEvaluator *evaluator; // @synthesize evaluator=_evaluator;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)isNetworkUp;
- (BOOL)isMonitoring;
- (void)stopMonitoring;
- (void)startMonitoring;

@end

