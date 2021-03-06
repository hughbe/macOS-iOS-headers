//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface SVSSiriPresentationPluginHost : NSObject
{
    BOOL _loaded;
    NSURL *_URL;
    NSMutableDictionary *_bundleURLsByBundleIdentifier;
}

+ (id)sharedSiriPresentationPluginHost;
+ (id)_defaultURL;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_bundleURLsByBundleIdentifier) NSMutableDictionary *bundleURLsByBundleIdentifier; // @synthesize bundleURLsByBundleIdentifier=_bundleURLsByBundleIdentifier;
@property(nonatomic, getter=_isLoaded, setter=_setLoaded:) BOOL loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic, getter=_URL) NSURL *URL; // @synthesize URL=_URL;
- (void)_save;
- (void)_load;
- (void)_loadFromPropertyListRepresentation:(id)arg1;
- (id)_propertyListRepresentation;
- (id)presentationWithIdentifier:(id)arg1;
- (id)_siriPresentationPluginBundleWithIdentifier:(id)arg1;
- (id)_cachedURLForBundleWithIdentifier:(id)arg1;
- (void)_rescanBundles;
- (id)_builtInPresentationWithIdentifier:(id)arg1;
- (id)_classNameForBuiltInPresentationWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1;

@end

