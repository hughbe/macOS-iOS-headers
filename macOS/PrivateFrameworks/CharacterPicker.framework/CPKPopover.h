//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopover.h"

@interface CPKPopover : NSPopover
{
    id <CPKPopoverDelegate> _CPKDelegate;
    id <CPKTargetProvider> _CPKTargetProvider;
    void *_CPKUserInfo;
    id _CPKPrivate;
}

+ (id)characterPickerToolbarItem:(id)arg1;
@property void *CPKUserInfo; // @synthesize CPKUserInfo=_CPKUserInfo;
@property id <CPKTargetProvider> CPKTargetProvider; // @synthesize CPKTargetProvider=_CPKTargetProvider;
@property id <CPKPopoverDelegate> CPKDelegate; // @synthesize CPKDelegate=_CPKDelegate;
- (BOOL)_showPerformanceLog;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)windowWillClosed:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_showPopoverByCallingSuperclass;
- (void)_postCharacterPickerOpenedNotification;
- (void)_externalCharacterViewerWindowRevertedToPicker:(id)arg1;
- (void)_externalCharacterViewerWindowOpened:(id)arg1;
- (void)_characterViewerDidOpen:(id)arg1;
- (void)_characterViewerWillOpen:(id)arg1;
- (void)_popoverDidClose:(id)arg1;
- (void)_popoverDidOpen:(id)arg1;
- (void)_popoverWillOpen;
- (void)_insertSelectedCharacter:(id)arg1 toTarget:(id)arg2;
- (BOOL)_isValidTarget:(id)arg1;
- (id)_actionTarget;
- (void)_showPopoverFromToolbarMenu:(id)arg1;
- (void)_showPopoverFromToolbarItem:(id)arg1;
- (id)_privateStorage;
- (void)makeKeyWindow;
- (id)searchString;
- (void)setShowOpeningAnimation:(BOOL)arg1;
- (void)setDisplayAsWindow:(BOOL)arg1 preferredLoc:(struct CGPoint)arg2;
- (id)detachedWindowCreate:(BOOL)arg1;
- (void)close;
- (id)detachableWindowForPopover:(id)arg1;
- (BOOL)popoverShouldDetach:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)characterDidSelected:(id)arg1;
- (void)setDataSource:(id)arg1 usingBlockOnMainThread:(CDUnknownBlockType)arg2;
- (void)setDataSource:(id)arg1;
- (void)showRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithDataSource:(id)arg1;

@end

