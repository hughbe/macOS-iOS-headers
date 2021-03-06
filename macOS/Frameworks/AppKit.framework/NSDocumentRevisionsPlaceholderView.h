//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSProgressIndicator, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface NSDocumentRevisionsPlaceholderView : NSView
{
    NSTextField *messageField1;
    NSTextField *messageField2;
    NSProgressIndicator *progressIndicator;
    BOOL progressIndicatorVisible;
    BOOL animating;
    BOOL hideElements;
    BOOL preventLayout;
}

- (void)setElementsHidden:(BOOL)arg1;
@property BOOL progressIndicatorAnimating;
- (BOOL)_hasButtonOrProgress;
@property BOOL progressIndicatorVisible;
@property(copy) NSString *message2;
@property(copy) NSString *message1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)makeMessageTextField:(BOOL)arg1;
- (void)_layout;

@end

