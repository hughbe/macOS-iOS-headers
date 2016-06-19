//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class ABAddressBook, ABPerson, NSLayoutConstraint, SGRealtimeContact, _ABPersonView;

@interface SGUISuggestedContactPopoverViewController : NSViewController
{
    id <SuggestedContactPopoverControllerDelegate> _delegate;
    _ABPersonView *_personView;
    NSLayoutConstraint *_contentHeightConstraint;
    NSLayoutConstraint *_totalHeightConstraint;
    ABPerson *_representedPerson;
    ABAddressBook *_addressBook;
}

+ (id)keyPathsForValuesAffectingIsNewContact;
+ (id)_addressDictionaryFromComponents:(id)arg1;
@property(retain, nonatomic) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
@property(retain, nonatomic) ABPerson *representedPerson; // @synthesize representedPerson=_representedPerson;
@property(nonatomic) __weak NSLayoutConstraint *totalHeightConstraint; // @synthesize totalHeightConstraint=_totalHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *contentHeightConstraint; // @synthesize contentHeightConstraint=_contentHeightConstraint;
@property(nonatomic) __weak _ABPersonView *personView; // @synthesize personView=_personView;
@property(nonatomic) __weak id <SuggestedContactPopoverControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateContacts:(id)arg1;
- (void)dismissController:(id)arg1;
@property(readonly, nonatomic) BOOL isNewContact;
- (void)_populateRepresentedPerson:(id)arg1;
@property(retain) SGRealtimeContact *representedObject;
- (void)updateViewConstraints;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillAppear;
- (void)dealloc;
- (void)viewDidLoad;

@end

