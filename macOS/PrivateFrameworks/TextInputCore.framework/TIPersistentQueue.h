//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface TIPersistentQueue : NSObject
{
    NSURL *_presentedItemURL;
}

- (void).cxx_destruct;
- (void)dequeueObjects:(CDUnknownBlockType)arg1;
- (void)enqueueObjects:(CDUnknownBlockType)arg1;
- (void)readObjects:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1;

@end

