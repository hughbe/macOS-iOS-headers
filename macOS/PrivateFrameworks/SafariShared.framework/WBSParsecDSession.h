//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PARSessionDelegate.h"
#import "WBSParsecSearchSession.h"

@class NSObject<OS_dispatch_queue>, NSString, PARSession, WBSCompletionQuery, WBSParsecDFeedbackDispatcher, WBSParsecSearchClient;

@interface WBSParsecDSession : NSObject <PARSessionDelegate, WBSParsecSearchSession>
{
    NSObject<OS_dispatch_queue> *_requestProcessingQueue;
    WBSParsecDFeedbackDispatcher *_feedbackDispatcher;
    long long _currentQueryID;
    BOOL _valid;
    id <WBSParsecSearchSessionDelegate> _delegate;
    WBSCompletionQuery *_currentQuery;
    WBSParsecSearchClient *_client;
    double _uiScale;
    PARSession *_parsecdSession;
}

+ (BOOL)shouldUseSearchFoundation;
+ (id)sharedCorrectionsProcessor;
+ (id)sharedDomainPolicyProvider;
+ (id)sharedPARSession;
@property(retain, nonatomic) PARSession *parsecdSession; // @synthesize parsecdSession=_parsecdSession;
@property(nonatomic, setter=setUIScale:) double uiScale; // @synthesize uiScale=_uiScale;
@property(readonly, nonatomic) WBSParsecSearchClient *client; // @synthesize client=_client;
@property(readonly, nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property(retain, nonatomic) WBSCompletionQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(nonatomic) __weak id <WBSParsecSearchSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateAutoFillCorrectionSetsIfNeededFromNewBag:(id)arg1;
- (void)_updateAutoFillTLDsIfNeededFromNewBag:(id)arg1;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
@property(readonly, nonatomic) id <WBSParsecFeedbackDispatcher> feedbackDispatcher;
- (void)fetchCardDetailsForResult:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_didReceiveResponse:(id)arg1 error:(id)arg2 forTask:(id)arg3 query:(id)arg4;
- (id)_parsecResultsFromRawResponse:(id)arg1 identifiersToSFSearchResults:(id)arg2;
- (id)_parsecResultsFromResponse:(id)arg1;
- (id)_initWithParsecdSession:(id)arg1 client:(id)arg2;
- (id)initWithParsecdSession:(id)arg1;
- (id)initWithClient:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

