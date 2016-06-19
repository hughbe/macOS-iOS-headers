//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol CNSchedulerProvider <NSObject>
@property(readonly, nonatomic) id <CNScheduler> immediateScheduler;
@property(readonly, nonatomic) id <CNScheduler> mainThreadScheduler;
@property(readonly, nonatomic) id <CNScheduler> backgroundScheduler;
- (id <CNScheduler>)newSynchronousSerialSchedulerWithName:(NSString *)arg1;
- (id <CNScheduler>)newSerialSchedulerWithName:(NSString *)arg1;
- (id <CNScheduler>)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;
@end

