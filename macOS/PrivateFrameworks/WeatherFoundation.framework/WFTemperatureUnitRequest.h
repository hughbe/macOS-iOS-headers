//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WeatherFoundation/WFTask.h>

@interface WFTemperatureUnitRequest : WFTask
{
    CDUnknownBlockType _resultHandler;
}

@property(copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
- (void).cxx_destruct;
- (void)handleResponse:(id)arg1;
- (void)startWithService:(id)arg1;
- (BOOL)requiresResponse;
- (id)initWithResultHandler:(CDUnknownBlockType)arg1;

@end

