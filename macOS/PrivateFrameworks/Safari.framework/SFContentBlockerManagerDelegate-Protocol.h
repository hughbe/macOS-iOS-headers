//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSExtension, NSString;

@protocol SFContentBlockerManagerDelegate <NSObject>
- (NSString *)developerIdentifierForContentBlocker:(NSExtension *)arg1;
- (NSArray *)contentBlockersFromContentBlockersState:(NSDictionary *)arg1;
- (void)replaceLegacyExtensionsWithContentBlocker:(NSExtension *)arg1;
- (NSArray *)contentBlockersNotBlockedByXProtect:(NSArray *)arg1;
- (void)contentBlockerEnabledStateDidChange:(NSExtension *)arg1;
- (void)contentBlockersWereRemoved:(NSArray *)arg1;
- (void)contentBlockersWereAdded:(NSArray *)arg1;
- (void)applyEnabledContentBlockers:(NSArray *)arg1;
@end

