//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchFoundation/SFText.h>

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface SFRichText : SFText <NSSecureCoding>
{
    double _starRating;
    NSString *_contentAdvisory;
    NSArray *_icons;
    NSArray *_formattedTextPieces;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSArray *formattedTextPieces; // @synthesize formattedTextPieces=_formattedTextPieces;
@property(copy, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(copy, nonatomic) NSString *contentAdvisory; // @synthesize contentAdvisory=_contentAdvisory;
@property(nonatomic) double starRating; // @synthesize starRating=_starRating;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)loadRichTextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCoder:(id)arg1;

@end

