//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface CodeRequirement : NSObject
{
    struct __SecRequirement *_secRequirementRef;
    NSData *_data;
    NSString *_text;
}

@property(readonly) struct __SecRequirement *requirementRef; // @synthesize requirementRef=_secRequirementRef;
- (void).cxx_destruct;
- (BOOL)validateCode:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (id)description;
- (id)stringValue;
- (id)data;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithText:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithSecRequirementRef:(struct __SecRequirement *)arg1;
- (id)init;

@end

