//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <RapportUI/NSTableViewDataSource-Protocol.h>
#import <RapportUI/NSTableViewDelegate-Protocol.h>

@class CUPairingManager, NSButton, NSMutableArray, NSProgressIndicator, NSString, NSTableView, NSTextField, RPDevice, RPLegacyDeviceDiscovery, RPLegacySession, RPPairingManagerRemoveViewController, RPPairingManagerUIController, RPPairingUIController;

__attribute__((visibility("hidden")))
@interface RPPairingManagerViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate>
{
    NSTableView *_devicesTable;
    int _progressShown;
    NSProgressIndicator *_progressSpinner;
    NSTextField *_progressLabel;
    NSButton *_doneButton;
    RPLegacyDeviceDiscovery *_deviceDiscovery;
    NSMutableArray *_devices;
    RPDevice *_pairingDevice;
    RPLegacySession *_pairingSession;
    BOOL _pairingStarted;
    RPPairingUIController *_pairingUI;
    CUPairingManager *_pairingManager;
    RPPairingManagerRemoveViewController *_vcRemove;
    BOOL _allowManualIP;
    RPPairingManagerUIController *_mainController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RPPairingManagerUIController *mainController; // @synthesize mainController=_mainController;
@property(nonatomic) BOOL allowManualIP; // @synthesize allowManualIP=_allowManualIP;
- (void)_unpairDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateDeviceInfo:(id)arg1;
- (void)_startPairSetup;
- (void)_startPairingDevice:(id)arg1;
- (void)_removePairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)_findDeviceInsertIndex:(id)arg1;
- (BOOL)_cuPairedPeer:(id)arg1 matchesRPDevice:(id)arg2;
- (void)_pairingMonitorRemoveAllPeers;
- (unsigned long long)_pairingMonitorFindPeerIndex:(id)arg1;
- (void)_pairingMonitorPeerRemoved:(id)arg1;
- (void)_pairingMonitorPeerAdded:(id)arg1;
- (void)_pairingMonitorStop;
- (void)_pairingMonitorStart;
- (void)_discoveryRemoveAllDevices;
- (unsigned long long)_discoveryFindDeviceIndex:(id)arg1;
- (void)_discoveryDeviceChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)_discoveryDeviceLost:(id)arg1;
- (void)_discoveryDeviceFound:(id)arg1;
- (void)_discoveryStop;
- (void)_discoveryStart;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_updateUIStates;
- (void)_updateUIForRemovedItems;
- (void)handleRemoveButton:(id)arg1;
- (void)handlePairButton:(id)arg1;
- (void)handleDoneButton:(id)arg1;
- (void)viewDidDisappear;
- (void)viewWillAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

