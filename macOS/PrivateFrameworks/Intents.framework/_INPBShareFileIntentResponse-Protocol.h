//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBShareDestination;

@protocol _INPBShareFileIntentResponse <NSObject>
+ (Class)recipientsType;
@property(nonatomic) BOOL hasSuccess;
@property(nonatomic) BOOL success;
@property(nonatomic) BOOL hasShareMode;
@property(nonatomic) int shareMode;
@property(readonly, nonatomic) unsigned long long recipientsCount;
@property(copy, nonatomic) NSArray *recipients;
@property(nonatomic) BOOL hasConfirm;
@property(nonatomic) BOOL confirm;
- (int)StringAsShareMode:(NSString *)arg1;
- (NSString *)shareModeAsString:(int)arg1;
- (_INPBShareDestination *)recipientsAtIndex:(unsigned long long)arg1;
- (void)addRecipients:(_INPBShareDestination *)arg1;
- (void)clearRecipients;
@end

