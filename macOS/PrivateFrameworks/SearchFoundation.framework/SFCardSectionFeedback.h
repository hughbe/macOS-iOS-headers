//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class SFCardSection;

@interface SFCardSectionFeedback : SFFeedback
{
    SFCardSection *_cardSection;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) SFCardSection *cardSection; // @synthesize cardSection=_cardSection;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCardSection:(id)arg1;

@end

