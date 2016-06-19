//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SFSearchResult.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSString, NSURL, SFActionItem, SFCard, SFCustom, SFImage, SFMoreResults, SFPunchout, SFText;

@interface SFSearchResult : NSObject <SFSearchResult, NSSecureCoding, NSCopying>
{
    BOOL _preventThumbnailImageScaling;
    BOOL _isSecondaryTitleDetached;
    BOOL _isCentered;
    BOOL _isLocalApplicationResult;
    BOOL _renderHorizontallyWithOtherResultsInCategory;
    BOOL _isQuickGlance;
    BOOL _isStreaming;
    NSString *_identifier;
    SFImage *_thumbnail;
    SFText *_title;
    NSString *_secondaryTitle;
    SFImage *_secondaryTitleImage;
    NSArray *_descriptions;
    NSString *_footnote;
    NSString *_publishDate;
    NSString *_sourceName;
    NSString *_completion;
    SFImage *_completionImage;
    NSURL *_url;
    NSString *_auxiliaryTopText;
    NSString *_auxiliaryMiddleText;
    NSString *_auxiliaryBottomText;
    unsigned long long _auxiliaryBottomTextColor;
    SFActionItem *_action;
    SFPunchout *_punchout;
    NSString *_storeIdentifier;
    NSString *_contactIdentifier;
    NSString *_calendarIdentifier;
    NSData *_mapsData;
    NSString *_mapsResultType;
    NSURL *_mapsMoreURL;
    NSString *_mapsMoreString;
    SFImage *_mapsMoreIcon;
    NSString *_nearbyBusinessesString;
    SFCard *_card;
    SFCard *_inlineCard;
    SFMoreResults *_moreResults;
    SFPunchout *_moreResultsPunchout;
    NSString *_applicationBundleIdentifier;
    NSString *_sectionBundleIdentifier;
    NSString *_userActivityRequiredString;
    unsigned long long _topHit;
    NSString *_sectionHeader;
    NSString *_sectionHeaderMore;
    NSURL *_sectionHeaderMoreURL;
    double _rankingScore;
    unsigned long long _placement;
    unsigned long long _type;
    unsigned long long _minimumRankOfTopHitToSuppressResult;
    NSString *_mediaType;
    double _serverScore;
    NSDictionary *_topicDistribution;
    NSDictionary *_featureScaling;
    double _personalizationScore;
    unsigned long long _origRank;
    SFCustom *_customProperties;
    NSString *_resultType;
    NSString *_resultTemplate;
    NSNumber *_engagementScore;
    NSNumber *_queryIndependentScore;
    NSNumber *_maxAge;
    NSString *_titleNote;
    NSNumber *_titleNoteSize;
    NSString *_resultBundleId;
    SFImage *_icon;
    NSDictionary *_localFeatures;
    NSString *_intendedQuery;
    NSString *_correctedQuery;
    NSString *_completedQuery;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *completedQuery; // @synthesize completedQuery=_completedQuery;
@property(retain, nonatomic) NSString *correctedQuery; // @synthesize correctedQuery=_correctedQuery;
@property(retain, nonatomic) NSString *intendedQuery; // @synthesize intendedQuery=_intendedQuery;
@property(retain, nonatomic) NSDictionary *localFeatures; // @synthesize localFeatures=_localFeatures;
@property(retain, nonatomic) SFImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *resultBundleId; // @synthesize resultBundleId=_resultBundleId;
@property(retain, nonatomic) NSNumber *titleNoteSize; // @synthesize titleNoteSize=_titleNoteSize;
@property(retain, nonatomic) NSString *titleNote; // @synthesize titleNote=_titleNote;
@property(retain, nonatomic) NSNumber *maxAge; // @synthesize maxAge=_maxAge;
@property(retain, nonatomic) NSNumber *queryIndependentScore; // @synthesize queryIndependentScore=_queryIndependentScore;
@property(retain, nonatomic) NSNumber *engagementScore; // @synthesize engagementScore=_engagementScore;
@property(nonatomic) BOOL isStreaming; // @synthesize isStreaming=_isStreaming;
@property(nonatomic) BOOL isQuickGlance; // @synthesize isQuickGlance=_isQuickGlance;
@property(retain, nonatomic) NSString *resultTemplate; // @synthesize resultTemplate=_resultTemplate;
@property(retain, nonatomic) NSString *resultType; // @synthesize resultType=_resultType;
@property(retain, nonatomic) SFCustom *customProperties; // @synthesize customProperties=_customProperties;
@property(nonatomic) unsigned long long origRank; // @synthesize origRank=_origRank;
@property(nonatomic) double personalizationScore; // @synthesize personalizationScore=_personalizationScore;
@property(retain, nonatomic) NSDictionary *featureScaling; // @synthesize featureScaling=_featureScaling;
@property(retain, nonatomic) NSDictionary *topicDistribution; // @synthesize topicDistribution=_topicDistribution;
@property(nonatomic) double serverScore; // @synthesize serverScore=_serverScore;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult; // @synthesize minimumRankOfTopHitToSuppressResult=_minimumRankOfTopHitToSuppressResult;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long placement; // @synthesize placement=_placement;
@property(nonatomic) double rankingScore; // @synthesize rankingScore=_rankingScore;
@property(nonatomic) BOOL renderHorizontallyWithOtherResultsInCategory; // @synthesize renderHorizontallyWithOtherResultsInCategory=_renderHorizontallyWithOtherResultsInCategory;
@property(copy, nonatomic) NSURL *sectionHeaderMoreURL; // @synthesize sectionHeaderMoreURL=_sectionHeaderMoreURL;
@property(copy, nonatomic) NSString *sectionHeaderMore; // @synthesize sectionHeaderMore=_sectionHeaderMore;
@property(copy, nonatomic) NSString *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
@property(nonatomic) unsigned long long topHit; // @synthesize topHit=_topHit;
@property(copy, nonatomic) NSString *userActivityRequiredString; // @synthesize userActivityRequiredString=_userActivityRequiredString;
@property(nonatomic) BOOL isLocalApplicationResult; // @synthesize isLocalApplicationResult=_isLocalApplicationResult;
@property(copy, nonatomic) NSString *sectionBundleIdentifier; // @synthesize sectionBundleIdentifier=_sectionBundleIdentifier;
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(retain, nonatomic) SFPunchout *moreResultsPunchout; // @synthesize moreResultsPunchout=_moreResultsPunchout;
@property(retain, nonatomic) SFMoreResults *moreResults; // @synthesize moreResults=_moreResults;
@property(retain, nonatomic) SFCard *inlineCard; // @synthesize inlineCard=_inlineCard;
@property(retain, nonatomic) SFCard *card; // @synthesize card=_card;
@property(copy, nonatomic) NSString *nearbyBusinessesString; // @synthesize nearbyBusinessesString=_nearbyBusinessesString;
@property(retain, nonatomic) SFImage *mapsMoreIcon; // @synthesize mapsMoreIcon=_mapsMoreIcon;
@property(copy, nonatomic) NSString *mapsMoreString; // @synthesize mapsMoreString=_mapsMoreString;
@property(retain, nonatomic) NSURL *mapsMoreURL; // @synthesize mapsMoreURL=_mapsMoreURL;
@property(copy, nonatomic) NSString *mapsResultType; // @synthesize mapsResultType=_mapsResultType;
@property(retain, nonatomic) NSData *mapsData; // @synthesize mapsData=_mapsData;
@property(copy, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(retain, nonatomic) SFPunchout *punchout; // @synthesize punchout=_punchout;
@property(retain, nonatomic) SFActionItem *action; // @synthesize action=_action;
@property(nonatomic) unsigned long long auxiliaryBottomTextColor; // @synthesize auxiliaryBottomTextColor=_auxiliaryBottomTextColor;
@property(copy, nonatomic) NSString *auxiliaryBottomText; // @synthesize auxiliaryBottomText=_auxiliaryBottomText;
@property(copy, nonatomic) NSString *auxiliaryMiddleText; // @synthesize auxiliaryMiddleText=_auxiliaryMiddleText;
@property(copy, nonatomic) NSString *auxiliaryTopText; // @synthesize auxiliaryTopText=_auxiliaryTopText;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) SFImage *completionImage; // @synthesize completionImage=_completionImage;
@property(copy, nonatomic) NSString *completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(copy, nonatomic) NSString *publishDate; // @synthesize publishDate=_publishDate;
@property(copy, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(copy, nonatomic) NSArray *descriptions; // @synthesize descriptions=_descriptions;
@property(nonatomic) BOOL isCentered; // @synthesize isCentered=_isCentered;
@property(nonatomic) BOOL isSecondaryTitleDetached; // @synthesize isSecondaryTitleDetached=_isSecondaryTitleDetached;
@property(retain, nonatomic) SFImage *secondaryTitleImage; // @synthesize secondaryTitleImage=_secondaryTitleImage;
@property(copy, nonatomic) NSString *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(retain, nonatomic) SFText *title; // @synthesize title=_title;
@property(nonatomic) BOOL preventThumbnailImageScaling; // @synthesize preventThumbnailImageScaling=_preventThumbnailImageScaling;
@property(retain, nonatomic) SFImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

