//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSCursor.h>

#import <UIKitMacHelper/UINSCursor-Protocol.h>

__attribute__((visibility("hidden")))
@interface UINSCursor : NSCursor <UINSCursor>
{
    long long _type;
}

+ (id)cursorWithType:(long long)arg1;
+ (id)resizeLeftRightCursor;
+ (id)resizeRightCursor;
+ (id)resizeLeftCursor;
+ (id)openHandCursor;
+ (id)closedHandCursor;
+ (id)pointingHandCursor;
+ (id)IBeamCursor;
+ (id)arrowCursor;
@property(nonatomic) long long type; // @synthesize type=_type;

@end

