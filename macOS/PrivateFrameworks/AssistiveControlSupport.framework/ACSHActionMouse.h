//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHAction.h>

@interface ACSHActionMouse : ACSHAction
{
    BOOL _isReverseMove;
    BOOL _isRepeatMove;
    BOOL _isBouncingBack;
    BOOL _modifiedWithControl;
    BOOL _modifiedWithOption;
    BOOL _modifiedWithCommand;
    BOOL _modifiedWithShift;
    BOOL _autoClick;
    int _mouseAction;
    int _mouseButton;
    unsigned long long _clickCount;
    unsigned long long _moveDirectionInDegrees;
    double _moveSpeed;
    unsigned long long _scanBoundary;
    unsigned long long _cycleCount;
    struct CGPoint _startPosition;
}

+ (id)actionToggleDragWithUndoManager:(id)arg1 modifiedWithControl:(BOOL)arg2 modifiedWithOption:(BOOL)arg3 modifiedWithCommand:(BOOL)arg4 modifiedWithShift:(BOOL)arg5;
+ (id)actionRotateWithUndoManager:(id)arg1 autoClick:(BOOL)arg2 scanBoundary:(unsigned long long)arg3;
+ (id)actionGlideWithUndoManager:(id)arg1 autoClick:(BOOL)arg2 scanBoundary:(unsigned long long)arg3;
+ (id)actionMoveWithUndoManager:(id)arg1 direction:(unsigned long long)arg2 speed:(double)arg3;
+ (id)actionMoveReverseWithUndoManager:(id)arg1 speed:(double)arg2;
+ (id)actionMoveRepeatWithUndoManager:(id)arg1 speed:(double)arg2;
+ (id)_actionMoveWithUndoManager:(id)arg1 direction:(unsigned long long)arg2 isRepeat:(BOOL)arg3 isReverse:(BOOL)arg4 speed:(double)arg5;
+ (id)clickActionWithButton:(int)arg1 type:(int)arg2 modifiedWithControl:(BOOL)arg3 modifiedWithOption:(BOOL)arg4 modifiedWithCommand:(BOOL)arg5 modifiedWithShift:(BOOL)arg6 undoManager:(id)arg7;
+ (id)actionTripleClickWithUndoManager:(id)arg1 modifiedWithControl:(BOOL)arg2 modifiedWithOption:(BOOL)arg3 modifiedWithCommand:(BOOL)arg4 modifiedWithShift:(BOOL)arg5;
+ (id)actionDoubleClickWithUndoManager:(id)arg1 modifiedWithControl:(BOOL)arg2 modifiedWithOption:(BOOL)arg3 modifiedWithCommand:(BOOL)arg4 modifiedWithShift:(BOOL)arg5;
+ (id)actionRightClickWithUndoManager:(id)arg1 modifiedWithControl:(BOOL)arg2 modifiedWithOption:(BOOL)arg3 modifiedWithCommand:(BOOL)arg4 modifiedWithShift:(BOOL)arg5;
+ (id)actionLeftClickWithUndoManager:(id)arg1 modifiedWithControl:(BOOL)arg2 modifiedWithOption:(BOOL)arg3 modifiedWithCommand:(BOOL)arg4 modifiedWithShift:(BOOL)arg5;
+ (unsigned long long)clickCountForMouseAction:(int)arg1;
+ (void)initialize;
@property(nonatomic) unsigned long long cycleCount; // @synthesize cycleCount=_cycleCount;
@property(nonatomic) unsigned long long scanBoundary; // @synthesize scanBoundary=_scanBoundary;
@property(nonatomic) BOOL autoClick; // @synthesize autoClick=_autoClick;
@property(nonatomic) BOOL modifiedWithShift; // @synthesize modifiedWithShift=_modifiedWithShift;
@property(nonatomic) BOOL modifiedWithCommand; // @synthesize modifiedWithCommand=_modifiedWithCommand;
@property(nonatomic) BOOL modifiedWithOption; // @synthesize modifiedWithOption=_modifiedWithOption;
@property(nonatomic) BOOL modifiedWithControl; // @synthesize modifiedWithControl=_modifiedWithControl;
@property(nonatomic) BOOL isBouncingBack; // @synthesize isBouncingBack=_isBouncingBack;
@property(nonatomic) BOOL isRepeatMove; // @synthesize isRepeatMove=_isRepeatMove;
@property(nonatomic) BOOL isReverseMove; // @synthesize isReverseMove=_isReverseMove;
@property(nonatomic) double moveSpeed; // @synthesize moveSpeed=_moveSpeed;
@property(nonatomic) struct CGPoint startPosition; // @synthesize startPosition=_startPosition;
@property(nonatomic) unsigned long long moveDirectionInDegrees; // @synthesize moveDirectionInDegrees=_moveDirectionInDegrees;
@property(nonatomic) unsigned long long clickCount; // @synthesize clickCount=_clickCount;
@property(nonatomic) int mouseButton; // @synthesize mouseButton=_mouseButton;
@property(nonatomic) int mouseAction; // @synthesize mouseAction=_mouseAction;
- (void)dealloc;
- (id)paramDescription;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)repeatEnded;
- (void)perform;
- (long long)_foundationButton;
- (BOOL)shouldPerform;
- (struct CGSize)_mouseMovementDelta;
- (double)repeatFrequencyInSeconds;
- (BOOL)shouldAutoRepeat;
- (id)paramDictionaryForSaving;
- (void)_initWithPlistDictionary:(id)arg1;
- (id)init;

@end

