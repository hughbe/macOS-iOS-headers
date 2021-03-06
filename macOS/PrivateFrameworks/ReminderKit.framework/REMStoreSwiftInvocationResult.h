//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, REMFetchResultToken;

@interface REMStoreSwiftInvocationResult : NSObject <NSSecureCoding>
{
    NSData *_resultData;
    NSDictionary *_resultStorages;
    REMFetchResultToken *_latestFetchResultToken;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) REMFetchResultToken *latestFetchResultToken; // @synthesize latestFetchResultToken=_latestFetchResultToken;
@property(readonly, nonatomic) NSDictionary *resultStorages; // @synthesize resultStorages=_resultStorages;
@property(readonly, nonatomic) NSData *resultData; // @synthesize resultData=_resultData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResultData:(id)arg1 storages:(id)arg2 latestFetchResultToken:(id)arg3;

@end

