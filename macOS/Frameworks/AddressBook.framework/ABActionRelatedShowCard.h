//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABActionRelatedShowCard : NSObject
{
    NSString *_targetUniqueId;
}

@property(copy) NSString *targetUniqueId; // @synthesize targetUniqueId=_targetUniqueId;
- (BOOL)shouldEnableActionForPerson:(id)arg1 identifier:(id)arg2;
- (id)actionProperty;
- (id)titleForPerson:(id)arg1 identifier:(id)arg2;
- (id)unlocalizedTitle;
- (void)performActionForPerson:(id)arg1 identifier:(id)arg2;
- (void)dealloc;

@end

