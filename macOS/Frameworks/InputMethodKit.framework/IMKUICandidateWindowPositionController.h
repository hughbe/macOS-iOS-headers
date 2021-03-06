//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMKUICandidateWindowController, NSAttributedString;
@protocol IMKTextInput><NSObject;

@interface IMKUICandidateWindowPositionController : NSObject
{
    long long _alignment;
    id <IMKTextInput><NSObject> _client;
    IMKUICandidateWindowController *_candidateController;
    long long _effectiveHorizontalPositionHint;
    unsigned long long _effectivePositionType;
    BOOL _forceNoIncrementalSearchPositioning;
    NSAttributedString *_inlineText;
    BOOL _isUsingIncrementalSearch;
    unsigned long long _preferredPositionType;
    BOOL _rightAlignWhenOverflowingRight;
    struct CGRect _screenVisibleFrame;
    struct CGRect _textFrame;
    double _textRectMargin;
    BOOL _updatePositionOnEachKeyPress;
    struct CGRect _windowFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect windowFrame; // @synthesize windowFrame=_windowFrame;
@property(nonatomic) BOOL updatePositionOnEachKeyPress; // @synthesize updatePositionOnEachKeyPress=_updatePositionOnEachKeyPress;
@property(nonatomic) double textRectMargin; // @synthesize textRectMargin=_textRectMargin;
@property(nonatomic) struct CGRect screenVisibleFrame; // @synthesize screenVisibleFrame=_screenVisibleFrame;
@property(nonatomic) BOOL rightAlignWhenOverflowingRight; // @synthesize rightAlignWhenOverflowingRight=_rightAlignWhenOverflowingRight;
@property(nonatomic) unsigned long long preferredPositionType; // @synthesize preferredPositionType=_preferredPositionType;
@property(nonatomic) struct CGRect textFrame; // @synthesize textFrame=_textFrame;
@property(nonatomic) BOOL isUsingIncrementalSearch; // @synthesize isUsingIncrementalSearch=_isUsingIncrementalSearch;
@property(copy, nonatomic) NSAttributedString *inlineText; // @synthesize inlineText=_inlineText;
@property(retain, nonatomic) id client; // @synthesize client=_client;
@property(nonatomic) BOOL forceNoIncrementalSearchPositioning; // @synthesize forceNoIncrementalSearchPositioning=_forceNoIncrementalSearchPositioning;
@property(nonatomic) unsigned long long effectivePositionType; // @synthesize effectivePositionType=_effectivePositionType;
@property(nonatomic) long long effectiveHorizontalPositionHint; // @synthesize effectiveHorizontalPositionHint=_effectiveHorizontalPositionHint;
@property(nonatomic) __weak IMKUICandidateWindowController *candidateController; // @synthesize candidateController=_candidateController;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(readonly, nonatomic) struct CGPoint topWindowPosition;
- (struct CGRect)frameOfCurrentlyVisibleScreenUsingConstrainedFrame:(BOOL)arg1;
- (struct CGPoint)positionWithPreferenceArray:(id)arg1 inlineAlignment:(unsigned long long)arg2;
- (struct CGPoint)positionForWindowInLocation:(unsigned long long)arg1 textFrame:(struct CGRect)arg2 inlineAlignment:(unsigned long long)arg3;
- (BOOL)canFitWindowInLocation:(unsigned long long)arg1 textFrame:(struct CGRect)arg2;
- (struct CGRect)inlineFrameWithClient:(id)arg1;
- (id)init;

@end

