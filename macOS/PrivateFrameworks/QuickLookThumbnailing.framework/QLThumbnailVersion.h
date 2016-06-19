//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface QLThumbnailVersion : NSObject <NSSecureCoding>
{
    NSDate *_modificationDate;
    unsigned long long _fileSize;
    NSString *_generatorID;
    NSString *_generatorVersion;
}

+ (BOOL)supportsSecureCoding;
@property unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(copy) NSString *generatorVersion; // @synthesize generatorVersion=_generatorVersion;
@property(copy) NSString *generatorID; // @synthesize generatorID=_generatorID;
- (id)description;
@property(readonly, getter=isAutomaticallyGenerated) BOOL automaticallyGenerated;
- (BOOL)shouldBeInvalidatedByThumbnailWithVersion:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1 automaticallyGenerated:(BOOL)arg2;
- (id)initWithFileURL:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3;
- (id)initWithModificationDate:(id)arg1 fileSize:(unsigned long long)arg2 generatorID:(id)arg3 generatorVersion:(id)arg4;
- (id)init;

@end

