//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/CXProvider.h>

@class CXInProcessCallSource, NSString;

@interface CXInProcessProvider : CXProvider
{
    CXInProcessCallSource *_callSource;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak CXInProcessCallSource *callSource; // @synthesize callSource=_callSource;
- (id)hostProtocolDelegate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithIdentifier:(id)arg1 callSource:(id)arg2 configuration:(id)arg3;
- (id)initWithConfiguration:(id)arg1;

@end

