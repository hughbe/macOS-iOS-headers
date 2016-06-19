//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigrationNetworking/SMNAction.h>

@class NSDictionary, NSString;

@interface SMNWirelessConnectAction : SMNAction
{
    NSDictionary *_result;
    NSString *_wirelessSSID;
    NSString *_password;
    unsigned long long _timeout;
    unsigned long long _retryDelay;
}

+ (id)actionWithPayload:(id)arg1;
+ (int)actionID;
@property unsigned long long retryDelay; // @synthesize retryDelay=_retryDelay;
@property unsigned long long timeout; // @synthesize timeout=_timeout;
@property(retain) NSString *password; // @synthesize password=_password;
@property(retain) NSString *wirelessSSID; // @synthesize wirelessSSID=_wirelessSSID;
@property(retain) NSDictionary *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (BOOL)success;
- (BOOL)returnsData;
- (BOOL)expectsAResult;
- (BOOL)setResultFromData:(id)arg1;
- (id)resultData;
- (id)requestPayload;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithSSID:(id)arg1 password:(id)arg2;
- (id)initWithSSID:(id)arg1 password:(id)arg2 timeout:(unsigned long long)arg3 retryDelay:(unsigned long long)arg4;

@end

