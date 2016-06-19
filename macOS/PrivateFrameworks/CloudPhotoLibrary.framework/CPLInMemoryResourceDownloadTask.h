//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@interface CPLInMemoryResourceDownloadTask : CPLResourceTransferTask
{
    id <CPLEngineTransportTask> _transportTask;
    CDUnknownBlockType _launchHandler;
    CDUnknownBlockType _completionHandler;
}

+ (id)failedTaskForResource:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) CDUnknownBlockType launchHandler; // @synthesize launchHandler=_launchHandler;
@property(retain, nonatomic) id <CPLEngineTransportTask> transportTask; // @synthesize transportTask=_transportTask;
- (void).cxx_destruct;
- (void)finishWithData:(id)arg1 error:(id)arg2;
- (void)cancelTask;
- (void)launch;
- (id)initWithLaunchHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

