//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ABPersonListSearchController, CNContactCardViewController, CNContactListController, CNContactPickerView;
@protocol CNContactPickerInternalResponseDelegate;

@interface CNContactPickerScope : NSObject
{
    BOOL _shouldShowSelectedContact;
    CNContactPickerView *_pickerView;
    CNContactListController *_contactListController;
    ABPersonListSearchController *_searchController;
    CNContactCardViewController *_contactCardViewController;
    id <CNContactPickerInternalResponseDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly) BOOL shouldShowSelectedContact; // @synthesize shouldShowSelectedContact=_shouldShowSelectedContact;
@property(readonly) __weak id <CNContactPickerInternalResponseDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) __weak CNContactCardViewController *contactCardViewController; // @synthesize contactCardViewController=_contactCardViewController;
@property(readonly) __weak ABPersonListSearchController *searchController; // @synthesize searchController=_searchController;
@property(readonly) __weak CNContactListController *contactListController; // @synthesize contactListController=_contactListController;
@property(readonly) __weak CNContactPickerView *pickerView; // @synthesize pickerView=_pickerView;
- (id)initWithInternalResponseDelegate:(id)arg1 contactListController:(id)arg2 searchController:(id)arg3 contactCardViewController:(id)arg4 pickerView:(id)arg5 shouldShowSelectedContact:(BOOL)arg6;

@end

