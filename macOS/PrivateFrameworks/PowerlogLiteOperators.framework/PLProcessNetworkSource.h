//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PLProcessNetworkSource : NSObject
{
    NSDictionary *_descriptionDictionary;
    NSDictionary *_countsDictionary;
    struct __NStatSource *_source;
}

- (void).cxx_destruct;
@property(nonatomic) struct __NStatSource *source; // @synthesize source=_source;
@property(copy, nonatomic) NSDictionary *countsDictionary; // @synthesize countsDictionary=_countsDictionary;
@property(copy, nonatomic) NSDictionary *descriptionDictionary; // @synthesize descriptionDictionary=_descriptionDictionary;
- (id)initWithSource:(struct __NStatSource *)arg1;

@end

