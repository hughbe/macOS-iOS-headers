//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSButton, NSDictionary, NSProgressIndicator, NSTextField, NSView;

@interface MMWebViewButtonBar : NSObject
{
    NSView *_buttonBarView;
    NSButton *_button1;
    NSButton *_button2;
    NSButton *_button3;
    NSProgressIndicator *_spinner;
    NSTextField *_spinnerTitle;
    NSButton *_helpButton;
    NSDictionary *_buttonBarDict;
    id <MMWebViewButtonBarDelegate> _delegate;
    NSArray *_buttonArray;
}

@property id <MMWebViewButtonBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSDictionary *buttonBarDict; // @synthesize buttonBarDict=_buttonBarDict;
- (void)updateDefaultButtons;
- (void)updateButtonBarDict:(id)arg1;
- (void)disableSpinner;
- (void)disableButtons;
- (void)helpPressed:(id)arg1;
- (void)button3Pressed:(id)arg1;
- (void)button2Pressed:(id)arg1;
- (void)button1Pressed:(id)arg1;
- (id)buttonBarView;
- (void)dealloc;
- (id)initWithDict:(id)arg1;
- (id)init;

@end

