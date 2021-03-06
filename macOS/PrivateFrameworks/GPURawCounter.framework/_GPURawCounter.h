//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPURawCounter/GPURawCounter-Protocol.h>

@class NSString;

@interface _GPURawCounter : NSObject <GPURawCounter>
{
    NSString *_name;
    NSString *_description;
    unsigned long long _counterValueType;
}

@property(readonly) unsigned long long counterValueType; // @synthesize counterValueType=_counterValueType;
@property(readonly, copy) NSString *description; // @synthesize description=_description;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)initWithName:(id)arg1 description:(id)arg2 valueType:(unsigned long long)arg3;

@end

