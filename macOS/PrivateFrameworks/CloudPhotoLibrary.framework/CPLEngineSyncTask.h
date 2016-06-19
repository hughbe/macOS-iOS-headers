//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPLEngineLibrary, NSString;

@interface CPLEngineSyncTask : NSObject
{
    BOOL _foreground;
    BOOL _paused;
    BOOL _cancelled;
    id <CPLEngineSyncTaskDelegate> _delegate;
    CPLEngineLibrary *_engineLibrary;
    id <NSCoding> _transportUserIdentifier;
}

+ (id)taskWithEngineLibrary:(id)arg1;
@property(getter=isCancelled, setter=_setCancelled:) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(getter=isPaused, setter=_setPaused:) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic) BOOL foreground; // @synthesize foreground=_foreground;
@property(retain, nonatomic) id <NSCoding> transportUserIdentifier; // @synthesize transportUserIdentifier=_transportUserIdentifier;
@property(readonly, nonatomic) CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property(retain) id <CPLEngineSyncTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)description;
- (void)taskDidProgress:(float)arg1 userInfo:(id)arg2;
- (void)taskDidFinishWithError:(id)arg1;
- (void)cancel;
- (void)resume;
- (void)pause;
- (void)launch;
@property(readonly, nonatomic) NSString *taskIdentifier;
- (unsigned long long)diskPressureState;
- (id)initWithEngineLibrary:(id)arg1;

@end

