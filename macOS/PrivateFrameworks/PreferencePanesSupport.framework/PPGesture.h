//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSColor, NSNumber, NSString;

@interface PPGesture : NSObject
{
    NSString *mNibFileName;
    NSString *mMovieName;
    NSString *mMovieChapterName;
    NSString *mName;
    NSString *mNote;
    NSString *mLabel;
    NSArray *mChoicesArray;
    long long mState;
    BOOL mEnabled;
    BOOL mIsGroup;
    BOOL mHasCheckbox;
    BOOL mHasOptions;
    BOOL mHasChoices;
    BOOL mSupportsMixedState;
    NSNumber *mChoicePopupAlignment;
}

@property(readonly) BOOL hasChoices; // @synthesize hasChoices=mHasChoices;
@property(readonly) NSString *movieChapterName; // @synthesize movieChapterName=mMovieChapterName;
@property(readonly) NSNumber *choicePopupAlignment; // @synthesize choicePopupAlignment=mChoicePopupAlignment;
@property(readonly) BOOL supportsMixedState; // @synthesize supportsMixedState=mSupportsMixedState;
@property(readonly) BOOL hasOptions; // @synthesize hasOptions=mHasOptions;
@property(readonly) BOOL hasCheckbox; // @synthesize hasCheckbox=mHasCheckbox;
@property long long state; // @synthesize state=mState;
@property(readonly, getter=isGroup) BOOL group; // @synthesize group=mIsGroup;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=mEnabled;
@property(retain) NSString *label; // @synthesize label=mLabel;
@property(readonly) NSString *note; // @synthesize note=mNote;
@property(readonly) NSString *name; // @synthesize name=mName;
@property(readonly) NSArray *movieChapterNames; // @dynamic movieChapterNames;
- (id)description;
- (void)adjustUI;
- (BOOL)refreshIfNeeded;
- (void)choices:(id)arg1;
- (void)options:(id)arg1;
- (void)enableGesture:(id)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (void)readPreferences;
@property(readonly) NSColor *nameColor;
- (void)prepareChoicePopup:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 andReadPreferences:(BOOL)arg2;
- (id)initWithDictionary:(id)arg1;

@end

