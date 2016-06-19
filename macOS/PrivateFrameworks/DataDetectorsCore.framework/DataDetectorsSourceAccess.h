//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DataDetectorsSourceAccessProtocol.h"

@interface DataDetectorsSourceAccess : NSObject <DataDetectorsSourceAccessProtocol>
{
    CDStruct_4c969caf _auditToken;
    int _clientpid;
    unsigned int _clientuid;
    BOOL _privacyUserReadEntitled;
    long long _privacyUserReadEntitlementChecked;
    BOOL _privacyUserWriteEntitled;
    long long _privacyUserWriteEntitlementChecked;
    BOOL _privacySystemWriteEntitled;
    long long _privacySystemWriteEntitlementChecked;
}

@property unsigned int userIdentifier; // @synthesize userIdentifier=_clientuid;
@property int processIdentifier; // @synthesize processIdentifier=_clientpid;
@property CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (BOOL)pushSourcesContent:(id)arg1 forSource:(int)arg2 signature:(id)arg3;
- (BOOL)clientCanWriteSource:(int)arg1;
- (id)fileHandleForSourceRead:(int)arg1;
- (BOOL)privacySystemWriteEntitled;
- (BOOL)privacyUserWriteEntitled;
- (BOOL)privacyUserReadEntitled;
- (void)writeSourceFromJSONFile:(id)arg1 source:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)writeSourceFromRawData:(id)arg1 source:(id)arg2 signature:(id)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)filesForSourceRead:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)fileForSourceRead:(id)arg1 withReply:(CDUnknownBlockType)arg2;

@end

