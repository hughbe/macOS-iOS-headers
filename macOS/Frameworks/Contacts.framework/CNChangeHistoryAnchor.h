//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSData, NSPersistentHistoryToken;

@interface CNChangeHistoryAnchor : NSObject <NSCopying, NSSecureCoding>
{
    NSPersistentHistoryToken *_token;
    long long _sequenceNumber;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, copy, nonatomic) NSPersistentHistoryToken *token; // @synthesize token=_token;
- (long long)compare:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *data;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithPersistentHistoryToken:(id)arg1;

@end

