//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface EWSSRVLookup : NSObject
{
    NSString *_host;
    NSString *_servicePrefix;
    NSArray *_discoveredRecords;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *discoveredRecords; // @synthesize discoveredRecords=_discoveredRecords;
@property(readonly, copy, nonatomic) NSString *servicePrefix; // @synthesize servicePrefix=_servicePrefix;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
- (BOOL)lookup;
- (id)init;
- (id)initWithServicePrefix:(id)arg1 onHost:(id)arg2;

@end

