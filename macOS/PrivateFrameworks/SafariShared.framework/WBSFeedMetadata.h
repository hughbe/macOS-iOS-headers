//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, NSURL;

@interface WBSFeedMetadata : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSURL *_imageURL;
    NSURL *_homepageURL;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSURL *homepageURL; // @synthesize homepageURL=_homepageURL;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 imageURL:(id)arg2 homepageURL:(id)arg3;

@end

