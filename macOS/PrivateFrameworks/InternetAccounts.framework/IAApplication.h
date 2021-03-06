//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSMutableDictionary, NSString;

@interface IAApplication : NSObject
{
    NSString *_bundleID;
    NSString *_displayName;
    NSString *_imagePath;
    NSImage *_image;
    NSMutableDictionary *_userInfo;
    BOOL _enabled;
    BOOL _alreadyEnabled;
}

+ (id)appWithBundleID:(id)arg1;
- (void).cxx_destruct;
@property BOOL alreadyEnabled; // @synthesize alreadyEnabled=_alreadyEnabled;
@property BOOL enabled; // @synthesize enabled=_enabled;
@property(retain) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (long long)sortValue;
- (id)displayNameForData;
@property(readonly) NSImage *image;
- (id)associatedProviderID;
- (id)associatedPluginID;
- (id)initWithBundleID:(id)arg1;

@end

