//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBString;

@protocol _INPBMoveFileIntentResponse <NSObject>
+ (Class)entityNameType;
@property(nonatomic) BOOL hasSuccess;
@property(nonatomic) BOOL success;
@property(readonly, nonatomic) BOOL hasSourceName;
@property(retain, nonatomic) _INPBString *sourceName;
@property(nonatomic) BOOL hasOverwrite;
@property(nonatomic) BOOL overwrite;
@property(readonly, nonatomic) unsigned long long entityTypesCount;
@property(readonly, nonatomic) int *entityTypes;
@property(readonly, nonatomic) unsigned long long entityNamesCount;
@property(copy, nonatomic) NSArray *entityNames;
@property(readonly, nonatomic) BOOL hasDestinationName;
@property(retain, nonatomic) _INPBString *destinationName;
- (int)StringAsEntityTypes:(NSString *)arg1;
- (NSString *)entityTypesAsString:(int)arg1;
- (void)setEntityTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)entityTypeAtIndex:(unsigned long long)arg1;
- (void)addEntityType:(int)arg1;
- (void)clearEntityTypes;
- (_INPBString *)entityNameAtIndex:(unsigned long long)arg1;
- (void)addEntityName:(_INPBString *)arg1;
- (void)clearEntityNames;
@end

