//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHCompositeMediaResult.h>

@class NSNumber;

@interface PHImageResult : PHCompositeMediaResult
{
    struct CGImage *_imageRef;
    NSNumber *_exifOrientation;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *exifOrientation; // @synthesize exifOrientation=_exifOrientation;
- (long long)uiOrientation;
- (id)imageUTI;
- (void)setImageUTI:(id)arg1;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (id)imageURL;
- (void)setImageURL:(id)arg1;
- (struct CGImage *)imageRef;
- (void)setImageRef:(struct CGImage *)arg1;
- (BOOL)containsValidData;
- (void)dealloc;

@end

