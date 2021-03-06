//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _GEOConfigKeyHelper : NSObject <NSCopying>
{
    id _lastValue;
    NSNumber *_keyNumber;
    NSString *_keyString;
    CDStruct_065526f1 configKey;
}

+ (id)helperForGEOConfigKey:(CDStruct_065526f1)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_065526f1 configKey; // @synthesize configKey;
- (id)description;
- (BOOL)isEqualTo_GEOConfigKeyHelper:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) BOOL valueChanged;
- (id)_currentValue;
@property(readonly, nonatomic) NSNumber *keyNumber; // @synthesize keyNumber=_keyNumber;
@property(readonly, nonatomic) NSString *keyString; // @synthesize keyString=_keyString;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

