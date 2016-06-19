//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSURL;

@interface WBSRemoteHistoryVisit : NSObject <NSSecureCoding>
{
    NSURL *_url;
    NSDate *_date;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithURL:(id)arg1 date:(id)arg2;
- (id)init;

@end

