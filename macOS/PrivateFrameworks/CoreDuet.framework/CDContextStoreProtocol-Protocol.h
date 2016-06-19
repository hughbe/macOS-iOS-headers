//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDictionary, NSObject, NSString;

@protocol CDContextStoreProtocol
- (void)deregisterHandlerForPredicateId:(unsigned long long)arg1;
- (void)deregisterPredicateString:(NSString *)arg1 withClientId:(NSString *)arg2;
- (void)deregisterPredicateString:(NSString *)arg1;
- (void)enablePredicateId:(unsigned long long)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)registerHandlerForPredicateString:(NSString *)arg1 withOptions:(NSDictionary *)arg2 reply:(void (^)(unsigned long long))arg3;
- (void)stateForKeys:(NSArray *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)integerValueForKey:(NSString *)arg1 reply:(void (^)(long long))arg2;
- (void)stringValueForKey:(NSString *)arg1 reply:(void (^)(NSString *))arg2;
- (void)setIntegerValue:(long long)arg1 forKey:(NSString *)arg2 withMetaData:(NSDictionary *)arg3 reply:(void (^)(BOOL))arg4;
- (void)setStringValue:(NSString *)arg1 forKey:(NSString *)arg2 withMetaData:(NSDictionary *)arg3 reply:(void (^)(BOOL))arg4;
- (void)setValue:(NSObject *)arg1 forKey:(NSString *)arg2 withMetaData:(NSDictionary *)arg3 reply:(void (^)(BOOL))arg4;
- (void)settingsForKey:(NSString *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)registerKey:(NSString *)arg1 withSettings:(NSDictionary *)arg2 reply:(void (^)(BOOL))arg3;
@end

