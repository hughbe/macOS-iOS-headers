//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TIMecabraSegment : NSObject
{
    NSString *_reading;
    NSString *_surface;
}

+ (void)splitSegments:(id)arg1 at:(int)arg2 forPrefix:(id *)arg3 forSuffix:(id *)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *surface; // @synthesize surface=_surface;
@property(retain, nonatomic) NSString *reading; // @synthesize reading=_reading;

@end

