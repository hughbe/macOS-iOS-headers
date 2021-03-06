/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISIconCacheIOS : NSObject {
    NSString * _cacheKeySalt;
    NSURL * _cacheURL;
    bool  _initialized;
}

@property (copy) NSString *cacheKeySalt;
@property (retain) NSURL *cacheURL;
@property (readonly) bool initialized;

+ (id)UUIDStringForString:(id)arg1;
+ (id)cacheContainerURL;
+ (id)cacheFolderURL;
+ (long long)currentDisplayGamut;
+ (id)iconCacheSystemVersionFileURL;
+ (id)xpcInterface;

- (void).cxx_destruct;
- (id)bundleCacheKeyForBundleIdentifier:(id)arg1 cacheKey:(id)arg2 variant:(int)arg3 options:(int)arg4;
- (id)bundleCacheKeyPrefixForBundleIdentifier:(id)arg1;
- (id)cacheKeyFromResourceURL:(id)arg1 bundleIdentifier:(id)arg2 iconDictionary:(id)arg3 preferedIconName:(id)arg4;
- (id)cacheKeySalt;
- (id)cacheURL;
- (id)iconDataForKey:(id)arg1 ignoreCache:(bool)arg2 generatorBlock:(id /* block */)arg3;
- (id)init;
- (id)initWithCacheURL:(id)arg1 salt:(id)arg2;
- (bool)initialized;
- (void)setCacheKeySalt:(id)arg1;
- (void)setCacheURL:(id)arg1;

@end
