//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber, NSString;

@interface SAAlarmObject : SADomainObject
{
}

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;
@property(copy, nonatomic) NSNumber *relativeOffsetMinutes;
@property(copy, nonatomic) NSNumber *minute;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSNumber *hour;
@property(copy, nonatomic) NSArray *frequency;
@property(copy, nonatomic) NSNumber *enabled;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

