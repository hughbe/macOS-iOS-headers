//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PABinaryLocator : NSObject
{
    NSMutableDictionary *_mappings;
    BOOL _dirty;
    BOOL _enabled;
}

+ (id)sharedBinaryLocator;
- (void).cxx_destruct;
- (BOOL)removeURLForUUID:(id)arg1;
- (BOOL)addURLForCSSymbolOwner:(struct _CSTypeRef)arg1;
- (BOOL)addURL:(id)arg1 ForUUID:(id)arg2;
- (id)urlForUUID:(id)arg1;
- (void)saveMappings;
- (void)_saveMappings;
- (id)mappings;
@property BOOL enabled;
- (oneway void)done;
- (id)initSharedBinaryLocator;
- (id)init;

@end

