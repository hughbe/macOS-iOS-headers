//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSPropertyStoreMapping.h>

__attribute__((visibility("hidden")))
@interface NSAttributeStoreMapping : NSPropertyStoreMapping
{
    int _externalType;
    unsigned int _externalPrecision;
    int _externalScale;
}

- (id)columnDefinition;
- (id)sqlType;
- (void)setExternalScale:(int)arg1;
- (int)externalScale;
- (void)setExternalPrecision:(unsigned int)arg1;
- (unsigned int)externalPrecision;
- (void)setExternalType:(int)arg1;
- (int)externalType;
- (id)attribute;
- (BOOL)isEqual:(id)arg1;
- (id)initWithProperty:(id)arg1;

@end

