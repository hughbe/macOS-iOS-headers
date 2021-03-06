//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLAssetResolver-Protocol.h>

@class NSString;

@interface MDLPathAssetResolver : NSObject <MDLAssetResolver>
{
    NSString *_path;
}

- (void).cxx_destruct;
- (id)resolveAssetNamed:(id)arg1;
- (BOOL)canResolveAssetNamed:(id)arg1;
- (id)initWithPath:(id)arg1;
@property(copy, nonatomic) NSString *path;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

