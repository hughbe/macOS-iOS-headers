//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol PLPhotoAnalysisJobServiceProtocol
- (void)setJobProcessingConstraintsWithValues:(NSString *)arg1 mask:(NSString *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSString *, NSError *))arg4;
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(NSString *)arg1 workerType:(short)arg2 workerFlags:(int)arg3 context:(NSDictionary *)arg4 reply:(void (^)(NSError *))arg5;
@end

