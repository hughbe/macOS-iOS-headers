//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ShazamKit/NSObject-Protocol.h>

@class NSError, SHMatch, SHSignature;
@protocol SHMatcher;

@protocol SHMatcherDelegate <NSObject>
- (void)matcher:(id <SHMatcher>)arg1 didFailForSignature:(SHSignature *)arg2 withError:(NSError *)arg3;
- (void)matcher:(id <SHMatcher>)arg1 didNotFindMatchForSignature:(SHSignature *)arg2 needsMinimumAudioLength:(double)arg3;
- (void)matcher:(id <SHMatcher>)arg1 didNotFindMatchForSignature:(SHSignature *)arg2;
- (void)matcher:(id <SHMatcher>)arg1 didFindMatch:(SHMatch *)arg2 forSignature:(SHSignature *)arg3;
@end

