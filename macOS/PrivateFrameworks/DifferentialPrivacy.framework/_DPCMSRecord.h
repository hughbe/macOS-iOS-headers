//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "_DPJSONString.h"
#import "_DPStorageMOConversion.h"

@class NSManagedObjectID, NSString;

@interface _DPCMSRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding>
{
    BOOL _submitted;
    double _creationDate;
    NSString *_key;
    NSManagedObjectID *_objectId;
}

+ (BOOL)supportsSecureCoding;
+ (id)entityName;
+ (id)createRecordFromManagedObject:(id)arg1;
@property(retain, nonatomic) NSManagedObjectID *objectId; // @synthesize objectId=_objectId;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) BOOL submitted; // @synthesize submitted=_submitted;
@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCMSRecord:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 creationDate:(double)arg2 submitted:(BOOL)arg3 objectId:(id)arg4;
- (id)init;
- (BOOL)copyFromManagedObject:(id)arg1;
- (BOOL)copyToManagedObject:(id)arg1;
- (id)entityName;

@end

