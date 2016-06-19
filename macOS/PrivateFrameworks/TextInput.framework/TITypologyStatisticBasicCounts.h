//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInput/TITypologyStatisticCurrentAutocorrections.h>

@class NSMutableArray, NSMutableString;

@interface TITypologyStatisticBasicCounts : TITypologyStatisticCurrentAutocorrections
{
    long long _touchCount;
    long long _characterCount;
    long long _predictedCharacterCount;
    long long _backspaceCount;
    long long _autocorrectionCount;
    long long _rejectedCandidateCount;
    long long _backspaceIntoAutocorrectionCount;
    long long _predictiveSelectionCount;
    NSMutableString *_recentText;
    NSMutableArray *_recentAutocorrectionLocations;
}

@property(readonly, nonatomic) NSMutableArray *recentAutocorrectionLocations; // @synthesize recentAutocorrectionLocations=_recentAutocorrectionLocations;
@property(readonly, nonatomic) NSMutableString *recentText; // @synthesize recentText=_recentText;
@property(readonly, nonatomic) long long predictiveSelectionCount; // @synthesize predictiveSelectionCount=_predictiveSelectionCount;
@property(readonly, nonatomic) long long backspaceIntoAutocorrectionCount; // @synthesize backspaceIntoAutocorrectionCount=_backspaceIntoAutocorrectionCount;
@property(readonly, nonatomic) long long rejectedCandidateCount; // @synthesize rejectedCandidateCount=_rejectedCandidateCount;
@property(readonly, nonatomic) long long autocorrectionCount; // @synthesize autocorrectionCount=_autocorrectionCount;
@property(readonly, nonatomic) long long backspaceCount; // @synthesize backspaceCount=_backspaceCount;
@property(readonly, nonatomic) long long predictedCharacterCount; // @synthesize predictedCharacterCount=_predictedCharacterCount;
@property(readonly, nonatomic) long long characterCount; // @synthesize characterCount=_characterCount;
@property(readonly, nonatomic) long long touchCount; // @synthesize touchCount=_touchCount;
- (void)visitRecordCandidateRejected:(id)arg1;
- (void)visitRecordTextAccepted:(id)arg1;
- (void)visitRecordSkipHitTest:(id)arg1;
- (void)visitRecordHitTest:(id)arg1;
- (void)visitRecordKeyboardInput:(id)arg1;
- (void)visitRecordSync:(id)arg1;
- (void)updateTextWithAcceptedCandidate:(id)arg1;
- (void)handleTouch:(id)arg1;
- (id)aggregateReport;
- (id)structuredReport;
- (void)dealloc;
- (id)init;

@end

