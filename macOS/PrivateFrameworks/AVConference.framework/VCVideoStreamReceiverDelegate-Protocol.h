//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, VCVideoStreamReceiver, VideoAttributes;

@protocol VCVideoStreamReceiverDelegate
- (unsigned int)vcVideoStreamReceiver:(VCVideoStreamReceiver *)arg1 receivedTMMBR:(unsigned int)arg2;
- (void)vcVideoStreamReceiver:(VCVideoStreamReceiver *)arg1 downlinkQualityDidChange:(NSDictionary *)arg2;
- (void)vcVideoStreamReceiverRequestKeyFrame:(VCVideoStreamReceiver *)arg1;
- (BOOL)vcVideoStreamReceiver:(VCVideoStreamReceiver *)arg1 didReceiveRemoteFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_1b6d18a9)arg3 newVideoAttributes:(VideoAttributes *)arg4 isFirstFrame:(BOOL)arg5;
@end

