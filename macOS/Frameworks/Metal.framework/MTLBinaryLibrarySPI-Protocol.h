//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLBinaryLibrary-Protocol.h>

@class MTLBinaryEntry, MTLBinaryKey, MTLBinaryLibraryVersion, NSArray, NSURL;
@protocol MTLDevice;

@protocol MTLBinaryLibrarySPI <MTLBinaryLibrary>
@property(readonly) NSURL *url;
@property(readonly) NSArray *keys;
@property(readonly) MTLBinaryLibraryVersion *version;
- (MTLBinaryEntry *)getBinaryDataWithKey:(MTLBinaryKey *)arg1;
- (void)addBinaryEntry:(MTLBinaryEntry *)arg1;
- (id)initWithOptions:(unsigned long long)arg1 device:(id <MTLDevice>)arg2 url:(NSURL *)arg3 error:(id *)arg4;
@end

