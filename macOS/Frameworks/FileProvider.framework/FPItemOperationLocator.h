//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPActionOperationLocator.h>

__attribute__((visibility("hidden")))
@interface FPItemOperationLocator : FPActionOperationLocator
{
}

+ (BOOL)supportsSecureCoding;
- (BOOL)requiresCrossDeviceCopy;
- (BOOL)isFolder;
- (BOOL)isDownloaded;
- (BOOL)isMaterializedOnDisk;
- (unsigned long long)size;
- (id)filename;
- (id)parentIdentifier;
- (id)identifier;
- (BOOL)isProviderItem;
- (id)description;

@end

