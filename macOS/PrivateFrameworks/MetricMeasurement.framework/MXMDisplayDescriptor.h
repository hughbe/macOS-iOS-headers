//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplay, NSString;

@interface MXMDisplayDescriptor : NSObject
{
    CADisplay *_display;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CADisplay *display; // @synthesize display=_display;
- (id)initWithDisplay:(id)arg1;
@property(readonly, nonatomic, getter=main) BOOL isMain;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) double refreshRate;
@property(readonly, nonatomic) unsigned int _cgDisplayId;

// Remaining properties
@property(readonly, nonatomic) BOOL main;

@end

