//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@interface SiriUIContentLabel : NSTextField
{
    BOOL _willAppearDirectlyOverUltraDarkBackground;
    BOOL _shouldAllowVibrancy;
}

+ (id)labelWithBodyFont;
+ (id)labelWithSubtitleFont;
+ (id)labelWithHeaderFont;
+ (id)labelWithMediumWeightSubtextFont;
+ (id)labelWithLightWeightSubtextFont;
+ (id)labelWithThinWeightSubtextFont;
+ (id)labelWithMediumWeightRegularFont;
+ (id)labelWithLightWeightRegularFont;
+ (id)labelWithThinWeightRegularFont;
+ (id)label;
@property(nonatomic) BOOL shouldAllowVibrancy; // @synthesize shouldAllowVibrancy=_shouldAllowVibrancy;
@property(nonatomic) BOOL willAppearDirectlyOverUltraDarkBackground; // @synthesize willAppearDirectlyOverUltraDarkBackground=_willAppearDirectlyOverUltraDarkBackground;
- (BOOL)allowsVibrancy;
- (void)setStringValue:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;
- (id)fontSmoothingBackgroundColor;
- (BOOL)shouldSetFontSmoothingBackgroundColor;

@end

