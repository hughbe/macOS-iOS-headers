//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface CKItem : NSObject
{
    NSDictionary *_properties;
}

- (void).cxx_destruct;
- (id)_tellAFriendDictionary;
- (id)viewReviewsURL;
- (id)sendGiftURL;
- (id)releaseDate;
- (id)rawItemDictionary;
- (id)mediaKind;
- (id)collectionName;
- (id)bundleVersion;
- (id)bundleIdentifier;
- (id)initWithItemDictionary:(id)arg1;
- (id)description;
- (id)priceDisplay;
- (id)buyParameters;
@property(readonly, nonatomic) NSURL *viewItemURL;
- (id)valueForProperty:(id)arg1;
@property(readonly, nonatomic) NSArray *thumbnailImages;
@property(readonly, nonatomic) long long numberOfUserRatings;
@property(readonly, nonatomic) NSNumber *ITunesStoreIdentifier;
@property(readonly, nonatomic) NSString *itemTitle;
- (id)itemKind;
@property(readonly, nonatomic) float averageUserRating;
@property(readonly, nonatomic) NSString *developerName;

@end

