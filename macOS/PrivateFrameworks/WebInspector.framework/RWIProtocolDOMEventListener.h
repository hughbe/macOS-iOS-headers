//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolDebuggerLocation, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDOMEventListener : RWIProtocolJSONObject
{
}

@property(retain, nonatomic) RWIProtocolRuntimeRemoteObject *handler;
@property(copy, nonatomic) NSString *sourceName;
@property(retain, nonatomic) RWIProtocolDebuggerLocation *location;
@property(copy, nonatomic) NSString *handlerBody;
@property(nonatomic) int nodeId;
@property(nonatomic) BOOL isAttribute;
@property(nonatomic) BOOL useCapture;
@property(copy, nonatomic) NSString *type;
- (id)initWithType:(id)arg1 useCapture:(BOOL)arg2 isAttribute:(BOOL)arg3 nodeId:(int)arg4 handlerBody:(id)arg5;

@end

