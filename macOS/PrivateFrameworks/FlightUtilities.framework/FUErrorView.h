//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class FULabel;

__attribute__((visibility("hidden")))
@interface FUErrorView : NSView
{
    FULabel *_errorLabel;
}

- (void).cxx_destruct;
@property __weak FULabel *errorLabel; // @synthesize errorLabel=_errorLabel;
- (void)setStyleProvider:(id)arg1;
- (void)awakeFromNib;

@end

