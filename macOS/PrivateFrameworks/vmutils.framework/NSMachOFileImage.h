//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <vmutils/NSMachOImage.h>

@interface NSMachOFileImage : NSMachOImage
{
}

+ (void)initialize;
- (int)numberSegments;
- (id)initWithPath:(id)arg1 withCPUType:(int)arg2;
- (id)initWithHeader:(id)arg1;
- (void)readInSegments;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

