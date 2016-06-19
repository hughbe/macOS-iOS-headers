//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSMutableArray, NSString, NSURL;

@interface CalDAVPrincipalResult : NSObject <NSSecureCoding>
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_displayName;
    NSString *_type;
    NSString *_principal;
    NSMutableArray *_emails;
    NSMutableArray *_cuAddresses;
    NSURL *_overrideBaseURL;
}

+ (id)resultFromResponse:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain) NSURL *overrideBaseURL; // @synthesize overrideBaseURL=_overrideBaseURL;
@property(retain) NSArray *cuAddresses; // @synthesize cuAddresses=_cuAddresses;
@property(retain) NSString *principalPath; // @synthesize principalPath=_principal;
@property(retain) NSArray *emailAddresses; // @synthesize emailAddresses=_emails;
@property(retain) NSString *resultType; // @synthesize resultType=_type;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain) NSString *firstName; // @synthesize firstName=_firstName;
- (id)description;
@property(readonly, retain) NSString *emailAddress;
@property(readonly, retain) NSString *preferredCUAddress;
- (void)addEmail:(id)arg1;
- (void)addCUAddress:(id)arg1;
- (id)initWithResponse:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

