/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBScreenTraits : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    long long  _idiomToEmulate;
    bool  _isEmulatingIdiom;
    bool  _isInPopover;
    bool  _isKeyboardMinorEdgeWidth;
    double  _keyboardBarHeight;
    double  _keyboardWidth;
    bool  _knobInput;
    long long  _orientation;
    UIScreen * _screen;
    bool  _touchInput;
    bool  _touchpadInput;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) long long idiom;
@property (nonatomic, readonly) bool isInPopover;
@property (nonatomic, readonly) bool isKeyboardMinorEdgeWidth;
@property (nonatomic) double keyboardBarHeight;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } keyboardScreenReferenceSize;
@property (nonatomic) double keyboardWidth;
@property (nonatomic, readonly) bool knobInput;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) bool touchInput;
@property (nonatomic, readonly) bool touchpadInput;

+ (id)_activeKeyboardWindowForScreen:(id)arg1;
+ (id)fullScreenTraitsWithScreen:(id)arg1 orientation:(long long)arg2;
+ (void)setMockIdiom:(long long)arg1;
+ (id)traitsForInputModeWithScreen:(id)arg1;
+ (id)traitsForPopoverEmulatingWidth:(double)arg1 minorEdge:(bool)arg2 orientation:(long long)arg3 idiom:(long long)arg4;
+ (id)traitsWithScreen:(id)arg1 orientation:(long long)arg2;
+ (id)traitsWithScreen:(id)arg1 orientation:(long long)arg2 ignoreRemoteKeyboard:(bool)arg3;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)description;
- (long long)idiom;
- (id)initForInputModeWithScreen:(id)arg1;
- (id)initWithScreen:(id)arg1 orientation:(long long)arg2 allowFloating:(bool)arg3 ignoreRemoteKeyboard:(bool)arg4;
- (bool)isInPopover;
- (bool)isKeyboardMinorEdgeWidth;
- (double)keyboardBarHeight;
- (struct CGSize { double x1; double x2; })keyboardScreenReferenceSize;
- (double)keyboardWidth;
- (bool)knobInput;
- (long long)orientation;
- (id)screen;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setKeyboardBarHeight:(double)arg1;
- (void)setKeyboardWidth:(double)arg1;
- (void)setOrientation:(long long)arg1;
- (bool)touchInput;
- (bool)touchpadInput;
- (void)updateForTextInputTraits:(id)arg1 supportedInteractionModel:(unsigned long long)arg2;

@end
