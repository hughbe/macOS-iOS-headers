//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/PACloudResourceResolver.h>

@class NSDictionary;

@interface PASlideshowCloudResourceResolver : PACloudResourceResolver
{
    NSDictionary *_cloudResourcesByIdentifier;
}

- (void).cxx_destruct;
- (void)enumerateCloudResourcesForVersion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)prepareForVersions:(id)arg1;

@end

