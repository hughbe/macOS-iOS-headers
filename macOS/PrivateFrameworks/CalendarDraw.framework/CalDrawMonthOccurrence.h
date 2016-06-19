//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarDraw/CalDrawOccurrence.h>

@class NSString;

@interface CalDrawMonthOccurrence : CalDrawOccurrence
{
    BOOL _flatLeft;
    BOOL _flatRight;
    BOOL _drawDot;
    NSString *_eventEndTime;
    double _firstDayWidth;
    struct CGSize _textSize;
}

+ (id)backgroundImageForColor:(id)arg1 selected:(BOOL)arg2 needsReply:(BOOL)arg3 isStatusMaybe:(BOOL)arg4 isAllDay:(BOOL)arg5 flatLeft:(BOOL)arg6 flatRight:(BOOL)arg7;
+ (struct CGColor *)tentativeEventSelectionBackgroundColor;
+ (struct CGColor *)dimmedTextColor;
+ (struct CGColor *)defaultDarkTextColorRefWithOpaque:(BOOL)arg1;
+ (struct CGColor *)tentativeTextColorRef;
+ (struct CGColor *)tentativeDotColor;
+ (struct CGGradient *)whiteGradient;
+ (struct CGColor *)eventSelectionBackgroundColorRef;
+ (void)pushRoundedRectPath:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 flatLeft:(BOOL)arg3 flatRight:(BOOL)arg4 radius:(double)arg5;
+ (void)pushRoundedRectPath:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 flatLeft:(BOOL)arg3 flatRight:(BOOL)arg4;
@property struct CGSize textSize; // @synthesize textSize=_textSize;
@property double firstDayWidth; // @synthesize firstDayWidth=_firstDayWidth;
@property(retain) NSString *eventEndTime; // @synthesize eventEndTime=_eventEndTime;
@property BOOL drawDot; // @synthesize drawDot=_drawDot;
@property BOOL flatRight; // @synthesize flatRight=_flatRight;
@property BOOL flatLeft; // @synthesize flatLeft=_flatLeft;
- (void).cxx_destruct;
- (void)drawRect;
- (void)drawBackgroundInFrame:(struct CGRect)arg1 visibleRect:(struct CGRect)arg2;
- (id)init;
- (id)initWithWritingDirection:(long long)arg1;

@end

