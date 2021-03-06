//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AVCVideoStreamConfig : NSObject
{
    long long _txCodecType;
    long long _rxCodecType;
    long long _videoResolution;
    unsigned long long _framerate;
    unsigned long long _txMaxBitrate;
    unsigned long long _txMinBitrate;
    unsigned long long _rxMaxBitrate;
    unsigned long long _rxMinBitrate;
    NSString *_txCodecFeatureListString;
    NSString *_rxCodecFeatureListString;
    unsigned long long _keyFrameInterval;
    int _remoteVideoInitialOrientation;
    BOOL _enableCVO;
    unsigned long long _cvoExtensionID;
    BOOL _isVideoProtected;
    long long _videoStreamMode;
    long long _captureSource;
    unsigned long long _screenDisplayID;
    unsigned long long _customWidth;
    unsigned long long _customHeight;
    unsigned long long _tilesPerFrame;
}

+ (long long)videoStreamTypeFromClientVideoStreamMode:(long long)arg1;
+ (long long)clientVideoStreamModeFromVideoStreamType:(long long)arg1;
+ (int)videoCaptureSourceFromClientCaptureSource:(long long)arg1;
+ (long long)clientVideoCaptureSourceFromCaptureSource:(int)arg1;
+ (long long)clientVideoResolutionFromResolution:(long long)arg1;
+ (long long)videoResolutionFromClientResolution:(long long)arg1;
+ (long long)clientCodecTypeWithCodecType:(long long)arg1;
+ (long long)codecTypeWithClientCodecType:(long long)arg1;
@property(nonatomic) unsigned long long tilesPerFrame; // @synthesize tilesPerFrame=_tilesPerFrame;
@property(nonatomic) unsigned long long customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) unsigned long long customWidth; // @synthesize customWidth=_customWidth;
@property(nonatomic) unsigned long long screenDisplayID; // @synthesize screenDisplayID=_screenDisplayID;
@property(nonatomic) long long captureSource; // @synthesize captureSource=_captureSource;
@property(nonatomic) long long videoStreamMode; // @synthesize videoStreamMode=_videoStreamMode;
@property(nonatomic) BOOL isVideoProtected; // @synthesize isVideoProtected=_isVideoProtected;
@property(nonatomic) unsigned long long cvoExtensionID; // @synthesize cvoExtensionID=_cvoExtensionID;
@property(nonatomic) BOOL enableCVO; // @synthesize enableCVO=_enableCVO;
@property(nonatomic) int remoteVideoInitialOrientation; // @synthesize remoteVideoInitialOrientation=_remoteVideoInitialOrientation;
@property(nonatomic) unsigned long long keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(retain, nonatomic) NSString *rxCodecFeatureListString; // @synthesize rxCodecFeatureListString=_rxCodecFeatureListString;
@property(retain, nonatomic) NSString *txCodecFeatureListString; // @synthesize txCodecFeatureListString=_txCodecFeatureListString;
@property(nonatomic) unsigned long long rxMinBitrate; // @synthesize rxMinBitrate=_rxMinBitrate;
@property(nonatomic) unsigned long long rxMaxBitrate; // @synthesize rxMaxBitrate=_rxMaxBitrate;
@property(nonatomic) unsigned long long txMinBitrate; // @synthesize txMinBitrate=_txMinBitrate;
@property(nonatomic) unsigned long long txMaxBitrate; // @synthesize txMaxBitrate=_txMaxBitrate;
@property(nonatomic) unsigned long long framerate; // @synthesize framerate=_framerate;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
@property(nonatomic) long long rxCodecType; // @synthesize rxCodecType=_rxCodecType;
@property(nonatomic) long long txCodecType; // @synthesize txCodecType=_txCodecType;
- (id)dictionary;
- (void)setUpWithDictionary:(id)arg1;
- (BOOL)isValid;
- (void)dealloc;
- (id)init;

@end

