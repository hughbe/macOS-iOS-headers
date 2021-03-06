//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIObjectPickerViewController.h>

#import <SiriUI/CNContactPickerDelegate-Protocol.h>

@class CNContactPicker, NSString;

__attribute__((visibility("hidden")))
@interface SiriUIPersonPickerViewController : SiriUIObjectPickerViewController <CNContactPickerDelegate>
{
    CNContactPicker *_peoplePicker;
}

- (void).cxx_destruct;
- (void)contactPickerDidClose:(id)arg1;
- (void)contactPickerWillClose:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)_dismissPicker;
- (id)_pickerResponseForPerson:(id)arg1;
- (void)showPicker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

