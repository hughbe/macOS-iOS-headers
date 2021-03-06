//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

#import <ContentKit/WFLoggableObject-Protocol.h>

@class NSDictionary;

@interface NSError (WFLoggableObject) <WFLoggableObject>
+ (id)userCancelledError;
+ (id)wfUnsupportedUserInterfaceError;
@property(readonly, nonatomic) NSDictionary *propertiesForEventLogging;
- (BOOL)wf_isUserCancelledError;
@end

