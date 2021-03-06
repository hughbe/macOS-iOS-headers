//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObservationSource.h>

@class NSArray, NSLayoutRect;
@protocol NSLayoutItem;

__attribute__((visibility("hidden")))
@interface _NSLayoutRectObservable : NSObservationSource
{
    NSArray *_anchorObservations;
    NSLayoutRect *_rectangle;
    id <NSLayoutItem> _layoutItem;
}

+ (id)observableForRect:(id)arg1 inItem:(id)arg2;
- (void)_reflectUpdatedRect:(id)arg1;
- (void)dealloc;
- (id)initWithRect:(id)arg1 inLayoutItem:(id)arg2;

@end

