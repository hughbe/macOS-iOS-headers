//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSHereditaryGrant.h>

@interface RBSHereditaryGrant (RBProcessState)
- (void)_withEndowmentFromContext:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)isValidForContext:(id)arg1 withError:(id *)arg2;
- (id)effectiveAttributesWithContext:(id)arg1;
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
@end

