//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, PKPayloadCopier;

@interface _PKSignedContainerCopyCancelHandler : NSObject
{
    PKPayloadCopier *_copier;
    BOOL _isCancelled;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

- (void)cancel;
- (void)setCopier:(id)arg1;
- (BOOL)isCancelled;
- (void)dealloc;
- (id)init;

@end

