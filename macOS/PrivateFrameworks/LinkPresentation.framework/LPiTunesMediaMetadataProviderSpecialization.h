//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class LPSpecializationMetadata, LPiTunesMediaLookupTask, NSMutableSet, NSString, NSURLSession;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization
{
    NSString *_identifier;
    NSURLSession *_session;
    BOOL _canceled;
    LPiTunesMediaLookupTask *_lookupTask;
    LPSpecializationMetadata *_resolvedMetadata;
    id <LPiTunesMediaUnresolvedMetadata> _unresolvedMetadata;
    NSMutableSet *_assetsStillResolving;
}

+ (id)assetArrayFromScreenshotDictionary:(id)arg1 usingPreferredPlatformArray:(id)arg2;
+ (id)assetArrayFromScreenshotArray:(id)arg1;
+ (id)assetArrayScreenshotArray:(id)arg1;
+ (id)assetFromScreenshotDictionary:(id)arg1;
+ (long long)determineOrientationOfScreenshotsInArray:(id)arg1;
+ (id)artworkURLFromDictionary:(id)arg1 height:(long long)arg2 width:(long long)arg3 cropStyle:(id)arg4 format:(id)arg5;
+ (id)specializedMetadataProviderForURL:(id)arg1;
+ (id)extractIdentifierFromURL:(id)arg1;
- (void).cxx_destruct;
- (void)done;
- (void)fail;
- (void)cancel;
- (void)start;
- (void)resolve;
- (id)processResponseDictionary:(id)arg1;
- (id)schema;
- (id)initWithIdentifier:(id)arg1 forURL:(id)arg2;

@end

