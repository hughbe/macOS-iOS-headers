//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SASettingEntity.h>

@class NSNumber;

@interface SASettingBooleanEntity : SASettingEntity
{
}

+ (id)booleanEntityWithValue:(BOOL)arg1;
+ (id)booleanEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)booleanEntity;
@property(nonatomic) BOOL value;
@property(copy, nonatomic) NSNumber *previousValue;
- (id)initWithValue:(BOOL)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

