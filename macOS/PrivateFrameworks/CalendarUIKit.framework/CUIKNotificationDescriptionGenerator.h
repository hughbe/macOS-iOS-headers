//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUIKit/CUIKDescriptionGenerator.h>

@class NSDateFormatter, NSNumberFormatter;

@interface CUIKNotificationDescriptionGenerator : CUIKDescriptionGenerator
{
    NSNumberFormatter *_numberFormatter;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_dateTimeFormatter;
}

+ (id)comment:(id)arg1 withInsertedAutoCommentForDate:(id)arg2;
+ (id)stringWithOnlyAutoComment:(id)arg1;
+ (id)stringWithAutoCommentRemoved:(id)arg1;
+ (id)autoCommentForProposedTime:(id)arg1;
+ (id)autoCommentPrefix;
+ (id)sharedGenerator;
- (void).cxx_destruct;
- (id)conflictStringForConflictDetails:(id)arg1 maxTitleLength:(unsigned long long)arg2;
- (id)conflictStringForConflictDetails:(id)arg1;
- (id)_adjustedTitle:(id)arg1 maxLength:(unsigned long long)arg2;
- (id)timePeriodForTimeInterval:(id)arg1;
- (id)descriptionStringsForNotification:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)descriptionForNotification:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)titleStringForNotification:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)_sharedDateTimeFormatter;
- (id)_sharedTimeFormatter;
- (id)_sharedDateFormatter;
- (id)_sharedNumberFormatter;

@end

