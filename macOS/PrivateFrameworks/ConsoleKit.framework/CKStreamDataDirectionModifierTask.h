//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConsoleKit/CKStreamTask.h>

@class CKStreamData, NSObject<OS_os_log>;

@interface CKStreamDataDirectionModifierTask : CKStreamTask
{
    NSObject<OS_os_log> *_log;
    CKStreamData *_data;
    unsigned long long _newDirection;
    CDUnknownBlockType _completionHandler;
}

+ (id)name;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) unsigned long long newDirection; // @synthesize newDirection=_newDirection;
@property(readonly, nonatomic) __weak CKStreamData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (CDUnknownBlockType)handler;
- (id)initWithData:(id)arg1 direction:(unsigned long long)arg2;
- (id)init;

@end

