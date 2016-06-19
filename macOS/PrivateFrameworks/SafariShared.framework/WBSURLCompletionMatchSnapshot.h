//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "_SSURLCompletionMatch.h"

@class NSDate, NSString, NSURL;

@interface WBSURLCompletionMatchSnapshot : NSObject <NSSecureCoding, _SSURLCompletionMatch>
{
    BOOL _topHit;
    BOOL _synthesizedTopHit;
    BOOL _topHitDueToTriggerMatch;
    NSURL *_url;
    NSString *_title;
    NSString *_userVisibleURLString;
    long long _matchLocation;
    long long _visitCount;
    NSDate *_lastVisitTime;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *lastVisitTime; // @synthesize lastVisitTime=_lastVisitTime;
@property(readonly, nonatomic) long long visitCount; // @synthesize visitCount=_visitCount;
@property(readonly, nonatomic, getter=isTopHitDueToTriggerMatch) BOOL topHitDueToTriggerMatch; // @synthesize topHitDueToTriggerMatch=_topHitDueToTriggerMatch;
@property(readonly, nonatomic, getter=isSynthesizedTopHit) BOOL synthesizedTopHit; // @synthesize synthesizedTopHit=_synthesizedTopHit;
@property(readonly, nonatomic, getter=isTopHit) BOOL topHit; // @synthesize topHit=_topHit;
@property(readonly, nonatomic) long long matchLocation; // @synthesize matchLocation=_matchLocation;
@property(readonly, copy, nonatomic) NSString *userVisibleURLString; // @synthesize userVisibleURLString=_userVisibleURLString;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithURL:(id)arg1 title:(id)arg2 matchLocation:(long long)arg3 isTopHit:(BOOL)arg4 isSynthesizedTopHit:(BOOL)arg5 isTopHitDueToTriggerMatch:(BOOL)arg6 visitCount:(long long)arg7 lastVisitTime:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

