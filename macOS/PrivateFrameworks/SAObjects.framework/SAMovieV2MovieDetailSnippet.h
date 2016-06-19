//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSDate, NSNumber, NSString, NSURL, SAMovieV2ReviewListSnippet, SAMovieV2ShowtimeSnippet, SAMovieV2TheaterShowtimeListSnippet, SAUIAppPunchOut;

@interface SAMovieV2MovieDetailSnippet : SAUISnippet
{
}

+ (id)movieDetailSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)movieDetailSnippet;
@property(copy, nonatomic) NSDate *theatricalReleaseDate;
@property(copy, nonatomic) NSString *theaterShowtimeSearchRegionDescription;
@property(retain, nonatomic) SAMovieV2TheaterShowtimeListSnippet *theaterShowtimeListSnippet;
@property(copy, nonatomic) NSString *synopsis;
@property(copy, nonatomic) NSArray *studios;
@property(retain, nonatomic) SAMovieV2ShowtimeSnippet *showtimeSnippet;
@property(nonatomic) long long runtimeInMinutes;
@property(copy, nonatomic) NSString *rating;
@property(copy, nonatomic) NSNumber *qualityRating;
@property(copy, nonatomic) NSArray *posterImages;
@property(copy, nonatomic) NSNumber *playTrailer;
@property(retain, nonatomic) SAUIAppPunchOut *playOnItunesPunchout;
@property(copy, nonatomic) NSString *name;
@property(retain, nonatomic) SAMovieV2ReviewListSnippet *movieReviewListSnippet;
@property(copy, nonatomic) NSURL *movieIdentifier;
@property(copy, nonatomic) NSURL *lowresTrailerUri;
@property(nonatomic) BOOL is3d;
@property(copy, nonatomic) NSURL *iTunesUri;
@property(copy, nonatomic) NSURL *hiresTrailerUri;
@property(copy, nonatomic) NSArray *genres;
@property(copy, nonatomic) NSArray *directors;
@property(copy, nonatomic) NSNumber *availableOnItunesForRent;
@property(copy, nonatomic) NSNumber *availableOnItunesForPurchase;
@property(copy, nonatomic) NSArray *alternateProviderPunchouts;
@property(copy, nonatomic) NSString *adamId;
@property(copy, nonatomic) NSArray *actors;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

