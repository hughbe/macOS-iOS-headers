//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface AppleDoubleXattrResource : NSObject
{
    NSString *_key;
    NSData *_value;
    unsigned long long _flags;
    unsigned long long _keyOffset;
    unsigned long long _keyLength;
    unsigned long long _valueOffset;
    unsigned long long _valueLength;
    unsigned long long _valueLengthOffset;
    unsigned long long _totalSize;
}

@property unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property unsigned long long valueLengthOffset; // @synthesize valueLengthOffset=_valueLengthOffset;
@property unsigned long long valueLength; // @synthesize valueLength=_valueLength;
@property unsigned long long valueOffset; // @synthesize valueOffset=_valueOffset;
@property unsigned long long keyLength; // @synthesize keyLength=_keyLength;
@property unsigned long long keyOffset; // @synthesize keyOffset=_keyOffset;
@property unsigned long long flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSData *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)dealloc;
- (id)description;

@end

