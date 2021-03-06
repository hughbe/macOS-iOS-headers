//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SensorKit/NSFastEnumeration-Protocol.h>

@class NSFileHandle, NSString, SRMemoryMapping;

@interface SRFrameStore : NSObject <NSFastEnumeration>
{
    unsigned int _datastoreVersion;
    SRMemoryMapping *_frames;
    SRMemoryMapping *_header;
    unsigned long long _permission;
    double _lastAbsoluteTimestamp;
    NSString *_segmentName;
    NSFileHandle *_backingFile;
}

+ (CDStruct_5ed3a199)segmentHeaderFromFile:(id)arg1 withVersion:(unsigned int)arg2;
+ (void)initialize;
@property(retain) NSFileHandle *backingFile; // @synthesize backingFile=_backingFile;
@property(copy, nonatomic) NSString *segmentName; // @synthesize segmentName=_segmentName;
- (void)sync;
- (void)markFrameAsRemoved:(void *)arg1;
- (void)writeFrameForBytes:(const void *)arg1 length:(unsigned long long)arg2 timestamp:(double)arg3;
- (void)updateHeader;
- (id)enumerateFromOffset:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void *)nextFrame:(void *)arg1;
- (void *)frameAtOffset:(unsigned long long)arg1;
- (BOOL)isValidFrame:(void *)arg1;
@property(readonly, nonatomic) unsigned long long freeSpace;
@property(readonly, nonatomic) unsigned long long used;
- (BOOL)resizeBackingFileTo:(unsigned long long)arg1;
- (BOOL)resizeMappedRegionTo:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFileHandle:(id)arg1 maxSize:(unsigned long long)arg2 permission:(unsigned long long)arg3 defaults:(id)arg4;

@end

