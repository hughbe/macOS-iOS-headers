//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/NSObject-Protocol.h>
#import <PhotoFoundation/PFStream-Protocol.h>

@protocol PFIStream <NSObject, PFStream>
- (const char *)streamData:(unsigned long long *)arg1;
- (BOOL)readStream:(char *)arg1 length:(unsigned long long)arg2 read:(unsigned long long *)arg3;
@end

