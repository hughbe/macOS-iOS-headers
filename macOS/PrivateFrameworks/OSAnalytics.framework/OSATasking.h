//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface OSATasking : NSObject
{
}

+ (void)setCRKeyToRandomValue;
+ (id)selectConfigFromBlob:(id)arg1;
+ (BOOL)preference:(id)arg1 alreadySetInInstructions:(id)arg2;
+ (id)normalizeInstructions:(id)arg1;
+ (id)getDefaultTasking;
+ (BOOL)shouldApplyPreference:(id)arg1;
+ (id)getAvailableTaskingRoutings;
+ (id)getInstalledTaskIds;
+ (id)applyTasking:(id)arg1 taskId:(id)arg2 fromBlob:(id)arg3;
+ (id)proxyTasking:(id)arg1 taskId:(id)arg2 usingConfig:(id)arg3 fromBlob:(id)arg4;

@end

