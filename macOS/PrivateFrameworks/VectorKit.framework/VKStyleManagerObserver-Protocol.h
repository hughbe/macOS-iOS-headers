//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol VKStyleManagerObserver <NSObject>
+ (BOOL)reloadOnStylesheetChange;
@property(readonly, nonatomic) shared_ptr_a3c46825 styleManager;

@optional
- (void)finishStyleBlend;
- (void)stylesheetDidReload;
- (void)stylesheetDoneChanging;
- (void)stylesheetDidChange;
- (void)stylesheetTransitionDidProgress;
- (void)stylesheetWillChange;
- (void)stylesheetWillTransition:(struct DisplayStyle)arg1;
- (void)prepareForStylesheetTransitionToMapDisplayStyle:(struct DisplayStyle)arg1 withReadinessBlock:(void (^)(id <VKStyleManagerObserver>))arg2;
@end

