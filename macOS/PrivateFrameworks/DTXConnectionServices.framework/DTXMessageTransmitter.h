//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DTXMessageTransmitter : NSObject
{
    unsigned int _suggestedFragmentSize;
}

@property unsigned int suggestedFragmentSize; // @synthesize suggestedFragmentSize=_suggestedFragmentSize;
- (void)transmitMessage:(id)arg1 routingInfo:(struct DTXMessageRoutingInfo)arg2 fragment:(unsigned int)arg3 transmitter:(CDUnknownBlockType)arg4;
- (unsigned int)fragmentsForLength:(unsigned long long)arg1;

@end

