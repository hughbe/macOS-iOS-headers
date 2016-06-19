//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Parsec/PRSModel.h>

@interface PRSNaiveBayesCoreEngine : PRSModel
{
}

- (id)getTopHitForQuery:(id)arg1 results:(id)arg2;
- (void)updateModel;
- (void)addResultToTrainingData:(id)arg1 query:(id)arg2;
- (void)purgeDataOlderThanTime:(double)arg1;
- (void)purgeAllData;
- (id)initWithTrainingDBFilePath:(id)arg1 modelDBFilePath:(id)arg2;

@end

