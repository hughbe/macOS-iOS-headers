//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorAudioResults : NSObject
{
    unsigned int _remoteSSRC;
    unsigned int _audioUnitModel;
    BOOL _allowRecording;
    BOOL _allowSwitching;
    int _primaryPayload;
    int _dtxPayload;
    NSMutableArray *_secondaryPayloads;
}

@property(nonatomic) unsigned int remoteSSRC; // @synthesize remoteSSRC=_remoteSSRC;
@property(nonatomic) BOOL allowSwitching; // @synthesize allowSwitching=_allowSwitching;
@property(nonatomic) unsigned int audioUnitModel; // @synthesize audioUnitModel=_audioUnitModel;
@property(nonatomic) BOOL allowRecording; // @synthesize allowRecording=_allowRecording;
@property(readonly, nonatomic) NSArray *secondaryPayloads; // @synthesize secondaryPayloads=_secondaryPayloads;
@property(nonatomic) int dtxPayload; // @synthesize dtxPayload=_dtxPayload;
@property(nonatomic) int primaryPayload; // @synthesize primaryPayload=_primaryPayload;
- (void)dealloc;
- (void)addSecondaryPayload:(int)arg1;
- (id)init;

@end

