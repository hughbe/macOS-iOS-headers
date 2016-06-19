//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/ParsecTableCellView.h>

@class NSImageView, NSLayoutConstraint, NSTextField;

__attribute__((visibility("hidden")))
@interface ParsecSimpleTableCellView : ParsecTableCellView
{
    NSTextField *_titleLabel;
    NSTextField *_descriptionLabel;
    NSTextField *_subscriptLabel;
    NSImageView *_titleGlyph;
    NSLayoutConstraint *_descriptionToBottomConstraint;
    NSLayoutConstraint *_subscriptToBottomConstraint;
    NSLayoutConstraint *_titleTrailingConstraint;
    NSLayoutConstraint *_titleGlyphTrailingConstraint;
    NSLayoutConstraint *_titleMaximumHeightConstraint;
    NSLayoutConstraint *_descriptionMaximumHeightConstraint;
    NSLayoutConstraint *_descriptionToSubscriptConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *descriptionToSubscriptConstraint; // @synthesize descriptionToSubscriptConstraint=_descriptionToSubscriptConstraint;
@property(retain, nonatomic) NSLayoutConstraint *descriptionMaximumHeightConstraint; // @synthesize descriptionMaximumHeightConstraint=_descriptionMaximumHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleMaximumHeightConstraint; // @synthesize titleMaximumHeightConstraint=_titleMaximumHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleGlyphTrailingConstraint; // @synthesize titleGlyphTrailingConstraint=_titleGlyphTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleTrailingConstraint; // @synthesize titleTrailingConstraint=_titleTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subscriptToBottomConstraint; // @synthesize subscriptToBottomConstraint=_subscriptToBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *descriptionToBottomConstraint; // @synthesize descriptionToBottomConstraint=_descriptionToBottomConstraint;
@property(nonatomic) __weak NSImageView *titleGlyph; // @synthesize titleGlyph=_titleGlyph;
@property(nonatomic) __weak NSTextField *subscriptLabel; // @synthesize subscriptLabel=_subscriptLabel;
@property(nonatomic) __weak NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)configureUsingCompletionListItem:(struct CompletionListItem *)arg1 session:(id)arg2;

@end

