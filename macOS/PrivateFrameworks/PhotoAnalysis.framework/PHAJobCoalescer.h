//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PHAJobCoalescer : NSObject
{
    id <PHAJobCoalescerDelegate> _delegate;
}

@property(nonatomic) __weak id <PHAJobCoalescerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addJob:(id)arg1;
- (id)init;

@end

