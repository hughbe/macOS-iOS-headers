//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AVTouchBarMediaSelectionOption : NSObject
{
    NSString *_title;
    long long _type;
    id _representedObject;
}

- (void).cxx_destruct;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly) NSString *title; // @synthesize title=_title;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithTitle:(id)arg1 type:(long long)arg2;
- (id)init;

@end

