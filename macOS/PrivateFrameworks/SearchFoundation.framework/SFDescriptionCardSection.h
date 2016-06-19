//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchFoundation/SFTitleCardSection.h>

@class NSNumber, NSString, NSURL, SFImage, SFText;

@interface SFDescriptionCardSection : SFTitleCardSection
{
    BOOL _titleNoWrap;
    BOOL _descriptionExpand;
    SFText *_descriptionText;
    NSString *_expandText;
    SFImage *_image;
    NSNumber *_titleWeight;
    NSNumber *_descriptionSize;
    NSNumber *_descriptionWeight;
    unsigned long long _imageAlign;
    unsigned long long _textAlign;
    NSString *_attributionText;
    NSURL *_attributionURL;
    SFImage *_attributionGlyph;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) SFImage *attributionGlyph; // @synthesize attributionGlyph=_attributionGlyph;
@property(copy, nonatomic) NSURL *attributionURL; // @synthesize attributionURL=_attributionURL;
@property(copy, nonatomic) NSString *attributionText; // @synthesize attributionText=_attributionText;
@property(nonatomic) unsigned long long textAlign; // @synthesize textAlign=_textAlign;
@property(nonatomic) unsigned long long imageAlign; // @synthesize imageAlign=_imageAlign;
@property(nonatomic) BOOL descriptionExpand; // @synthesize descriptionExpand=_descriptionExpand;
@property(copy, nonatomic) NSNumber *descriptionWeight; // @synthesize descriptionWeight=_descriptionWeight;
@property(copy, nonatomic) NSNumber *descriptionSize; // @synthesize descriptionSize=_descriptionSize;
@property(copy, nonatomic) NSNumber *titleWeight; // @synthesize titleWeight=_titleWeight;
@property(nonatomic) BOOL titleNoWrap; // @synthesize titleNoWrap=_titleNoWrap;
@property(retain, nonatomic) SFImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *expandText; // @synthesize expandText=_expandText;
@property(retain, nonatomic) SFText *descriptionText; // @synthesize descriptionText=_descriptionText;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

