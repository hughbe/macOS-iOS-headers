//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFUserUtteranceSelectionResults, AceObject<SAAceCommand>, NSArray, NSBundle, NSString, NSURL, NSUUID, NSView, NSViewController, SASSpeechRecognized, SVSTranscriptViewController, SiriUICard;

@protocol SVSTranscriptViewControllerDelegate <NSObject>
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 stashSnippetControllerCard:(SiriUICard *)arg2;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 didShowSnippetWithIdentifier:(NSUUID *)arg2 metricsContext:(NSString *)arg3 forInterval:(double)arg4;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 didScrollForInterval:(double)arg2;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 didEditSpeechRecognized:(SASSpeechRecognized *)arg2 forInterval:(double)arg3;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 shouldPresentPicker:(NSViewController *)arg2 completion:(void (^)(BOOL))arg3;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 willDismissViewController:(NSViewController *)arg2;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 willPresentViewController:(NSViewController *)arg2;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 setStatusViewHidden:(BOOL)arg2;
- (void)cancelSpeakingForTranscriptViewController:(SVSTranscriptViewController *)arg1;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 speakText:(NSString *)arg2 isPhonetic:(BOOL)arg3 completion:(void (^)(void))arg4;
- (void)cancelRequestForTranscriptViewController:(SVSTranscriptViewController *)arg1;
- (void)transcriptViewControllerWillBeginEditing:(SVSTranscriptViewController *)arg1;
- (BOOL)transcriptViewControllerShouldPreventUserInteraction:(SVSTranscriptViewController *)arg1;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 showSiriStatusWithText:(NSString *)arg2 speakableDescription:(NSString *)arg3;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 didCorrectRecognition:(NSString *)arg2 correctionIdentifier:(id)arg3 forItemAtIndex:(long long)arg4 userSelectionResults:(AFUserUtteranceSelectionResults *)arg5;
- (void)transcriptDidPunchout;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 openURL:(NSURL *)arg2 conversationItemIdentifier:(NSUUID *)arg3 completion:(void (^)(BOOL))arg4;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 performAceCommand:(AceObject<SAAceCommand> *)arg2 conversationItemIdentifier:(NSUUID *)arg3 completion:(void (^)(BOOL))arg4;
- (NSBundle *)effectiveCoreLocationBundleForTranscriptViewController:(SVSTranscriptViewController *)arg1;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 didPresentConversationItemsWithIdentifiers:(NSArray *)arg2;
- (void)transcriptViewControllerDidChangeContentHeight:(SVSTranscriptViewController *)arg1;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 didHideVibrantView:(NSView *)arg2;
- (void)transcriptViewControllerDidShowSuggestions:(SVSTranscriptViewController *)arg1;
- (BOOL)transcriptViewControllerWillShowSuggestions:(SVSTranscriptViewController *)arg1;
- (long long)initialDisplayTypeForTranscriptViewController:(SVSTranscriptViewController *)arg1;
- (double)contentWidthForTranscriptViewController:(SVSTranscriptViewController *)arg1;
@end

