/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFPinnableBanner : UIView {
    bool  _initiallyBehindNavigationBar;
    bool  _pinnedToTop;
}

@property (getter=isInitiallyBehindNavigationBar, nonatomic) bool initiallyBehindNavigationBar;
@property (getter=isPinnedToTop, nonatomic) bool pinnedToTop;

+ (double)pinAnimationDelay;
+ (double)unpinAnimationDelay;
+ (double)unpinAnimationDuration;

- (void)contentSizeCategoryDidChange;
- (void)invalidateBannerLayout;
- (bool)isInitiallyBehindNavigationBar;
- (bool)isPinnedToTop;
- (void)setInitiallyBehindNavigationBar:(bool)arg1;
- (void)setPinnedToTop:(bool)arg1;

@end
