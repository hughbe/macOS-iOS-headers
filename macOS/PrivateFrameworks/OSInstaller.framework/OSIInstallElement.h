//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OSInstaller/OSIInstallQueueElement.h>

@class NSArray, NSError, NSObject<OS_dispatch_semaphore>;

@interface OSIInstallElement : OSIInstallQueueElement
{
    NSArray *_packages;
    NSObject<OS_dispatch_semaphore> *_waitUntilDone;
    BOOL _done;
    NSError *_error;
    BOOL _isOSInstall;
    double _totalEstimatedTime;
}

@property BOOL isOSInstall; // @synthesize isOSInstall=_isOSInstall;
- (double)estimatedTimeToComplete;
- (void)installClientDidFinish:(id)arg1;
- (void)installClient:(id)arg1 didFailWithError:(id)arg2;
- (void)installClient:(id)arg1 currentState:(int)arg2 package:(id)arg3 progress:(double)arg4 timeRemaining:(double)arg5;
- (void)installClientDidBegin:(id)arg1;
- (void)setExternalRootMountPoint:(id)arg1;
- (id)localizedStatusString;
- (id)operationName;
- (BOOL)runReturningError:(id *)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 packageSpecifiers:(id)arg2 isOSInstall:(BOOL)arg3;

@end

