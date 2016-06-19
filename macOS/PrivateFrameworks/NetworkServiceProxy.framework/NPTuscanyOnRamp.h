//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSDate, NWEndpoint, NWHostEndpoint;

@interface NPTuscanyOnRamp : NSObject <NSSecureCoding>
{
    NWEndpoint *_tuscanyEndpoint;
    NWEndpoint *_tuscanyUDPEndpoint;
    NSData *_dayPass;
    unsigned long long _maxFrameSize;
    NWHostEndpoint *_daypassEndpoint;
    double _dayPassHardExpiry;
    NSDate *_dayPassCreationDate;
    NSDate *_retryDate;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSDate *retryDate; // @synthesize retryDate=_retryDate;
@property(readonly) NSDate *dayPassCreationDate; // @synthesize dayPassCreationDate=_dayPassCreationDate;
@property double dayPassHardExpiry; // @synthesize dayPassHardExpiry=_dayPassHardExpiry;
@property(readonly) NWHostEndpoint *daypassEndpoint; // @synthesize daypassEndpoint=_daypassEndpoint;
@property(readonly) unsigned long long maxFrameSize; // @synthesize maxFrameSize=_maxFrameSize;
@property(retain) NSData *dayPass; // @synthesize dayPass=_dayPass;
@property(readonly) NWEndpoint *tuscanyUDPEndpoint; // @synthesize tuscanyUDPEndpoint=_tuscanyUDPEndpoint;
@property(readonly) NWEndpoint *tuscanyEndpoint; // @synthesize tuscanyEndpoint=_tuscanyEndpoint;
- (void).cxx_destruct;
- (void)invalidateDayPass;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly) BOOL isDayPassExpired;
- (BOOL)isDayPassPastExpiry:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)refreshDayPassWithWaldoDelegate:(id)arg1 softExpiry:(double)arg2 retryInterval:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithEndpointString:(id)arg1;

@end

