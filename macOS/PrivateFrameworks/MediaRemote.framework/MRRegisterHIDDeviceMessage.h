//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRVirtualTouchDeviceDescriptor;

@interface MRRegisterHIDDeviceMessage : MRProtocolMessage
{
    MRVirtualTouchDeviceDescriptor *_deviceDescriptor;
}

- (unsigned long long)type;
@property(readonly, copy, nonatomic) MRVirtualTouchDeviceDescriptor *deviceDescriptor;
- (void)dealloc;
- (id)initWithDeviceDescriptor:(id)arg1;

@end

