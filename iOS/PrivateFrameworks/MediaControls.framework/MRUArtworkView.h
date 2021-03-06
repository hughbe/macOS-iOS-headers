/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUArtworkView : UIView <MRUVisualStylingProviderObserver> {
    UIImage * _artworkImage;
    UIImageView * _artworkImageView;
    MRUShadowView * _artworkShadowView;
    MSVTimer * _artworkTimer;
    MPArtworkCatalog * _catalog;
    long long  _failedRetryCount;
    UIImage * _iconImage;
    MRUShadowView * _iconShadowView;
    UIImageView * _iconView;
    UIView * _placeholderBackground;
    UIImage * _placeholderImage;
    UIImageView * _placeholderImageView;
    bool  _showPlaceholder;
    long long  _style;
    MRUVisualStylingProvider * _stylingProvider;
}

@property (nonatomic, retain) UIImage *artworkImage;
@property (nonatomic, retain) UIImageView *artworkImageView;
@property (nonatomic, retain) MRUShadowView *artworkShadowView;
@property (nonatomic, retain) MSVTimer *artworkTimer;
@property (nonatomic, retain) MPArtworkCatalog *catalog;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long failedRetryCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, retain) MRUShadowView *iconShadowView;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) UIView *placeholderBackground;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic, retain) UIImageView *placeholderImageView;
@property (nonatomic, readonly) UIPointerStyle *pointerStyle;
@property (nonatomic) bool showPlaceholder;
@property (nonatomic) long long style;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })artworkFrame;
- (id)artworkImage;
- (id)artworkImageView;
- (id)artworkShadowView;
- (id)artworkTimer;
- (id)catalog;
- (void)dealloc;
- (long long)failedRetryCount;
- (id)iconImage;
- (id)iconShadowView;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDeviceIcon;
- (bool)isSquare:(struct CGSize { double x1; double x2; })arg1;
- (bool)isSquareArtwork;
- (void)layoutSubviews;
- (id)placeholderBackground;
- (id)placeholderImage;
- (id)placeholderImageView;
- (id)pointerStyle;
- (void)prepareForReuse;
- (void)setArtworkImage:(id)arg1;
- (void)setArtworkImageView:(id)arg1;
- (void)setArtworkShadowView:(id)arg1;
- (void)setArtworkTimer:(id)arg1;
- (void)setCatalog:(id)arg1;
- (void)setFailedRetryCount:(long long)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconShadowView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setPlaceholderBackground:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPlaceholderImageView:(id)arg1;
- (void)setShowPlaceholder:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setStylingProvider:(id)arg1;
- (bool)showPlaceholder;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (id)stylingProvider;
- (void)updateStyle;
- (void)updateVisibility;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;

@end
