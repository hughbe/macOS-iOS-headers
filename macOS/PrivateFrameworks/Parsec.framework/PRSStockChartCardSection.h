//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Parsec/PRSCardSection.h>

@class NSString, NSURL;

@interface PRSStockChartCardSection : PRSCardSection
{
    NSURL *_third_party_content;
    NSString *_symbol;
}

@property(retain, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
@property(retain, nonatomic) NSURL *third_party_content; // @synthesize third_party_content=_third_party_content;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithSFSearchResult:(id)arg1 cardSection:(id)arg2;

@end

