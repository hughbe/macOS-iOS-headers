//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface HMAccessorySetupCompletedInfo : NSObject <NSSecureCoding>
{
    NSArray *_addedAccessoryUUIDs;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *addedAccessoryUUIDs; // @synthesize addedAccessoryUUIDs=_addedAccessoryUUIDs;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessoryList:(id)arg1;

@end

