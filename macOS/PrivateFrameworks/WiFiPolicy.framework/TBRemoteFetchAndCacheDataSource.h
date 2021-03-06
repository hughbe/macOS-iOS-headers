//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TBDataSource;
@protocol TBCacheProvider;

@interface TBRemoteFetchAndCacheDataSource : NSObject
{
    TBDataSource *_fetchDataSource;
    id <TBCacheProvider> _cacheProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TBCacheProvider> cacheProvider; // @synthesize cacheProvider=_cacheProvider;
@property(retain, nonatomic) TBDataSource *fetchDataSource; // @synthesize fetchDataSource=_fetchDataSource;
- (id)initWithFetchDataSource:(id)arg1 cacheProvider:(id)arg2;

@end

