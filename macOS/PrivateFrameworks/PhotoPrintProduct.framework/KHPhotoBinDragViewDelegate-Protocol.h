//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/NSObject-Protocol.h>

@class KHPhotoBinDragView, NSString;

@protocol KHPhotoBinDragViewDelegate <NSObject>

@optional
- (struct CGSize)photoBinDragView:(KHPhotoBinDragView *)arg1 itemSizeForAspectRatio:(double)arg2;
- (void)draggingExitedPhotoView:(KHPhotoBinDragView *)arg1;
- (void)draggingEnteredPhotoView:(KHPhotoBinDragView *)arg1;
- (void)photoId:(NSString *)arg1 droppedOnPhotoView:(KHPhotoBinDragView *)arg2;
@end

