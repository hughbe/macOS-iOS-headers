//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccount/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface AARegionInfo : NSObject <NSCopying>
{
    NSDictionary *_regionInfoDictionary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayedHostname;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

