//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATException.h>

@class NSString;

@interface EDAMNotFoundException : FATException
{
    NSString *_identifier;
    NSString *_key;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

@end

