//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <NeutrinoCore/NUColorSamplerResult-Protocol.h>

@class NSString;
@protocol NURenderStatistics;

@interface _NUColorSamplerResult : _NURenderResult <NUColorSamplerResult>
{
    struct CGColor *_color;
    CDStruct_f261e59c _point;
}

@property(retain, nonatomic) struct CGColor *color; // @synthesize color=_color;
@property CDStruct_912cb5d2 point; // @synthesize point=_point;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end

