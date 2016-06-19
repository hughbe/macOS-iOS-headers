//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CVMLClustering.h"

@class NSString, NSURL;

@interface CVMLGreedyClustering : NSObject <CVMLClustering>
{
    struct shared_ptr<vision::mod::GreedyClustererFacesAPI> m_ClusteringImpl;
    NSString *_cacheFolderPath;
    NSURL *_cacheFolderURL;
    BOOL _logEnabled;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getDistances:(id)arg1 to:(id)arg2;
- (id)getClustersForClusterIds:(id)arg1 options:(id)arg2;
- (id)getRepresentativenessForFaces:(id)arg1 error:(id *)arg2;
- (id)getClusteredIds;
- (id)getClusterState:(id *)arg1;
- (id)refinedSuggestionsForClusterIds:(id)arg1 fromClusters:(id)arg2 affinityThreshold:(float)arg3 error:(id *)arg4;
- (id)suggestionsForClusterIds:(id)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;
- (id)getClustersWithOptions:(id)arg1 cancellationSemaphore:(id)arg2 error:(id *)arg3;
- (id)convertUpdatePairsToClusters:(vector_22dfb71c *)arg1;
- (void)addFaceObservations:(id)arg1 toFaceDescriptorBuffer:(struct ImageDescriptorBufferFloat32 *)arg2;
- (BOOL)addDescriptorIds:(id)arg1 withSimilarityMatrix:(id)arg2 cancellationSemaphore:(id)arg3 error:(id *)arg4;
- (void)_logString:(id)arg1;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end

