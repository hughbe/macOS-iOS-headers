//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSColor;

@interface KHButton : NSButton
{
    NSColor *_tintColor;
}

+ (id)auxiliaryButton;
- (void).cxx_destruct;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)setTitle:(id)arg1;
@property(retain, nonatomic) NSColor *tintColor;
- (void)_updateTitle;

@end

