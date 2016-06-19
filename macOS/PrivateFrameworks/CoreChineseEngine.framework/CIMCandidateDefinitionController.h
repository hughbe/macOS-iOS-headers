//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface CIMCandidateDefinitionController : NSObject
{
    NSURL *_baseURL;
    NSString *_definition;
    BOOL _hasDefinition;
    NSString *_reading;
    unsigned long long _scriptType;
    NSString *_surface;
    NSString *_canonicalReading;
    struct __DCSDictionary *_definitionDictionary;
}

+ (id)sharedInstance;
@property(nonatomic) struct __DCSDictionary *definitionDictionary; // @synthesize definitionDictionary=_definitionDictionary;
@property(retain, nonatomic) NSString *surface; // @synthesize surface=_surface;
@property(nonatomic) unsigned long long scriptType; // @synthesize scriptType=_scriptType;
@property(retain, nonatomic) NSString *reading; // @synthesize reading=_reading;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasDefinition; // @synthesize hasDefinition=_hasDefinition;
@property(readonly, nonatomic) NSString *definition; // @synthesize definition=_definition;
@property(readonly, nonatomic) NSString *canonicalReading; // @synthesize canonicalReading=_canonicalReading;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (id)readingFromRecord:(struct __DCSRecord *)arg1;
- (void)dealloc;
- (id)init;

@end

