//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Social/SLMicroBlogUserRecord.h>

#import <Social/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface SLTwitterUserRecord : SLMicroBlogUserRecord <NSSecureCoding>
{
    NSString *_id_str;
    NSURL *_objectID;
}

+ (BOOL)supportsSecureCoding;
+ (id)userRecordWithScreenName:(id)arg1;
+ (id)userRecordWithDictionaryRepresentation:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSString *id_str; // @synthesize id_str=_id_str;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setValuesWithUserDictionary:(id)arg1;

@end

