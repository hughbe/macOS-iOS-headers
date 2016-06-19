//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICPropertyListSerializable.h"
#import "NSCopying.h"

@class NSString;

@interface ICSearchIndexableNoteContextIdentifier : NSObject <NSCopying, ICPropertyListSerializable>
{
    BOOL _isMainContext;
    BOOL _forAnyContext;
    NSString *_contextIdentifierString;
}

+ (id)identifierForAnyContext;
@property(readonly, nonatomic) BOOL forAnyContext; // @synthesize forAnyContext=_forAnyContext;
@property(readonly, nonatomic) BOOL isMainContext; // @synthesize isMainContext=_isMainContext;
@property(readonly, nonatomic) NSString *contextIdentifierString; // @synthesize contextIdentifierString=_contextIdentifierString;
- (void).cxx_destruct;
- (BOOL)isCompatibleWithContextIdentifier:(id)arg1;
- (id)propertyListObjectRepresentation;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPropertyListObjectRepresentation:(id)arg1 version:(long long)arg2;
- (id)initForAnyContext;
- (id)initWithContextIdentifierString:(id)arg1 isMainContext:(BOOL)arg2;

@end

