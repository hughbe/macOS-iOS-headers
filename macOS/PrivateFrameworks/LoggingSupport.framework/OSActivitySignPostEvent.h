//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoggingSupport/OSActivityEventMessage.h>

@class NSPointerArray, NSString;

@interface OSActivitySignPostEvent : OSActivityEventMessage
{
    NSString *_subsystem;
    NSString *_category;
    unsigned long long _senderProgramCounter;
    unsigned long long _duration;
    NSPointerArray *_callstack;
}

@property(readonly) NSPointerArray *callstack; // @synthesize callstack=_callstack;
@property(readonly) unsigned long long duration; // @synthesize duration=_duration;
@property(readonly) unsigned long long senderProgramCounter; // @synthesize senderProgramCounter=_senderProgramCounter;
@property(readonly, copy) NSString *category; // @synthesize category=_category;
@property(readonly, copy) NSString *subsystem; // @synthesize subsystem=_subsystem;
- (void).cxx_destruct;
- (id)initWithEntry:(struct os_activity_stream_entry_s *)arg1;

@end

