//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PXSItem;

@interface _PXSItemTextToken : NSObject
{
    NSString *_string;
    PXSItem *_item;
    struct _NSRange _effectiveRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange effectiveRange; // @synthesize effectiveRange=_effectiveRange;
@property(retain, nonatomic) PXSItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
- (id)description;

@end

