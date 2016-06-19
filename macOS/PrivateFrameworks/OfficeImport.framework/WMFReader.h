//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFReader.h"

@class NSString, WMFPlayer;

__attribute__((visibility("hidden")))
@interface WMFReader : NSObject <MFReader>
{
    int m_recordsRead;
    WMFPlayer *m_player;
    unsigned int m_length;
    const char *m_pBuffer;
    unsigned int m_cursor;
}

- (int)moveDataCursor:(unsigned int)arg1;
- (int)checkBytesAvailable:(unsigned int)arg1;
- (int)playRecord;
- (int)playHeaders;
- (int)play:(id)arg1;
- (oneway void)release;
- (void)dealloc;
- (id)initWithWMFPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

