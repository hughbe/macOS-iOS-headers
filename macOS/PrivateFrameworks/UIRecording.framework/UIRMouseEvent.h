//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIRecording/UIREvent.h>

@interface UIRMouseEvent : UIREvent
{
}

- (struct __CGEvent *)cgEventToPostToProcess:(id)arg1 withLastEvent:(id)arg2 withLastCGEvent:(struct __CGEvent *)arg3 error:(id *)arg4;
- (BOOL)hasSameChildrenStackAsEvent:(id)arg1;
- (struct CGPoint)positionWithElement:(id)arg1;
- (BOOL)hasElementPosition;
- (BOOL)uiElementInMenuBar;
- (id)actionNames;
- (id)processTitle;
- (struct CGPoint)location;
- (id)descriptionFormatString;
- (id)baseLevelUIElement;
- (id)topLevelUIElement;
- (id)childrenStack;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCGEvent:(struct __CGEvent *)arg1 withAccessibilityElement:(id)arg2;

@end

