//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@class NSButton, NSImageView, NSLayoutConstraint, NSMutableDictionary, NSProgressIndicator, NSTextField;

@interface MMMobileDocumentsTableRow : NSTableRowView
{
    NSButton *_checkbox;
    NSTextField *_serviceNameField;
    NSImageView *_icon;
    int _rowViewType;
    NSMutableDictionary *_appDict;
    id <MMMobileDocumentsTableRowDelegate> _delegate;
    NSLayoutConstraint *_leadingWidth;
    NSTextField *_progressField;
    NSProgressIndicator *_spinner;
}

+ (id)createFromNib;
@property int rowViewType; // @synthesize rowViewType=_rowViewType;
@property id <MMMobileDocumentsTableRowDelegate> delegate; // @synthesize delegate=_delegate;
- (void)enableServicePressed:(id)arg1;
- (void)setEnabledState:(BOOL)arg1;
- (void)setProgressString:(id)arg1;
- (void)updateImageAndName;
- (void)setAppDict:(id)arg1;
- (void)dealloc;

@end

