//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSLock, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

@interface GKJoinGroup : NSObject
{
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSMutableArray *_leftNotifiers;
    NSMutableArray *_rightNotifiers;
    NSMutableArray *_leftResults;
    NSMutableArray *_rightResults;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSLock *_lock;
    NSError *_error;
    NSString *_name;
}

+ (id)joinGroupWithName:(id)arg1 taregetQueue:(id)arg2;
+ (id)joinGroupForTargetQueue:(id)arg1;
+ (id)joinGroupWithName:(id)arg1;
+ (id)joinGroup;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSMutableArray *rightResults; // @synthesize rightResults=_rightResults;
@property(retain) NSMutableArray *leftResults; // @synthesize leftResults=_leftResults;
@property(retain, nonatomic) NSMutableArray *rightNotifiers; // @synthesize rightNotifiers=_rightNotifiers;
@property(retain, nonatomic) NSMutableArray *leftNotifiers; // @synthesize leftNotifiers=_leftNotifiers;
@property(nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
- (void)applyUpdates;
- (void)wait;
- (void)joinRight:(CDUnknownBlockType)arg1;
- (void)joinLeft:(CDUnknownBlockType)arg1;
- (void)join:(CDUnknownBlockType)arg1;
- (void)aggregateJoinRight:(CDUnknownBlockType)arg1;
- (void)aggregateJoinLeft:(CDUnknownBlockType)arg1;
- (void)aggregateJoin:(CDUnknownBlockType)arg1;
- (void)_join:(CDUnknownBlockType)arg1;
- (void)performRight:(CDUnknownBlockType)arg1;
- (void)performLeft:(CDUnknownBlockType)arg1;
- (void)performRightOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)performLeftOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 targetQueue:(id)arg2;

@end

