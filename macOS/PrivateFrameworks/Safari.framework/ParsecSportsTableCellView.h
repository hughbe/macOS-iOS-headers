//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/ParsecTableCellView.h>

@class NSLayoutConstraint, NSTextField, ParsecSportsTeamView;

__attribute__((visibility("hidden")))
@interface ParsecSportsTableCellView : ParsecTableCellView
{
    ParsecSportsTeamView *_leftTeamView;
    ParsecSportsTeamView *_rightTeamView;
    NSTextField *_scoreLabel;
    NSTextField *_descriptionLabel;
    NSLayoutConstraint *_leftTeamViewEdgeConstraint;
    NSLayoutConstraint *_rightTeamViewEdgeConstraint;
}

+ (id)_descriptionTextAttributes;
+ (id)_titleTextAttributes;
@property(nonatomic) __weak NSLayoutConstraint *rightTeamViewEdgeConstraint; // @synthesize rightTeamViewEdgeConstraint=_rightTeamViewEdgeConstraint;
@property(nonatomic) __weak NSLayoutConstraint *leftTeamViewEdgeConstraint; // @synthesize leftTeamViewEdgeConstraint=_leftTeamViewEdgeConstraint;
@property(nonatomic) __weak NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak NSTextField *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(nonatomic) __weak ParsecSportsTeamView *rightTeamView; // @synthesize rightTeamView=_rightTeamView;
@property(nonatomic) __weak ParsecSportsTeamView *leftTeamView; // @synthesize leftTeamView=_leftTeamView;
- (void).cxx_destruct;
- (void)configureUsingCompletionListItem:(struct CompletionListItem *)arg1 session:(id)arg2;
- (void)awakeFromNib;

@end

