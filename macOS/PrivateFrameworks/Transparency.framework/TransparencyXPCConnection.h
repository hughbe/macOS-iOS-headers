//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface TransparencyXPCConnection : NSObject
{
    NSXPCConnection *_connection;
}

+ (void)invokeXPCSynchronousCallWithBlock:(CDUnknownBlockType)arg1;
+ (void)invokeXPCAsynchronousCallWithBlock:(CDUnknownBlockType)arg1;
+ (void)invokeXPCWithBlock:(CDUnknownBlockType)arg1 synchronous:(BOOL)arg2;
+ (void)removeInstance;
+ (id)instance;
- (void).cxx_destruct;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)createConnection;
- (void)dealloc;

@end

