//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class GPBListValue, GPBStruct, NSString;

__attribute__((visibility("hidden")))
@interface GPBValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) BOOL boolValue; // @dynamic boolValue;
@property(readonly, nonatomic) int kindOneOfCase; // @dynamic kindOneOfCase;
@property(retain, nonatomic) GPBListValue *listValue; // @dynamic listValue;
@property(nonatomic) int nullValue; // @dynamic nullValue;
@property(nonatomic) double numberValue; // @dynamic numberValue;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;
@property(retain, nonatomic) GPBStruct *structValue; // @dynamic structValue;

@end

