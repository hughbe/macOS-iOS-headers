//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSBrowserCell.h>

@class NSDictionary, OSADefinition;

@interface OSABrowserCell : NSBrowserCell
{
    NSDictionary *_item;
    OSADefinition *_definition;
}

- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)setDefinition:(id)arg1;
- (id)definition;
- (void)setItem:(id)arg1;
- (id)item;
- (void)dealloc;

@end

