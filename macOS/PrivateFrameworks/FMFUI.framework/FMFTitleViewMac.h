//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSTextField;

__attribute__((visibility("hidden")))
@interface FMFTitleViewMac : NSView
{
    NSTextField *_titleLabel;
    NSTextField *_subtitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTextField *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_updateLabels:(id)arg1;
- (void)updateLocation:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

