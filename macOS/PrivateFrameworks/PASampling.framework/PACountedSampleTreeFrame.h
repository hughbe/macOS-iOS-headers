//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PASampling/PACountedSampleFrame.h>

@class NSMutableSet;

@interface PACountedSampleTreeFrame : PACountedSampleFrame
{
    unsigned long long _state;
    NSMutableSet *_children;
}

@property unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) BOOL isLeafFrame;
@property(readonly) __weak NSMutableSet *children;
- (id)initWithSampleFrame:(id)arg1 andState:(unsigned long long)arg2;

@end

