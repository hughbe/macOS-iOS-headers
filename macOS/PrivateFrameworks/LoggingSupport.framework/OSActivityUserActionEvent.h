//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoggingSupport/OSActivityEvent.h>

@interface OSActivityUserActionEvent : OSActivityEvent
{
    unsigned long long _senderProgramCounter;
}

@property(readonly) unsigned long long senderProgramCounter; // @synthesize senderProgramCounter=_senderProgramCounter;
- (void)_addProperties:(id)arg1;
- (id)initWithEntry:(struct os_activity_stream_entry_s *)arg1;

@end

