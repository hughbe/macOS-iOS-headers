//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Parsec/PRSTitleCardSection.h>

@class NSImage;

@interface PRSWebSiteCardSection : PRSTitleCardSection
{
    BOOL _title_nowrap;
    int _image_size;
    NSImage *_image;
    CDUnknownBlockType _clickAction;
}

+ (id)safariIcon;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property(nonatomic) int image_size; // @synthesize image_size=_image_size;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) BOOL title_nowrap; // @synthesize title_nowrap=_title_nowrap;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithSFSearchResult:(id)arg1 cardSection:(id)arg2;

@end

