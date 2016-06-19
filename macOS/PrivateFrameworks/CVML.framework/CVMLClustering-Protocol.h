//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CVMLSimilarityMatrix, NSArray, NSData, NSDictionary, NSObject<OS_dispatch_semaphore>, NSSet;

@protocol CVMLClustering
- (NSArray *)suggestionsForClusterIds:(NSArray *)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;
- (NSArray *)getClustersWithOptions:(NSDictionary *)arg1 cancellationSemaphore:(NSObject<OS_dispatch_semaphore> *)arg2 error:(id *)arg3;
- (BOOL)addDescriptorIds:(NSArray *)arg1 withSimilarityMatrix:(CVMLSimilarityMatrix *)arg2 cancellationSemaphore:(NSObject<OS_dispatch_semaphore> *)arg3 error:(id *)arg4;

@optional
- (NSDictionary *)getDistances:(NSArray *)arg1 to:(NSArray *)arg2;
- (NSArray *)getClustersForClusterIds:(NSArray *)arg1 options:(NSDictionary *)arg2;
- (NSDictionary *)getRepresentativenessForFaces:(NSArray *)arg1 error:(id *)arg2;
- (NSSet *)getClusteredIds;
- (NSData *)getClusterState:(id *)arg1;
- (NSArray *)refinedSuggestionsForClusterIds:(NSArray *)arg1 fromClusters:(NSArray *)arg2 affinityThreshold:(float)arg3 error:(id *)arg4;
@end

