//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TimeSync/TSgPTPNetworkPort.h>

@class TSgPTPPortStatistics;

@interface TSgPTPFDEtEPort : TSgPTPNetworkPort
{
    TSgPTPPortStatistics *_statistics;
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
@property(retain, nonatomic) TSgPTPPortStatistics *statistics; // @synthesize statistics=_statistics;
- (void)dealloc;
- (id)_statistics;
- (void)updateProperties;
- (BOOL)_commonInitWithService:(unsigned int)arg1;

@end

