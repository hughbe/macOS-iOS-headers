//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightServices/PRSCardSection.h>

@class NSString, NSURL;

@interface PRSStockChartCardSection : PRSCardSection
{
    NSURL *_third_party_content;
    NSString *_symbol;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
@property(retain, nonatomic) NSURL *third_party_content; // @synthesize third_party_content=_third_party_content;
- (long long)type;
- (id)initWithSFSearchResult:(id)arg1 cardSection:(id)arg2;

@end

