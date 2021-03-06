//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProVideo/FxVersioningAPI-Protocol.h>
#import <ProVideo/PROAPIObject-Protocol.h>

@class NSString;

@interface OZFxPlugVersioningAPI : NSObject <FxVersioningAPI, PROAPIObject>
{
    struct OZFxPlugSharedBase *_plugin;
}

- (BOOL)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (BOOL)updateVersionAtCreation:(unsigned int)arg1;
- (unsigned int)versionAtCreation;
- (id)initWithPlugin:(struct OZFxPlugSharedBase *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

