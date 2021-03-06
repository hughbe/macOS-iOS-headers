//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/_NSTouchBarItemLayoutWrapper-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSTouchBarLayoutItem : NSObject <_NSTouchBarItemLayoutWrapper>
{
    struct CGSize _minSize;
    struct CGSize _maxSize;
    BOOL _isSpace;
    float _visibilityPriority;
}

- (float)visibilityPriority;
@property(readonly) BOOL isSpace;
@property(readonly) struct CGSize maxSize;
@property(readonly) struct CGSize minSize;
- (id)initWithTouchBarItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) struct CGSize contentClippingSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long itemPosition;
@property(readonly) BOOL participatesInOverflow;
@property(readonly) struct CGSize preferredSize;
@property(readonly) double preferredTrailingPosition;
@property(readonly) double preferredZOrder;
@property(readonly) long long priorityIndex;
@property(readonly) Class superclass;

@end

