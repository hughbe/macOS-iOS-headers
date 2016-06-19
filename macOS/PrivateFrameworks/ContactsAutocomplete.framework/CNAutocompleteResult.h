//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNAutocompleteNameComponents, CNAutocompleteResultValue, NSArray, NSDictionary, NSString;

@interface CNAutocompleteResult : NSObject
{
    NSString *_displayName;
    BOOL _hasPreferredDomain;
    BOOL _hasPrefixMatch;
    unsigned long long _sourceType;
    CNAutocompleteNameComponents *_nameComponents;
    NSString *_identifier;
    CNAutocompleteResultValue *_value;
    NSDictionary *_userInfo;
    NSString *_lastSendingAddress;
    CDUnknownBlockType _membersProvider;
    CDUnknownBlockType _contactProvider;
    NSArray *_diagnosticLogs;
    CDUnknownBlockType _ignoreResultBlock;
    long long _resultType;
}

+ (BOOL)isSourceTypeConsideredSuggestion:(unsigned long long)arg1;
+ (id)contactStoreForFetchingFullContacts;
+ (id)groupResultWithDisplayName:(id)arg1 identifier:(id)arg2;
+ (id)contactResultWithDisplayName:(id)arg1 value:(id)arg2 nameComponents:(id)arg3 identifier:(id)arg4;
+ (id)comparators;
+ (unsigned long long)category;
+ (id)localeForHashing;
+ (id)resultWithDisplayName:(id)arg1;
+ (id)calDAVResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 groupMembersProvider:(CDUnknownBlockType)arg5 userInfo:(id)arg6;
+ (id)messagesResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 addressType:(long long)arg5 identifier:(id)arg6 contactProvider:(CDUnknownBlockType)arg7 groupMembersProvider:(CDUnknownBlockType)arg8 userInfo:(id)arg9;
+ (id)messagesResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 groupMembersProvider:(CDUnknownBlockType)arg5 userInfo:(id)arg6;
+ (id)calDAVResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 groupMembersProvider:(CDUnknownBlockType)arg5;
+ (id)calDAVResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3;
@property long long resultType; // @synthesize resultType=_resultType;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy) NSString *lastSendingAddress; // @synthesize lastSendingAddress=_lastSendingAddress;
@property(copy, nonatomic) CDUnknownBlockType ignoreResultBlock; // @synthesize ignoreResultBlock=_ignoreResultBlock;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSArray *diagnosticLogs; // @synthesize diagnosticLogs=_diagnosticLogs;
@property(copy, nonatomic) CDUnknownBlockType contactProvider; // @synthesize contactProvider=_contactProvider;
@property(copy, nonatomic) CDUnknownBlockType membersProvider; // @synthesize membersProvider=_membersProvider;
@property(copy) CNAutocompleteNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(retain) CNAutocompleteResultValue *value; // @synthesize value=_value;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property BOOL hasPreferredDomain; // @synthesize hasPreferredDomain=_hasPreferredDomain;
- (void).cxx_destruct;
- (id)diagnosticLog;
- (void)addDiagnosticLogFuture:(id)arg1;
- (void)addDiagnosticLog:(CDUnknownBlockType)arg1;
- (id)contactWithKeysToFetch:(id)arg1 error:(id *)arg2;
- (id)members:(id *)arg1;
- (void)updateUsingInformationFromRelatedResult:(id)arg1;
- (id)stringForHashing;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)sourceTypeDescription;
- (id)resultTypeDescription;
- (id)description;
- (id)init;
- (long long)compare:(id)arg1;
- (long long)compare:(id)arg1 withPriorityComparator:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSArray *userInfos;
@property(readonly) long long addressType;
@property(readonly, copy) id address;
@property(readonly, copy) NSString *groupIdentifier;
@property(readonly, copy) NSString *contactIdentifier;

@end

