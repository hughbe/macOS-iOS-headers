//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NADeallocationTracerDelegate;

__attribute__((visibility("hidden")))
@interface NADeallocationTracer : NSObject
{
    id <NADeallocationTracerDelegate> _delegate;
}

@property(nonatomic) id <NADeallocationTracerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

