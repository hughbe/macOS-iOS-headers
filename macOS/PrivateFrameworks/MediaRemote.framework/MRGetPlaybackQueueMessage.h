//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@interface MRGetPlaybackQueueMessage : MRProtocolMessage
{
    CDStruct_627e0f85 _range;
}

- (unsigned long long)type;
@property(readonly, nonatomic) CDStruct_c537be58 request;
- (void)dealloc;
- (id)initWithRequest:(CDStruct_c537be58)arg1;

@end

