//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSmartScaleView.h>

@class CAShapeLayer, UXImageView, UXView;

@interface PXPeopleSuggestionView : PXSmartScaleView
{
    BOOL _needsSpotlightUpdate;
    BOOL _validSpotlight;
    id <PXFaceCollection> _suggestion;
    UXImageView *_imageView;
    UXView *_suggestionView;
    UXView *_dimView;
    CAShapeLayer *_spotlightLayer;
    struct CGRect _faceRect;
}

@property BOOL validSpotlight; // @synthesize validSpotlight=_validSpotlight;
@property BOOL needsSpotlightUpdate; // @synthesize needsSpotlightUpdate=_needsSpotlightUpdate;
@property(retain, nonatomic) CAShapeLayer *spotlightLayer; // @synthesize spotlightLayer=_spotlightLayer;
@property(retain, nonatomic) UXView *dimView; // @synthesize dimView=_dimView;
@property(retain, nonatomic) UXView *suggestionView; // @synthesize suggestionView=_suggestionView;
@property(retain, nonatomic) UXImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct CGRect faceRect; // @synthesize faceRect=_faceRect;
@property(readonly, nonatomic) id <PXFaceCollection> suggestion; // @synthesize suggestion=_suggestion;
- (void).cxx_destruct;
- (double)_faceScale;
- (struct CGRect)_scaledFaceRect;
- (void)_updateSpotlightAnimated:(BOOL)arg1;
- (void)updateSuggestionImageWithAnimatedSpotlight:(BOOL)arg1;
- (void)setSuggestion:(id)arg1 animated:(BOOL)arg2;
- (void)viewScaleDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)commonInit;

@end

