//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AKCardViewDataSourceSupport;

@interface AKCardViewDataSourceFactory : NSObject
{
    id <AKCardViewDataSourceSupport> _cardView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AKCardViewDataSourceSupport> cardView; // @synthesize cardView=_cardView;
- (id)dataSourceWithContact:(id)arg1 contactStore:(id)arg2 delegate:(id)arg3;
- (id)initWithCardView:(id)arg1;

@end

