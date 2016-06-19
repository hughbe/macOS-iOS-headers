//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, SFCustomFeedback, SFEndSearchFeedback, SFResultEngagementFeedback, SFSearchViewAppearFeedback, SFSearchViewDisappearFeedback, SFStartSearchFeedback, SFSuggestionEngagementFeedback;

@protocol SGDSuggestManagerSearchToShareProtocol
- (void)sendCustomFeedback:(SFCustomFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)didEngageResult:(SFResultEngagementFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)didEngageSuggestion:(SFSuggestionEngagementFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)didEndSearch:(SFEndSearchFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)didStartSearch:(SFStartSearchFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)searchViewDidDisappear:(SFSearchViewDisappearFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)searchViewDidAppear:(SFSearchViewAppearFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)queryPredictionsFeedbackReportForConversation:(NSString *)arg1 completionHandler:(void (^)(SGQPFeedbackReport *, NSError *))arg2;
- (void)queryPredictionsForConversation:(NSString *)arg1 count:(unsigned long long)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
@end

