//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class CLLocation, NSDate;

@protocol PXMetadataAsset <NSObject>
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) NSDate *creationDate;

@optional
@property(readonly, nonatomic) BOOL cloudIsDeletable;
@end

