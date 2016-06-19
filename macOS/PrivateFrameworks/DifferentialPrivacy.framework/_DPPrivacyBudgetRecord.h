//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "_DPStorageMOConversion.h"

@class NSManagedObjectID, NSString;

@interface _DPPrivacyBudgetRecord : NSObject <_DPStorageMOConversion, NSSecureCoding>
{
    NSString *_key;
    double _creationDate;
    double _lastUpdate;
    long long _balance;
    NSManagedObjectID *_objectId;
}

+ (BOOL)supportsSecureCoding;
+ (id)entityName;
+ (id)createRecordFromManagedObject:(id)arg1;
@property(retain, nonatomic) NSManagedObjectID *objectId; // @synthesize objectId=_objectId;
@property(nonatomic) long long balance; // @synthesize balance=_balance;
@property(nonatomic) double lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPrivacyBudgetRecord:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 creationDate:(double)arg2 lastUpdate:(double)arg3 balance:(long long)arg4 objectId:(id)arg5;
- (id)init;
- (BOOL)copyFromManagedObject:(id)arg1;
- (BOOL)copyToManagedObject:(id)arg1;
- (id)entityName;

@end

