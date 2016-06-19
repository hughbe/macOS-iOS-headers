//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface PKPaymentAuthorizationItemValue : NSObject <NSCopying>
{
    NSString *_text;
    NSString *_detailText;
    long long _numberOfLines;
    long long _valueMode;
}

+ (id)valueWithText:(id)arg1 detailText:(id)arg2 mode:(long long)arg3;
+ (id)valueWithText:(id)arg1 detailText:(id)arg2;
+ (id)valueWithText:(id)arg1;
@property(nonatomic) long long valueMode; // @synthesize valueMode=_valueMode;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

