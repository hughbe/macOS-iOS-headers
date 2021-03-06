//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@class WBSCompletionQuery, WBSParsecABGroupManager;
@protocol WBSParsecFeedbackDispatcher, WBSParsecSearchSessionDelegate;

@protocol WBSParsecSearchSession <NSObject>
@property(readonly, nonatomic, getter=isABTestingEnabled) BOOL abTestingEnabled;
@property(readonly, nonatomic) WBSParsecABGroupManager *abGroupManager;
@property(readonly, nonatomic) id <WBSParsecFeedbackDispatcher> feedbackDispatcher;
@property(nonatomic, setter=setUIScale:) double uiScale;
@property(retain, nonatomic) WBSCompletionQuery *currentQuery;
@property(nonatomic) __weak id <WBSParsecSearchSessionDelegate> delegate;
@end

