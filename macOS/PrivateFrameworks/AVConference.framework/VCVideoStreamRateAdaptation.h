//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VCVideoStreamRateController;

__attribute__((visibility("hidden")))
@interface VCVideoStreamRateAdaptation : NSObject
{
    struct tagHANDLE *_rtpHandle;
    unsigned int _sendTmmbrBitrate;
    unsigned int _receivedTmmbnBitrate;
    unsigned int _operatingBitrate;
    BOOL _rateAdaptationEnabled;
    BOOL _downlinkQualityDidChange;
    BOOL _isOperatingAtMaxBitrate;
    BOOL _isOperatingAtMinBitrate;
    double _tmmbrSendTime;
    double _tmmbnReceiveTime;
    double _tmmbRTT;
    double _packetLossPercentage;
    double _adaptationTime;
    struct opaqueRTCReporting *_reportingAgent;
    VCVideoStreamRateController *_rateController;
}

@property(readonly, nonatomic) unsigned int operatingBitrate; // @synthesize operatingBitrate=_operatingBitrate;
@property(readonly, nonatomic) unsigned int sendTmmbrBitrate; // @synthesize sendTmmbrBitrate=_sendTmmbrBitrate;
@property(readonly, nonatomic) double roundTripTime; // @synthesize roundTripTime=_tmmbRTT;
@property(readonly, nonatomic) double packetLossPercentage; // @synthesize packetLossPercentage=_packetLossPercentage;
@property(readonly, nonatomic) BOOL isOperatingAtMaxBitrate; // @synthesize isOperatingAtMaxBitrate=_isOperatingAtMaxBitrate;
@property(readonly, nonatomic) BOOL isOperatingAtMinBitrate; // @synthesize isOperatingAtMinBitrate=_isOperatingAtMinBitrate;
- (void)reportingVideoStreamEvent:(unsigned short)arg1;
- (id)className;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3;
- (void)updateVideoStall:(BOOL)arg1 withStallDuration:(unsigned int)arg2;
- (void)scheduleTMMBR:(unsigned int)arg1;
- (void)setOperatingBitrate:(unsigned int)arg1;
- (void)receivedTMMBN:(unsigned int)arg1;
- (BOOL)runVideoStreamRateAdaptation;
- (void)setEnableRateAdaptation:(BOOL)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3;
- (void)dealloc;
- (id)initWithRTPHandle:(struct tagHANDLE *)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;

@end

