//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString;

@protocol PXDebugHierarchyProvider
@property(readonly, nonatomic) NSArray *debugHierarchyIdentifiers;
- (void)enumerateDebugHierarchyWithIdentifier:(NSString *)arg1 options:(unsigned long long)arg2 usingBlock:(void (^)(id <PXDebugHierarchyElement>, char *))arg3;
@end

