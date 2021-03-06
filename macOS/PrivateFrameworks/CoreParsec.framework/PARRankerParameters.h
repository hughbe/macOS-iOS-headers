//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IFCentroidModelParameters, NSString, PARPersonalizationParameters;

@interface PARRankerParameters : NSObject
{
    NSString *_client;
    IFCentroidModelParameters *_modelParameters;
    PARPersonalizationParameters *_personalizationParameters;
}

@property(retain) PARPersonalizationParameters *personalizationParameters; // @synthesize personalizationParameters=_personalizationParameters;
@property(retain) IFCentroidModelParameters *modelParameters; // @synthesize modelParameters=_modelParameters;
@property(retain) NSString *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)initWithRankingAlgorithmsAndCentroid:(id)arg1 centroidModelParameters:(id)arg2;
- (id)initWithRankingAlgorithms:(id)arg1 centroidModelParameters:(id)arg2;
- (id)init;

@end

