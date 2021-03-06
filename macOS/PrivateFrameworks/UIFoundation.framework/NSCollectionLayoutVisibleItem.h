//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/_NSCollectionLayoutVisibleItem-Protocol.h>

@class NSCollectionLayoutItem, NSCollectionViewLayoutAttributes, NSIndexPath, NSString;

@interface NSCollectionLayoutVisibleItem : NSObject <_NSCollectionLayoutVisibleItem>
{
    BOOL _dirty;
    NSCollectionViewLayoutAttributes *_layoutAttributes;
    NSCollectionLayoutItem *_layoutItem;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isDirty) BOOL dirty; // @synthesize dirty=_dirty;
@property(retain, nonatomic) NSCollectionLayoutItem *layoutItem; // @synthesize layoutItem=_layoutItem;
@property(retain, nonatomic) NSCollectionViewLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(readonly) struct CGRect bounds;
@property struct CGPoint center;
@property(readonly) struct CGRect frame;
@property(readonly) NSString *representedElementKind;
@property(readonly) long long representedElementCategory;
@property(readonly) NSString *name;
@property(getter=isHidden) BOOL hidden;
@property(readonly) NSIndexPath *indexPath;
@property long long zIndex;
@property double alpha;
@property(nonatomic) struct CGAffineTransform transform;
@property(nonatomic) struct CATransform3D transform3D;
@property(readonly, copy) NSString *description;
- (id)initWithLayoutAttributes:(id)arg1 layoutItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

