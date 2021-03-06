//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTPNRContextInfo : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isReady;
    NSString *_plmn;
    NSString *_imsi;
    NSString *_phoneNumber;
    NSString *_phoneNumberOnSIM;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *phoneNumberOnSIM; // @synthesize phoneNumberOnSIM=_phoneNumberOnSIM;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(retain, nonatomic) NSString *plmn; // @synthesize plmn=_plmn;
@property(nonatomic) BOOL isReady; // @synthesize isReady=_isReady;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPNRContextInfo:(id)arg1;
- (id)init;
- (id)description;

@end

