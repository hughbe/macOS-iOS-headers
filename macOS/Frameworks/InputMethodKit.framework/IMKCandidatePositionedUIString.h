//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMKCandidateUIString;

@interface IMKCandidatePositionedUIString : NSObject
{
    IMKCandidateUIString *_string;
    double _position;
    BOOL _rightAligned;
}

@property(nonatomic) BOOL rightAligned; // @synthesize rightAligned=_rightAligned;
@property(nonatomic) double position; // @synthesize position=_position;
@property(retain, nonatomic) IMKCandidateUIString *string; // @synthesize string=_string;
- (id)copy;
- (void)dealloc;

@end

