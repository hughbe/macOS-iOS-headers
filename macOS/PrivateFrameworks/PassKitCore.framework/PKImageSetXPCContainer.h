//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSObject<OS_xpc_object>;

@interface PKImageSetXPCContainer : NSObject <NSSecureCoding>
{
    unsigned long long _length;
    BOOL _isShmem;
    unsigned long long _offset;
    NSObject<OS_xpc_object> *_data;
    NSData *_imageSetHash;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSData *imageSetHash; // @synthesize imageSetHash=_imageSetHash;
- (void).cxx_destruct;
- (void)purge;
- (id)containedImageSet;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWithXPCObject:(id)arg1 length:(unsigned long long)arg2 isSharedMemory:(BOOL)arg3 offset:(unsigned long long)arg4 hash:(id)arg5;
- (id)initWithWithXPCObject:(id)arg1 hash:(id)arg2;
- (id)init;

@end

