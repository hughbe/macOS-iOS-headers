//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CUTWeakReference : NSObject
{
    id _object;
    unsigned long long _objectAddress;
}

+ (id)weakRefWithObject:(id)arg1;
- (id)object;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;

@end

