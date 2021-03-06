//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface DEPublication : NSObject
{
    BOOL _disabled;
    NSDictionary *_distributions;
    NSString *_tag;
    NSString *_lastModified;
}

+ (BOOL)write:(id)arg1 tag:(id)arg2 date:(id)arg3 disabled:(BOOL)arg4 toURL:(id)arg5 keyId:(unsigned long long)arg6 multipart:(BOOL)arg7;
+ (id)dateToLastModified:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) NSString *lastModified; // @synthesize lastModified=_lastModified;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSDictionary *distributions; // @synthesize distributions=_distributions;
- (id)getPublicationId;
- (id)init;
- (id)initWithDistributions:(id)arg1 tag:(id)arg2 lastModified:(id)arg3 disabled:(BOOL)arg4;

@end

