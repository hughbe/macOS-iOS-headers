//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRAVDistantExternalDeviceMetadata.h>

@class MRSupportedProtocolMessages, NSString, _MRDeviceInfoMessageProtobuf;

@interface MRAVMutableDistantExternalDeviceMetadata : MRAVDistantExternalDeviceMetadata
{
}

@property(nonatomic) BOOL usingSystemPairing; // @dynamic usingSystemPairing;
@property(nonatomic) BOOL paired; // @dynamic paired;
@property(retain, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo; // @dynamic deviceInfo;
@property(retain, nonatomic) MRSupportedProtocolMessages *supportedMessages; // @dynamic supportedMessages;
@property(nonatomic) long long hostPort; // @dynamic hostPort;
@property(copy, nonatomic) NSString *hostName; // @dynamic hostName;
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end

