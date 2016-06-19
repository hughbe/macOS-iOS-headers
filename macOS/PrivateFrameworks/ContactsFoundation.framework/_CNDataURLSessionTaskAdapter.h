//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _CNDataURLSessionTaskAdapter : NSObject <NSURLSessionDataDelegate>
{
    CDUnknownBlockType _onDataReceived;
    CDUnknownBlockType _onCompletion;
}

@property(copy) CDUnknownBlockType onCompletion; // @synthesize onCompletion=_onCompletion;
@property(copy) CDUnknownBlockType onDataReceived; // @synthesize onDataReceived=_onDataReceived;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

