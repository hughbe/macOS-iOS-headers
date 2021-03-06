//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHMediaRequestThreadingOptions-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PHContentEditingInputRequestOptions : NSObject <PHMediaRequestThreadingOptions>
{
    BOOL _networkAccessAllowed;
    BOOL _shouldForceOriginalChoice;
    BOOL _dontAllowRAW;
    BOOL _forceRunAsUnadjustedAsset;
    BOOL _forceReturnFullLivePhoto;
    BOOL _forcePrepareCurrentBaseVersionInAddition;
    BOOL _editAsOvercapture;
    BOOL _loadResourcesToFlip;
    BOOL _skipDisplaySizeImage;
    CDUnknownBlockType _canHandleAdjustmentData;
    CDUnknownBlockType _progressHandler;
    long long _contentMode;
    CDUnknownBlockType _canHandleRAW;
    unsigned long long _originalChoice;
    NSObject<OS_dispatch_queue> *_resultHandlerQueue;
    struct CGSize _targetSize;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL skipDisplaySizeImage; // @synthesize skipDisplaySizeImage=_skipDisplaySizeImage;
@property(nonatomic) BOOL loadResourcesToFlip; // @synthesize loadResourcesToFlip=_loadResourcesToFlip;
@property(nonatomic) BOOL editAsOvercapture; // @synthesize editAsOvercapture=_editAsOvercapture;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue; // @synthesize resultHandlerQueue=_resultHandlerQueue;
@property(nonatomic) BOOL forcePrepareCurrentBaseVersionInAddition; // @synthesize forcePrepareCurrentBaseVersionInAddition=_forcePrepareCurrentBaseVersionInAddition;
@property(nonatomic) BOOL forceReturnFullLivePhoto; // @synthesize forceReturnFullLivePhoto=_forceReturnFullLivePhoto;
@property(nonatomic) BOOL forceRunAsUnadjustedAsset; // @synthesize forceRunAsUnadjustedAsset=_forceRunAsUnadjustedAsset;
@property(nonatomic) unsigned long long originalChoice; // @synthesize originalChoice=_originalChoice;
@property(copy, nonatomic) CDUnknownBlockType canHandleRAW; // @synthesize canHandleRAW=_canHandleRAW;
@property(nonatomic) BOOL dontAllowRAW; // @synthesize dontAllowRAW=_dontAllowRAW;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) BOOL shouldForceOriginalChoice; // @synthesize shouldForceOriginalChoice=_shouldForceOriginalChoice;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
@property(copy, nonatomic) CDUnknownBlockType canHandleAdjustmentData; // @synthesize canHandleAdjustmentData=_canHandleAdjustmentData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isSynchronous;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

