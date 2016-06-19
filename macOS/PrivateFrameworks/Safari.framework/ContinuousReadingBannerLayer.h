//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "CALayerDelegate.h"

@class NSAttributedString, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface ContinuousReadingBannerLayer : CALayer <CALayerDelegate>
{
    CALayer *_backgroundLayer;
    CALayer *_primaryIconImageLayer;
    CALayer *_secondaryIconImageLayer;
    CALayer *_primaryTextLayer;
    CALayer *_secondaryTextLayer;
    CALayer *_screenNameAndRetweetInfoTextLayer;
    CALayer *_retweetButtonLayer;
    BOOL _iconDrawsDropShadowAndMask;
    BOOL _retweetButtonVisible;
    BOOL _retweetButtonUsesRolloverAppearance;
    BOOL _retweetButtonPressed;
    BOOL _cursorIsInsideSocialProfileButton;
    BOOL _socialProfileButtonPressed;
    BOOL _trackingMouseDownInRetweetButton;
    BOOL _trackingMouseDownInInSocialProfileButton;
    double _scaleFactor;
    unsigned long long _bannerLocation;
    unsigned long long _bannerType;
    NSImage *_icon;
    NSImage *_secondaryIcon;
    NSAttributedString *_primaryTextTitle;
    NSAttributedString *_secondaryTextTitle;
    NSAttributedString *_stylizedScreenName;
    NSAttributedString *_stylizedRetweetInfo;
}

+ (double)footerBannerSeparatorHeight;
+ (double)bannerHeight;
@property(copy, nonatomic) NSAttributedString *stylizedRetweetInfo; // @synthesize stylizedRetweetInfo=_stylizedRetweetInfo;
@property(copy, nonatomic) NSAttributedString *stylizedScreenName; // @synthesize stylizedScreenName=_stylizedScreenName;
@property(copy, nonatomic) NSAttributedString *secondaryTextTitle; // @synthesize secondaryTextTitle=_secondaryTextTitle;
@property(copy, nonatomic) NSAttributedString *primaryTextTitle; // @synthesize primaryTextTitle=_primaryTextTitle;
@property(nonatomic) BOOL trackingMouseDownInInSocialProfileButton; // @synthesize trackingMouseDownInInSocialProfileButton=_trackingMouseDownInInSocialProfileButton;
@property(nonatomic) BOOL trackingMouseDownInRetweetButton; // @synthesize trackingMouseDownInRetweetButton=_trackingMouseDownInRetweetButton;
@property(nonatomic) BOOL socialProfileButtonPressed; // @synthesize socialProfileButtonPressed=_socialProfileButtonPressed;
@property(nonatomic) BOOL cursorIsInsideSocialProfileButton; // @synthesize cursorIsInsideSocialProfileButton=_cursorIsInsideSocialProfileButton;
@property(nonatomic) BOOL retweetButtonPressed; // @synthesize retweetButtonPressed=_retweetButtonPressed;
@property(nonatomic) BOOL retweetButtonUsesRolloverAppearance; // @synthesize retweetButtonUsesRolloverAppearance=_retweetButtonUsesRolloverAppearance;
@property(nonatomic) BOOL retweetButtonVisible; // @synthesize retweetButtonVisible=_retweetButtonVisible;
@property(retain, nonatomic) NSImage *secondaryIcon; // @synthesize secondaryIcon=_secondaryIcon;
@property(nonatomic) BOOL iconDrawsDropShadowAndMask; // @synthesize iconDrawsDropShadowAndMask=_iconDrawsDropShadowAndMask;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(nonatomic) unsigned long long bannerType; // @synthesize bannerType=_bannerType;
@property(readonly, nonatomic) unsigned long long bannerLocation; // @synthesize bannerLocation=_bannerLocation;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
- (void).cxx_destruct;
- (void)_drawRetweetButtonGlyphInRect:(struct CGRect)arg1;
- (id)_retweetButtonGlyph;
- (struct CGSize)_retweetButtonGlyphImageSize;
- (struct CGRect)_retweetButtonFrame;
- (void)_layOutRetweetButton;
- (id)_retweetButtonString;
- (id)_textAttributesForRetweetButton;
- (id)_colorForRetweetButtonText;
- (id)_fontForRetweetButtonText;
- (id)_screenNameAndRetweetInfoTextLayerString;
- (id)_attributesForScreenNameAndRetweetTextLayersApplyingBold:(BOOL)arg1;
- (id)_textAttributesForSecondaryTextLayer;
- (id)_textAttributesForPrimaryTextLayer;
- (id)_boldFontForScreenNameAndRetweetInfoTextLayer;
- (id)_fontForScreenNameAndRetweetInfoTextLayer;
- (id)_fontForSecondaryTextLayer;
- (id)_fontForPrimaryTextLayer;
- (id)_createTextLayer;
- (struct CGRect)_screenNameAndRetweetInfoTextLayerFrame;
- (double)_currentMaximumScreenNameAndRetweetInfoTextLayerWidth;
- (struct CGRect)_secondaryTextLayerFrame;
- (double)_currentMaximumSecondaryTextLayerWidth;
- (double)_ascenderForFontForScreenNameAndRetweetInfoTextLayer;
- (double)_ascenderForFontForSecondaryTextLayer;
- (struct CGRect)_primaryTextLayerFrame;
- (double)_currentMaximumPrimaryTextLayerWidth;
- (double)_ascenderForFontForPrimaryTextLayer;
- (double)_maxTextLayerXCoordinate;
- (double)_rightMargin;
- (void)_layOutTextLayers;
- (void)_updateSecondaryIconImageLayer;
- (void)_updatePrimaryIconImageLayer;
- (id)_createImageLayer;
- (struct CGRect)_secondaryIconImageViewFrame;
- (struct CGRect)_primaryIconImageViewFrame;
- (void)_layOutIcons;
- (void)_layOutLayers;
- (BOOL)_isSocial;
- (double)_bannerSeparatorHeight;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)setRepostedInfo:(BOOL)arg1 otherReposterDisplayName:(id)arg2 otherReposterScreenName:(id)arg3;
- (id)_retweetedBySomeoneYouFollowAndYouStringWithOtherReposterDisplayName:(id)arg1 otherReposterScreenName:(id)arg2;
- (id)_retweetedBySomeoneYouFollowOrYouStringWithOtherReposterDisplayName:(id)arg1 otherReposterScreenName:(id)arg2;
@property(copy, nonatomic) NSString *screenName;
@property(copy, nonatomic) NSString *itemDescription;
@property(copy, nonatomic) NSAttributedString *itemTitle;
@property(readonly, retain, nonatomic) CALayer *retweetButtonLayer;
@property(readonly, retain, nonatomic) CALayer *screenNameAndRetweetInfoTextLayer;
@property(readonly, retain, nonatomic) CALayer *secondaryTextLayer;
@property(readonly, retain, nonatomic) CALayer *primaryTextLayer;
@property(readonly, retain, nonatomic) CALayer *secondaryIconImageLayer;
@property(readonly, retain, nonatomic) CALayer *primaryIconImageLayer;
- (void)setContentsScale:(double)arg1;
- (void)layoutSublayers;
- (void)resizeWithOldSuperlayerSize:(struct CGSize)arg1;
- (BOOL)isPointInSocialProfileButton:(struct CGPoint)arg1;
- (BOOL)isPointInRetweetButton:(struct CGPoint)arg1;
- (id)initWithWidth:(double)arg1 scaleFactor:(double)arg2 bannerLocation:(unsigned long long)arg3;
- (id)_backgroundImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

