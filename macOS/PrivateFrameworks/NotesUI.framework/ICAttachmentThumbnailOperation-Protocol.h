//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ICThumbnailDataCache, NSString;

@protocol ICAttachmentThumbnailOperation
- (BOOL)isMatchingOperationForCacheKey:(NSString *)arg1 cache:(ICThumbnailDataCache *)arg2;
- (void)addCompletionBlock:(void (^)(NSImage *, unsigned long long, BOOL, BOOL))arg1;
@end

