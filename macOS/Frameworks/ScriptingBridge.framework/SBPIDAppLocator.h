//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScriptingBridge/SBAppLocator.h>

__attribute__((visibility("hidden")))
@interface SBPIDAppLocator : SBAppLocator
{
    int _pid;
}

- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)bundleIdentifier;
- (id)path;
- (id)initWithPID:(int)arg1;

@end

