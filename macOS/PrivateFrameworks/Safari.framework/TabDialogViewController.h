//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSView;
@protocol TabDialogConfiguration, TabDialogView;

__attribute__((visibility("hidden")))
@interface TabDialogViewController : NSViewController
{
    id <TabDialogConfiguration> _configuration;
    CDStruct_497cfc99 _slot;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_497cfc99 slot; // @synthesize slot=_slot;
@property(readonly, nonatomic) id <TabDialogConfiguration> configuration; // @synthesize configuration=_configuration;
- (void)updateCurrentDialogConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 dialogConfiguration:(id)arg3 slot:(CDStruct_497cfc99)arg4;
- (id)initWithDialogConfiguration:(id)arg1 slot:(CDStruct_497cfc99)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(retain) NSView<TabDialogView> *view; // @dynamic view;

@end

