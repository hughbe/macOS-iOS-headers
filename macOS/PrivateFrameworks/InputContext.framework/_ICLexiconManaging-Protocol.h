//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;

@protocol _ICLexiconManaging
- (void)hibernate;
- (void)warmUp;
- (void)unloadLexicons;
- (NSArray *)loadLexiconsUsingFilter:(NSString * (^)(NSString *))arg1;
- (NSArray *)loadLexicons:(NSString * (^)(NSString *))arg1;
- (void)removeContactObserver:(void (^)(NSDictionary *))arg1;
- (void (^)(NSDictionary *))addContactObserver:(void (^)(NSDictionary *))arg1;
@end

