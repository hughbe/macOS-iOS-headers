//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OADCharacterProperties;

__attribute__((visibility("hidden")))
@interface OADTextRun : NSObject
{
    OADCharacterProperties *mProperties;
}

- (id)description;
- (BOOL)isSimilarToTextRun:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (void)setProperties:(id)arg1;
- (id)properties;
- (unsigned long long)characterCount;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)init;

@end

