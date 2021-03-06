//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/CNUIUndoableCommand.h>

@class CNContact, NSString;

@interface CNUIDeleteContactCommand : CNUIUndoableCommand
{
    CNContact *_contact;
    NSString *_containerIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)executeUndoWithCNSaveRequest:(id)arg1;
- (void)executeWithCNSaveRequest:(id)arg1;
- (id)actionName;
- (id)initWithContact:(id)arg1 containerIdentifier:(id)arg2 contactStore:(id)arg3 ignoresGuardianRestrictions:(BOOL)arg4;
- (id)initWithContactStore:(id)arg1 ignoresGuardianRestrictions:(BOOL)arg2;

@end

