//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/CNUIUserActionListDataSource-Protocol.h>

@class NSArray, NSImage, NSString;
@protocol CNUIUserActionDisambiguationView;

@protocol CNUIUserActionDisambiguationViewDataSource <CNUIUserActionListDataSource>
- (NSImage *)contactActionsView:(id <CNUIUserActionDisambiguationView>)arg1 imageForActionCategory:(NSString *)arg2;
- (NSArray *)categoriesForContactActionsView:(id <CNUIUserActionDisambiguationView>)arg1;
@end

