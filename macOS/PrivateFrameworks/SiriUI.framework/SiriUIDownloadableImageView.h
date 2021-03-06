//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSBundle, NSImageView, NSString, NSURL;

@interface SiriUIDownloadableImageView : NSView
{
    NSImageView *_imageView;
    NSURL *_imageURL;
    BOOL _showingPlaceHolderImage;
    NSString *_placeHolderImageName;
    NSBundle *_placeHolderImageBundle;
    double _placeHolderVerticalOffset;
}

- (void).cxx_destruct;
- (void)layout;
- (void)_setImage:(id)arg1 isPlaceHolder:(BOOL)arg2;
- (void)setImageURL:(id)arg1;
- (void)showPlaceHolderImage;
- (void)setPlaceHolderVerticalOffset:(double)arg1;
- (void)setPlaceHolderImageName:(id)arg1;
- (id)initWithImageURL:(id)arg1 placeHolderImageName:(id)arg2 placeHolderImageBundle:(id)arg3;

@end

