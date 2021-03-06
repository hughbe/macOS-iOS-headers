//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Automator/NSObject-Protocol.h>

@class AMFFeedMetadata, AMFFeedParser, NSArray, NSError;

@protocol AMFFeedParserDelegate <NSObject>
- (void)feedParser:(AMFFeedParser *)arg1 failedParsingFeedWithError:(NSError *)arg2;
- (void)feedParser:(AMFFeedParser *)arg1 parsedFeedWithMetadata:(AMFFeedMetadata *)arg2 entries:(NSArray *)arg3;
@end

