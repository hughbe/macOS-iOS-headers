//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/ParsecTableCellView.h>

@class NSTrackingArea;

__attribute__((visibility("hidden")))
@interface ParsecTableCellViewWithActionButton : ParsecTableCellView
{
    NSTrackingArea *_trackingArea;
}

- (void).cxx_destruct;
- (id)_actionButton;
- (void)_configureActionButtonWithImage:(id)arg1 caption:(id)arg2;
- (void)_configureUsingActionButton:(id)arg1 session:(id)arg2;
- (BOOL)isMouseEventInsideActionButton:(id)arg1;
@property(nonatomic, getter=isActionButtonSelected) BOOL actionButtonSelected;
@property(nonatomic) BOOL showsActionButton;
- (void)awakeFromNib;

@end

