//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CMDrawingAction : NSObject
{
    int _type;
    id _value;
    float _floatValue;
}

- (void).cxx_destruct;
- (id)description;
- (float)floatValue;
- (id)value;
- (int)type;
- (void)dealloc;
- (id)initWithType:(int)arg1 andFloatValue:(float)arg2;
- (id)initWithType:(int)arg1 andValue:(id)arg2;

@end

