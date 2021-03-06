//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXReusableObjectPool;
@protocol PXReusableObject;

@protocol PXReusableObjectPoolDelegate <NSObject>

@optional
- (void)reusableObjectPool:(PXReusableObjectPool *)arg1 didEvictReusableObject:(id <PXReusableObject>)arg2;
- (void)reusableObjectPool:(PXReusableObjectPool *)arg1 objectPreparedForReuse:(id <PXReusableObject>)arg2;
- (void)reusableObjectPool:(PXReusableObjectPool *)arg1 objectBecameReusable:(id <PXReusableObject>)arg2;
- (void)reusableObjectPool:(PXReusableObjectPool *)arg1 didCreateReusableObject:(id <PXReusableObject>)arg2;
@end

