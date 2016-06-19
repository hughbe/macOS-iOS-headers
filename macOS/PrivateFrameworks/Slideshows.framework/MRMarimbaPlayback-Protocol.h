//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MPEffectContainer, MPLayer, MPSlide, MPText, NSArray, NSSet;

@protocol MRMarimbaPlayback
@property(nonatomic) BOOL isAboutToPlay;
- (void)removeEffectContainersBeforeTime:(double)arg1;
- (void)whenTransitionIsFinishedSendAction:(SEL)arg1 toTarget:(id)arg2;
- (BOOL)isInTransition;
- (double)startTimeForSlide:(MPSlide *)arg1;
- (double)timeForSlide:(MPSlide *)arg1;
- (void)gotoText:(MPText *)arg1;
- (void)gotoSlide:(MPSlide *)arg1;
- (void)gotoPreviousSlide:(BOOL)arg1;
- (void)gotoNextSlide:(BOOL)arg1;
- (void)gotoPreviousSlide;
- (void)gotoNextSlide;
- (NSArray *)currentSlides;
- (MPSlide *)currentSlide;
- (void)moveToSubtitleForSlide:(MPSlide *)arg1;
- (void)moveToTitleSlide;
- (void)moveToPreviousEffectContainer;
- (void)moveToNextEffectContainer;
- (void)moveToEffectContainer:(MPEffectContainer *)arg1 withStartOffset:(double)arg2 toStopOffset:(double)arg3 blocking:(BOOL)arg4;
- (NSSet *)displayedEffectContainers;
- (double)relativeTimeForLayer:(MPLayer *)arg1;
- (double)relativeTimeForBackgroundAudio;
- (double)relativeTime;
@end

