//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface CSIndexJob : NSObject <NSSecureCoding, NSCopying>
{
    long long _jobType;
    long long _jobOptions;
    NSArray *_identifiersToReindex;
    NSArray *_bundleIDs;
    NSArray *_excludedBundleIDs;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *excludedBundleIDs; // @synthesize excludedBundleIDs=_excludedBundleIDs;
@property(retain, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property(retain, nonatomic) NSArray *identifiersToReindex; // @synthesize identifiersToReindex=_identifiersToReindex;
@property(nonatomic) long long jobOptions; // @synthesize jobOptions=_jobOptions;
@property(nonatomic) long long jobType; // @synthesize jobType=_jobType;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithJobType:(long long)arg1;
- (id)initWithJobType:(long long)arg1 jobOptions:(long long)arg2;

@end

