//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContact, NSString;

@protocol CNContactPickerInternalResponseDelegate <NSObject>
- (void)didShowSectionWithIdentifier:(NSString *)arg1;
- (void)didSearchForString:(NSString *)arg1;
- (void)didSelectContact:(CNContact *)arg1 key:(NSString *)arg2 value:(id)arg3 identifier:(NSString *)arg4;
@end

