//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/WBSParsecLegacySearchResult.h>

@class NSMutableArray, NSString;

@interface WBSParsecSearchMoviesResult : WBSParsecLegacySearchResult
{
    NSMutableArray *_posterRepresentations;
    NSString *_descriptionLeadInText;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *descriptionLeadInText; // @synthesize descriptionLeadInText=_descriptionLeadInText;
- (id)postersWithSession:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

