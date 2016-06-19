//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUISingleViewGadget.h>

#import "CalUIResizingTextFieldDelegate.h"

@class EKUIResizingTextField, NSString;

@interface EKUIShareSheetNotesGadget : EKUISingleViewGadget <CalUIResizingTextFieldDelegate>
{
    EKUIResizingTextField *_notesField;
}

+ (id)interestedChangeKeys;
@property(retain) EKUIResizingTextField *notesField; // @synthesize notesField=_notesField;
- (void).cxx_destruct;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)isObjectEditable;
- (id)objectNotes;
- (void)updateNotes:(id)arg1;
- (void)updateObject;
- (void)updateWithChanges:(id)arg1;
- (BOOL)needsExpansion;
- (BOOL)shouldDisplay;
- (id)control;
- (double)maxHeight;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

