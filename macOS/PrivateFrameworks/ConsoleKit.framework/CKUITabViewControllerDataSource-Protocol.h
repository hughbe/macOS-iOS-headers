//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKUITabItem, CKUITabViewController;

@protocol CKUITabViewControllerDataSource <NSObject>
- (CKUITabItem *)tabViewController:(CKUITabViewController *)arg1 itemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfTabsInTabViewController:(CKUITabViewController *)arg1;
@end

