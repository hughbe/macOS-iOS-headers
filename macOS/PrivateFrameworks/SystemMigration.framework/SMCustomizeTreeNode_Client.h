//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSColor, NSImage, NSMutableArray, NSNumber, NSObject<OS_dispatch_queue>, NSString;

@interface SMCustomizeTreeNode_Client : NSObject
{
    BOOL _sizeIsAvailable;
    BOOL _selectedItemsStillSizing;
    BOOL _displaysExtraInfo;
    BOOL _performingSelectionUpdates;
    BOOL _userEditable;
    BOOL _canSelectOnlyParent;
    BOOL _accountForLocalNodeSize;
    BOOL _allowMixedStateWhenAllChildrenSelected;
    BOOL _selectionDisabled;
    BOOL _enabled;
    BOOL _needsAttention;
    NSMutableArray *_childNodes;
    NSString *_name;
    NSString *_extraInfo;
    NSColor *_extraInfoColor;
    NSNumber *_size;
    NSNumber *_localNodeSize;
    long long _userSelected;
    unsigned long long _textMode;
    unsigned long long _type;
    NSImage *_image;
    SMCustomizeTreeNode_Client *_parent;
    id _representedObject;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (id)keyPathsForValuesAffectingChildNodesCopy;
+ (id)keyPathsForValuesAffectingSizeTextColor;
+ (id)keyPathsForValuesAffectingPreliminarySizeIsAvailable;
@property(retain) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
@property(retain) SMCustomizeTreeNode_Client *parent; // @synthesize parent=_parent;
@property(retain) NSImage *image; // @synthesize image=_image;
@property unsigned long long type; // @synthesize type=_type;
@property unsigned long long textMode; // @synthesize textMode=_textMode;
@property BOOL needsAttention; // @synthesize needsAttention=_needsAttention;
@property BOOL enabled; // @synthesize enabled=_enabled;
@property BOOL selectionDisabled; // @synthesize selectionDisabled=_selectionDisabled;
@property BOOL allowMixedStateWhenAllChildrenSelected; // @synthesize allowMixedStateWhenAllChildrenSelected=_allowMixedStateWhenAllChildrenSelected;
@property BOOL accountForLocalNodeSize; // @synthesize accountForLocalNodeSize=_accountForLocalNodeSize;
@property BOOL canSelectOnlyParent; // @synthesize canSelectOnlyParent=_canSelectOnlyParent;
@property BOOL userEditable; // @synthesize userEditable=_userEditable;
@property BOOL performingSelectionUpdates; // @synthesize performingSelectionUpdates=_performingSelectionUpdates;
@property long long userSelected; // @synthesize userSelected=_userSelected;
@property(copy) NSNumber *localNodeSize; // @synthesize localNodeSize=_localNodeSize;
@property(copy) NSNumber *size; // @synthesize size=_size;
@property(retain) NSColor *extraInfoColor; // @synthesize extraInfoColor=_extraInfoColor;
@property BOOL displaysExtraInfo; // @synthesize displaysExtraInfo=_displaysExtraInfo;
@property(copy) NSString *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(copy) NSString *name; // @synthesize name=_name;
@property(retain) NSMutableArray *childNodes; // @synthesize childNodes=_childNodes;
@property BOOL selectedItemsStillSizing; // @synthesize selectedItemsStillSizing=_selectedItemsStillSizing;
@property BOOL sizeIsAvailable; // @synthesize sizeIsAvailable=_sizeIsAvailable;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)sortChildernUsingComparator:(CDUnknownBlockType)arg1;
- (id)childWithRepresentedObject:(id)arg1;
@property(readonly) __weak NSArray *childNodesCopy;
- (void)changeSelectedStateOfAllChildrenTo:(long long)arg1;
- (void)removeAllChildren;
- (void)removeChild:(id)arg1;
- (void)addChild:(id)arg1 andEvaluateState:(BOOL)arg2;
- (void)addChild:(id)arg1;
- (long long)nodeStateBasedOnChildren;
- (void)evaluateState;
- (void)evaluateSize;
@property(readonly) NSColor *sizeTextColor;
@property(readonly) BOOL preliminarySizeIsAvailable;
@property(readonly) BOOL isLeaf;
- (void)dealloc;
- (id)initWithName:(id)arg1 ofType:(unsigned long long)arg2 selected:(BOOL)arg3 image:(id)arg4 size:(id)arg5 andRepresentedObject:(id)arg6;
- (id)init;

@end

