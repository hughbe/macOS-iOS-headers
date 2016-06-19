//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSCollectionViewLayoutAttributes;

@interface IMGroupAcknowledgementPollSectionLayoutAttributes : NSObject
{
    BOOL _expanded;
    BOOL _shouldHideAll;
    NSArray *_avatarCellLayoutAttributes;
    NSArray *_avatarLabelLayoutAttributes;
    NSCollectionViewLayoutAttributes *_footerLayoutAttributes;
    double _distanceFromLeadingEdge;
}

+ (id)testSectionFooterView;
@property(nonatomic) double distanceFromLeadingEdge; // @synthesize distanceFromLeadingEdge=_distanceFromLeadingEdge;
@property BOOL shouldHideAll; // @synthesize shouldHideAll=_shouldHideAll;
@property(getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property(retain) NSCollectionViewLayoutAttributes *footerLayoutAttributes; // @synthesize footerLayoutAttributes=_footerLayoutAttributes;
@property(retain) NSArray *avatarLabelLayoutAttributes; // @synthesize avatarLabelLayoutAttributes=_avatarLabelLayoutAttributes;
@property(readonly) NSArray *avatarCellLayoutAttributes; // @synthesize avatarCellLayoutAttributes=_avatarCellLayoutAttributes;
- (void).cxx_destruct;
- (void)_calculateLayoutAttributes;
- (void)_translateXBy:(double)arg1;
- (id)initForSection:(unsigned long long)arg1 cellCount:(unsigned long long)arg2 expanded:(BOOL)arg3 shouldHideAll:(BOOL)arg4;

@end

