//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID, _DPDataProtectionMaster;

@interface _DPDataProtectionStateMonitor : NSObject
{
    CDUnknownBlockType _changeHandler;
    _DPDataProtectionMaster *_master;
    NSUUID *_handlerUUID;
}

+ (id)dataProtectionClassD;
+ (id)dataProtectionClassC;
+ (id)dataProtectionClassA;
@property(readonly) NSUUID *handlerUUID; // @synthesize handlerUUID=_handlerUUID;
@property(readonly, nonatomic) _DPDataProtectionMaster *master; // @synthesize master=_master;
@property(copy) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
- (void).cxx_destruct;
- (BOOL)isDataAvailableFor:(id)arg1;
- (void)dealloc;
- (id)init;

@end

