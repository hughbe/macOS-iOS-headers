//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHProjectPagingViewCell.h>

@class NSMutableArray, UXImageView;

@interface KHCardProjectPagingViewCell : KHProjectPagingViewCell
{
    UXImageView *_decorationImageView;
    NSMutableArray *_orientationConstraints;
}

+ (struct CGSize)contentViewSizeForLayouts:(id)arg1 layoutScale:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *orientationConstraints; // @synthesize orientationConstraints=_orientationConstraints;
@property(readonly, nonatomic) UXImageView *decorationImageView; // @synthesize decorationImageView=_decorationImageView;
- (void)_teardownAccessibility;
- (void)configureAccessoryButton:(id)arg1 forLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)updateDecorationsForProjectLayouts:(id)arg1;
- (void)configureDecorations;
- (id)canvasLayoutForProjectLayouts:(id)arg1;
- (void)prepareForReuse;
- (void)_updateOverlayConstraintsForProjectLayout:(id)arg1;
- (struct CGSize)_setupDecorationImagesForProjectLayout:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

