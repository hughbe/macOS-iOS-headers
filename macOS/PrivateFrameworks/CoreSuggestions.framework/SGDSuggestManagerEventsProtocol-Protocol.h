//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_SGDSuggestManagerBaseProtocol.h"
#import "_SGDSuggestManagerEventsConfirmRejectProtocol.h"

@class NSArray, NSString;

@protocol SGDSuggestManagerEventsProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerEventsConfirmRejectProtocol>
- (void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)schemaOrgToEvents:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)eventFromUniqueId:(NSString *)arg1 completion:(void (^)(SGEvent *, NSError *))arg2;
@end

