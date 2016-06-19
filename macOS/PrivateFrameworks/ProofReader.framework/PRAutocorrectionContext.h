//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PRAutocorrectionContext : NSObject
{
    unsigned long long _modificationMask;
}

+ (void)clearCaches;
+ (id)autocorrectionContextOfType:(unsigned long long)arg1;
- (double)validSequenceCorrectionThreshold;
- (void)setValidSequenceCorrectionThreshold:(double)arg1;
- (void)reset;
- (id)correction;
- (id)completions;
- (id)guesses;
- (id)prefixes;
- (id)removedModifications;
- (id)addedModifications;
- (id)currentModifications;
- (unsigned long long)modificationMask;
- (void)setModificationMask:(unsigned long long)arg1;
- (void)addInputCharacter:(unsigned short)arg1 geometryModel:(void *)arg2 geometryData:(id)arg3;
- (void)addInputCharacter:(unsigned short)arg1 geometryData:(id)arg2;

@end

