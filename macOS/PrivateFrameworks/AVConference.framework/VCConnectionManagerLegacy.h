//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVConference/VCConnectionManager.h>

__attribute__((visibility("hidden")))
@interface VCConnectionManagerLegacy : VCConnectionManager
{
    id <VCConnectionProtocol> _pendingPrimaryConnection;
    id <VCConnectionProtocol> _pendingSecondaryConnection;
}

@property(retain, nonatomic) id <VCConnectionProtocol> pendingSecondaryConnection; // @synthesize pendingSecondaryConnection=_pendingSecondaryConnection;
@property(retain, nonatomic) id <VCConnectionProtocol> pendingPrimaryConnection; // @synthesize pendingPrimaryConnection=_pendingPrimaryConnection;
- (BOOL)hasConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isPrimary:(char *)arg2;
- (void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isSourceOnCellular:(char *)arg2 isSourceIPv6:(char *)arg3;
- (void)updateCellularTech:(int)arg1 forLocalInterface:(BOOL)arg2;
- (void)updateCellularMTU:(int)arg1;
- (id)getSecondaryConnectionToBeCompared;
- (id)getPrimaryConnectionToBeCompared;
- (int)updateStateWithCurrentConnection:(id)arg1 asPrimary:(BOOL)arg2 interfaceMask:(int)arg3 demote:(int *)arg4 replaceOnly:(int *)arg5;
- (BOOL)shouldNominateConnection:(id)arg1;
- (int)nominateConnection:(id)arg1 asPrimary:(BOOL)arg2 interfaceMask:(int)arg3 demote:(int *)arg4 connectionPriority:(int *)arg5 replaceOnly:(int *)arg6;
- (void)reportConnection:(id)arg1 isInitialConnection:(BOOL)arg2;
- (int)removeConnectionWithIPPortInternal:(struct tagIPPORT *)arg1 isLocalInterface:(BOOL)arg2;
- (int)removeConnectionWithIPPort:(struct tagIPPORT *)arg1 isLocalInterface:(BOOL)arg2;
- (int)removeConnection:(id)arg1;
- (int)addConnection:(id)arg1;
- (int)shouldNominateCandidatePairInternal:(struct tagCANDIDATEPAIR *)arg1 interfaceMask:(int)arg2 nominated:(int *)arg3 demote:(int *)arg4 connectionPriority:(int *)arg5 replaceOnly:(int *)arg6;
- (int)shouldNominateCandidatePair:(struct tagCANDIDATEPAIR *)arg1 interfaceMask:(int)arg2 nominated:(int *)arg3 demote:(int *)arg4 connectionPriority:(int *)arg5 replaceOnly:(int *)arg6;
- (void)dealloc;

@end

