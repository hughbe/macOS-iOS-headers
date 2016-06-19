//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSPredicate;

@interface RDQueryOptions : NSObject <NSCopying>
{
    BOOL _showHidden;
    BOOL _showInTrash;
    BOOL _writableModels;
    BOOL _shouldPrefetchCount;
    NSArray *_loadProperties;
    NSArray *_additionalChangeProperties;
    NSPredicate *_predicate;
    unsigned long long _minimumVerifiedFaceCount;
    unsigned long long _minimumUnverifiedFaceCount;
    long long _personContext;
}

@property(nonatomic) long long personContext; // @synthesize personContext=_personContext;
@property(nonatomic) unsigned long long minimumUnverifiedFaceCount; // @synthesize minimumUnverifiedFaceCount=_minimumUnverifiedFaceCount;
@property(nonatomic) unsigned long long minimumVerifiedFaceCount; // @synthesize minimumVerifiedFaceCount=_minimumVerifiedFaceCount;
@property(nonatomic) BOOL shouldPrefetchCount; // @synthesize shouldPrefetchCount=_shouldPrefetchCount;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(retain, nonatomic) NSArray *additionalChangeProperties; // @synthesize additionalChangeProperties=_additionalChangeProperties;
@property(retain, nonatomic) NSArray *loadProperties; // @synthesize loadProperties=_loadProperties;
@property(nonatomic) BOOL writableModels; // @synthesize writableModels=_writableModels;
@property(nonatomic) BOOL showInTrash; // @synthesize showInTrash=_showInTrash;
@property(nonatomic) BOOL showHidden; // @synthesize showHidden=_showHidden;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

