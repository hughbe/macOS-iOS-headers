//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/CalUIAutoCompleteField.h>

#import <CalendarUI/CalUIResizingTextFieldDelegate-Protocol.h>

@class EKUIGadget, NSString;

@interface EKUIEditingField : CalUIAutoCompleteField <CalUIResizingTextFieldDelegate>
{
    EKUIGadget *_gadget;
}

- (void).cxx_destruct;
@property __weak EKUIGadget *gadget; // @synthesize gadget=_gadget;
- (void)configureText;
- (BOOL)canBecomeKeyView;
- (BOOL)becomeFirstResponder;
- (id)initWithGadget:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

