//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKPlacePhotosViewController, NSString, _MKUIViewController;

@protocol MKPlaceCardPhotosControllerDelegate <NSObject>

@optional
- (BOOL)shouldUseSmallPhotosWithPhotosController:(MKPlacePhotosViewController *)arg1;
- (void)placeCardPhotosControllerDidCloseFullscreenPhotos:(MKPlacePhotosViewController *)arg1;
- (void)placeCardPhotosControllerDidOpenFullscreenPhotos:(MKPlacePhotosViewController *)arg1;
- (void)placeCardPhotosController:(MKPlacePhotosViewController *)arg1 didSelectViewPhotoWithID:(NSString *)arg2 presentingViewController:(_MKUIViewController *)arg3;
@end

