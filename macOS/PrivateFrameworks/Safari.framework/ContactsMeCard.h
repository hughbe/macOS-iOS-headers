//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact;

__attribute__((visibility("hidden")))
@interface ContactsMeCard : NSObject
{
    CNContact *_me;
    BOOL _meNeedsUpdate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CNContact *me;
- (void)_contactsChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

