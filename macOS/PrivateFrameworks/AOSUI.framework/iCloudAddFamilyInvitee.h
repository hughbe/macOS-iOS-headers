//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABPerson, NSString;

@interface iCloudAddFamilyInvitee : NSObject
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_nickname;
    NSString *_emailAddress;
    NSString *_displayString;
    ABPerson *_abPerson;
}

@property NSString *displayString; // @synthesize displayString=_displayString;
@property ABPerson *abPerson; // @synthesize abPerson=_abPerson;
@property NSString *nickname; // @synthesize nickname=_nickname;
@property NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property NSString *lastName; // @synthesize lastName=_lastName;
@property NSString *firstName; // @synthesize firstName=_firstName;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 nickname:(id)arg3 emailAddress:(id)arg4 abPerson:(id)arg5 displayString:(id)arg6;

@end

