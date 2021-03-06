//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScriptingBridge/SBApplication.h>

@class NSString;

@interface _AMKeynote5Application : SBApplication
{
}

- (void)stopSlideshow;
- (void)startFrom;
- (void)start;
- (void)showPrevious;
- (void)showNext;
- (void)resumeSlideshow;
- (void)pauseSlideshow;
- (void)advance;
- (void)showSlideSwitcher;
- (void)pause;
- (void)moveSlideSwitcherForward;
- (void)moveSlideSwitcherBackward;
- (void)GetURL:(id)arg1;
- (void)cancelSlideSwitcher;
- (void)acceptSlideSwitcher;
- (void)quitSaving:(int)arg1;
- (void)print:(id)arg1 printDialog:(BOOL)arg2 withProperties:(id)arg3;
- (id)open:(id)arg1;
@property(readonly, copy) NSString *version;
@property(readonly, copy) NSString *name;
@property(readonly) BOOL frontmost;
- (id)windows;
- (id)slideshows;
- (id)codesForPropertyNames;
- (id)classNamesForCodes;
@property(readonly) BOOL slideSwitcherVisible;
@property(readonly) BOOL playing;
@property BOOL frozen;
- (id)appTransitions;
- (id)appThemes;

@end

