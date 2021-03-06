//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLookThumbnailing/NSSecureCoding-Protocol.h>

@class NSString;

@interface QLUTIAnalyzer : NSObject <NSSecureCoding>
{
    NSString *_contentType;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isTypeAudioOnly:(id)arg1;
+ (id)privateUTIFromFileName:(id)arg1;
+ (id)UTIForURL:(id)arg1;
+ (id)removeSpacesFromString:(id)arg1;
+ (id)knownExtensions;
- (void).cxx_destruct;
@property(readonly) NSString *contentType; // @synthesize contentType=_contentType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isAudioOnly;
- (id)initWithURL:(id)arg1;
- (id)initWithContentType:(id)arg1;

@end

