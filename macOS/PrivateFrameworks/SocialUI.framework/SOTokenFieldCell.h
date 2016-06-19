//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTokenFieldCell.h"

@class SOTokenFieldController;

@interface SOTokenFieldCell : NSTokenFieldCell
{
    unsigned int _dragDelegateRespondsToTokenFieldCellDidBeginDragOperation;
    unsigned int _dragDelegateRespondsToTokenFieldCellDidEndDragOperation;
    id <SOTokenFieldCellDragDelegate> _dragDelegate;
    SOTokenFieldController *_tokenFieldController;
}

@property __weak SOTokenFieldController *tokenFieldController; // @synthesize tokenFieldController=_tokenFieldController;
@property(nonatomic) __weak id <SOTokenFieldCellDragDelegate> dragDelegate; // @synthesize dragDelegate=_dragDelegate;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)setUpFieldEditorAttributes:(id)arg1;
- (BOOL)tokenAttachment:(id)arg1 doubleClickedInRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4;
- (void)_setPerformingDrop:(BOOL)arg1;

@end

