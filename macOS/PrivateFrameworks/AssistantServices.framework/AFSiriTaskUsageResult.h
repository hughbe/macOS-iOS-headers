//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface AFSiriTaskUsageResult : NSObject <NSSecureCoding>
{
    NSString *_originatingAceID;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)_resultDescription;
- (id)_originatingAceID;
- (id)_initWithOriginatingAceID:(id)arg1;

@end

