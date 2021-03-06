//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSURL;

@interface ICAttachmentWebModelIcon : NSObject
{
    BOOL _scaleImageToIconSize;
    NSURL *_url;
    double _scale;
    NSImage *_image;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) BOOL scaleImageToIconSize; // @synthesize scaleImageToIconSize=_scaleImageToIconSize;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)description;
- (id)initWithFallbackURL:(id)arg1 withSize:(struct CGSize)arg2;
- (id)initWithImageURL:(id)arg1;
- (id)initWithURL:(id)arg1 withSize:(struct CGSize)arg2;

@end

