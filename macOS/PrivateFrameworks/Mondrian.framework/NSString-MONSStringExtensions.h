//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (MONSStringExtensions)
+ (id)upperBoundString:(id)arg1;
+ (id)normalizeString:(id)arg1;
+ (id)shortTimeCodeStringWithDuration:(unsigned long long)arg1;
+ (id)fullTimeCodeStringWithDuration:(unsigned long long)arg1;
+ (unsigned long long)durationFromFullTimeCodeString:(id)arg1;
+ (id)generateUUID;
- (id)stringByReplacingPercentEscapes;
- (id)stringByDeletingTrailingSlash;
- (id)pathRelativeTo:(id)arg1;
- (id)firstline;
- (id)sha1HashString;
@end

