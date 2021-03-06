//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSMethodSignature : NSObject
{
    struct NSMethodFrameDescriptor *_frameDescriptor;
    char *_typeString;
    unsigned long long _flags;
}

+ (id)signatureWithObjCTypes:(const char *)arg1;
- (id)debugDescription;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)_isAllObjects;
- (BOOL)_isHiddenStructRet;
@property(readonly) unsigned long long methodReturnLength;
@property(readonly) const char *methodReturnType;
- (BOOL)isOneway;
@property(readonly) unsigned long long frameLength;
- (const char *)getArgumentTypeAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long numberOfArguments;
- (id)_protocolsForObjectAtArgumentIndex:(long long)arg1;
- (Class)_classForObjectAtArgumentIndex:(long long)arg1;
- (id)_signatureForBlockAtArgumentIndex:(long long)arg1;
- (id)_typeString;
- (const char *)_cTypeString;
- (struct NSMethodFrameArgInfo *)_argInfo:(long long)arg1;
- (unsigned long long)_flags;
- (struct NSMethodFrameDescriptor *)_frameDescriptor;
- (void)dealloc;
- (id)init;

@end

