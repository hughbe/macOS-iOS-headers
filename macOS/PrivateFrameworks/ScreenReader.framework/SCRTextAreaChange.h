//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCRTextMarker;

__attribute__((visibility("hidden")))
@interface SCRTextAreaChange : NSObject
{
}

+ (void)collapsePairs:(struct NSMutableArray *)arg1;
+ (id)changeWithEditType:(long long)arg1 value:(id)arg2 marker:(id)arg3 length:(unsigned long long)arg4;
- (BOOL)containedByRange:(id)arg1 forUIElement:(id)arg2;
- (void)addValueToOutputRequest:(id)arg1 typingEchoPreference:(unsigned long long)arg2;
- (BOOL)isCandidateForWordEchoWithTypingEchoPreference:(unsigned long long)arg1;
- (BOOL)isCandidateForCharacterEchoWithTypingEchoPreference:(unsigned long long)arg1;

// Remaining properties
@property(readonly, nonatomic) long long editType; // @dynamic editType;
@property(readonly, nonatomic) unsigned long long length; // @dynamic length;
@property(readonly, retain, nonatomic) SCRTextMarker *marker; // @dynamic marker;
@property(readonly, nonatomic, getter=isTruncated) BOOL truncated; // @dynamic truncated;
@property(readonly, copy, nonatomic) NSString *value; // @dynamic value;

@end

