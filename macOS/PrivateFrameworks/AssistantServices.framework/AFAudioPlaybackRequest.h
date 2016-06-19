//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSURL;

@interface AFAudioPlaybackRequest : NSObject <NSCopying, NSSecureCoding>
{
    float _volume;
    NSURL *_itemURL;
    long long _numberOfLoops;
    double _fadeInDuration;
    double _fadeOutDuration;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
@property(readonly, nonatomic) double fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;
@property(readonly, nonatomic) float volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) long long numberOfLoops; // @synthesize numberOfLoops=_numberOfLoops;
@property(readonly, copy, nonatomic) NSURL *itemURL; // @synthesize itemURL=_itemURL;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithItemURL:(id)arg1 numberOfLoops:(long long)arg2 volume:(float)arg3 fadeInDuration:(double)arg4 fadeOutDuration:(double)arg5;

@end

