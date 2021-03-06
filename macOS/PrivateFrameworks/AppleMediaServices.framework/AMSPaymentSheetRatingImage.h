//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSPaymentSheetRatingImage : NSObject
{
    long long _ratingType;
    NSString *_URLString;
    NSString *_value;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *value; // @synthesize value=_value;
@property(readonly, copy) NSString *URLString; // @synthesize URLString=_URLString;
@property(readonly) long long ratingType; // @synthesize ratingType=_ratingType;
- (long long)_ratingTypeForType:(id)arg1;
@property(readonly) BOOL tint;
@property(readonly, copy) NSString *localAssetName;
@property(readonly, getter=isServerSupplied) BOOL serverSupplied;
- (id)initWithDictionary:(id)arg1;
- (id)initWithURLString:(id)arg1;

@end

