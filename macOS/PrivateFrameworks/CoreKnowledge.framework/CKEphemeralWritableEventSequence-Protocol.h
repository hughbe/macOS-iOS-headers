//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CKEvent, NSDate, NSString;

@protocol CKEphemeralWritableEventSequence
- (void)removeAllEventsSavedInKnowledgeStreamNamed:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)writeEventsToKnowledgeStreamNamed:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (BOOL)appendEvent:(CKEvent *)arg1;
- (void)loadFromKnowledgeStreamNamed:(NSString *)arg1 between:(NSDate *)arg2 and:(NSDate *)arg3 completionHandler:(void (^)(NSError *))arg4;
@end

