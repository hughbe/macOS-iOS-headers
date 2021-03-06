//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, XCTCapabilities;

@interface XCTCapabilitiesBuilder : NSObject
{
    NSMutableDictionary *_capabilitiesDictionary;
}

+ (id)capabilitiesFromProvider:(Class)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSMutableDictionary *capabilitiesDictionary; // @synthesize capabilitiesDictionary=_capabilitiesDictionary;
@property(readonly, copy) XCTCapabilities *capabilities;
- (void)upgradeCapability:(id)arg1 toVersion:(unsigned long long)arg2;
- (void)registerCapability:(id)arg1;
- (void)registerCapability:(id)arg1 version:(unsigned long long)arg2;
- (id)init;

@end

