//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABLEVectorModel, NSArray;

@interface ABLETimeSeriesModel : NSObject
{
    NSArray *_filter;
    double _period;
    ABLEVectorModel *_vectorModel;
}

+ (id)modelWithPeriod:(double)arg1 andFilter:(id)arg2;
@property(readonly) ABLEVectorModel *vectorModel; // @synthesize vectorModel=_vectorModel;
@property(readonly) double period; // @synthesize period=_period;
@property(readonly) NSArray *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)predictAll:(id)arg1;
- (id)predictSingle:(id)arg1;
- (id)initWithPeriod:(double)arg1 andFilter:(id)arg2;

@end

