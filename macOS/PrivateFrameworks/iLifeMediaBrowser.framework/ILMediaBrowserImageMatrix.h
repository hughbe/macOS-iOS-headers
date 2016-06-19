//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMatrix.h"

@class NSMutableArray, NSString;

@interface ILMediaBrowserImageMatrix : NSMatrix
{
    NSMutableArray *selectedCells;
    struct CGRect selectionRect;
    BOOL mAllowMultipleSelection;
    BOOL mDisplaysToolTips;
    BOOL mDrawTitles;
    struct CGSize mImageCellSize;
    NSMutableArray *_contents;
    NSMutableArray *_contentImages;
    NSMutableArray *_contentTitles;
    id _observedObjectForContent;
    NSString *_observedKeyPathForContent;
    id _observedObjectForContentImages;
    NSString *_observedKeyPathForContentImages;
    id _observedObjectForContentTitles;
    NSString *_observedKeyPathForContentTitles;
}

+ (void)initialize;
- (long long)numberOfColumnsForCurrentBounds;
- (void)refreshCellsToContent;
- (void)reloadData;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)exposedBindings;
- (void)viewDidMoveToWindow;
- (void)viewBoundsDidChange:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)acceptsFirstResponder;
- (void)resetCursorRects;
- (void)updateLayoutUsingMaxWidth:(long long)arg1;
- (id)realCells;
- (void)drawRect:(struct CGRect)arg1;
- (void)copy:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)_dragImageForCell:(id)arg1 withBadgeCount:(long long)arg2;
- (void)_dragSelectionWithEvent:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)wantsFlagsChangedEventsForSkimming;
- (BOOL)wantsMouseMovedEventsForSkimming;
- (struct CGSize)imageCellSize;
- (void)setImageCellSize:(struct CGSize)arg1;
- (void)setCellsHaveTitle:(BOOL)arg1;
- (BOOL)drawsTitles;
- (void)setDrawsTitles:(BOOL)arg1;
- (BOOL)displaysToolTips;
- (void)setDisplaysToolTips:(BOOL)arg1;
- (id)cellsInRect:(struct CGRect)arg1;
- (id)cellAtIndex:(unsigned long long)arg1;
- (long long)indexOfCell:(id)arg1;
- (BOOL)allowsMultipleSelection;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (long long)clickedIndex;
- (void)deselectAll:(id)arg1;
- (void)selectNone:(id)arg1;
- (void)selectAll:(id)arg1;
- (id)selectionIndexes;
- (id)selectedCell;
- (id)_sortedSelectedCells;
- (id)selectedCells;
- (void)deselectAllCells;
- (void)deselectCell:(id)arg1;
- (void)selectCellAtRow:(long long)arg1 column:(long long)arg2;
- (void)_selectCell:(id)arg1;
- (void)selectCell:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 mode:(long long)arg2 cellClass:(Class)arg3 numberOfRows:(long long)arg4 numberOfColumns:(long long)arg5;

@end

