//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDSettingGroupModel.h>

#import <HomeKitDaemon/HMDConflictResolutionModel-Protocol.h>

@class NSUUID;

@interface HMDSettingRootGroupModel : HMDSettingGroupModel <HMDConflictResolutionModel>
{
}

+ (id)hmbProperties;
- (id)copyWithNewParentModelID:(id)arg1;
- (id)nameForKeyPath;
- (id)initWithModelID:(id)arg1 parentModelID:(id)arg2;

// Remaining properties
@property(copy, nonatomic) NSUUID *conflictResolutionToken; // @dynamic conflictResolutionToken;

@end

