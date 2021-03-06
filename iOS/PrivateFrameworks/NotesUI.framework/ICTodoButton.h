/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICTodoButton : UIButton {
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultImageSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultSize;
    bool  _done;
    ICTrackedParagraph * _trackedParagraph;
    bool  _trackedParagraphIsRTL;
}

@property (nonatomic) struct CGSize { double x1; double x2; } defaultImageSize;
@property (nonatomic) struct CGSize { double x1; double x2; } defaultSize;
@property (getter=isDone, nonatomic) bool done;
@property (nonatomic) ICTrackedParagraph *trackedParagraph;
@property (nonatomic) bool trackedParagraphIsRTL;

- (void).cxx_destruct;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint { double x1; double x2; })arg2 defaultRegion:(id)arg3;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (id)debugDescription;
- (struct CGSize { double x1; double x2; })defaultImageSize;
- (struct CGSize { double x1; double x2; })defaultSize;
- (id)imageForChecked:(bool)arg1 withHighlight:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithDragDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDone;
- (void)setDefaultImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDefaultSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDone:(bool)arg1;
- (void)setDone:(bool)arg1 animated:(bool)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 leftToRight:(bool)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setTrackedParagraph:(id)arg1;
- (void)setTrackedParagraphIsRTL:(bool)arg1;
- (id)trackedParagraph;
- (void)trackedParagraphDidChange;
- (bool)trackedParagraphIsRTL;
- (void)updateImagesAnimated:(bool)arg1;
- (void)wasPressed;

@end
