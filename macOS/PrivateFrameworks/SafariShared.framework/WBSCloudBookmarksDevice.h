//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBSCloudBookmarksDevice : NSObject
{
    NSString *_operatingSystemFamily;
    CDStruct_f6aba300 _operatingSystemVersion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_f6aba300 operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property(readonly, nonatomic) NSString *operatingSystemFamily; // @synthesize operatingSystemFamily=_operatingSystemFamily;
- (id)initWithOperatingSystemVersion:(CDStruct_f6aba300)arg1 family:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

