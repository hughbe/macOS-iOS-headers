//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface EWSSRVRecord : NSObject
{
    NSDictionary *_srvRecord;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *srvRecord; // @synthesize srvRecord=_srvRecord;
- (id)description;
@property(readonly, nonatomic) NSNumber *weight;
@property(readonly, nonatomic) NSNumber *priority;
@property(readonly, nonatomic) NSNumber *port;
@property(readonly, copy, nonatomic) NSString *host;
- (id)initWithSRVRecord:(id)arg1;
- (id)init;

@end

