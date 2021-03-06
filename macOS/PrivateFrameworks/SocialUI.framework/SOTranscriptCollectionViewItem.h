//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

#import <SocialUI/IMChatTranscriptDrawable-Protocol.h>
#import <SocialUI/IMChatTranscriptView-Protocol.h>
#import <SocialUI/SOTranscriptThemeable-Protocol.h>

@class IMTranscriptChatItem, NSLayoutConstraint, NSString;
@protocol IMDynamicGradientReferenceView, SOTranscriptCollectionViewItemDelegate, SOTranscriptTheme;

@interface SOTranscriptCollectionViewItem : NSCollectionViewItem <IMChatTranscriptView, IMChatTranscriptDrawable, SOTranscriptThemeable>
{
    NSLayoutConstraint *_maxWidthConstraint;
    IMTranscriptChatItem *_chatItem;
    id <SOTranscriptCollectionViewItemDelegate> _delegate;
    id <IMDynamicGradientReferenceView> _gradientReferenceView;
}

+ (id)itemTypeIdentifier;
+ (Class)viewClass;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IMDynamicGradientReferenceView> gradientReferenceView; // @synthesize gradientReferenceView=_gradientReferenceView;
@property __weak id <SOTranscriptCollectionViewItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <SOTranscriptTheme> transcriptTheme;
- (void)prepareForReuse;
@property(readonly) struct IMBalloonDescriptor_t balloonDescriptor;
- (void)_transcriptItemDidChange;
- (struct CGSize)sizeConstrainedToWidth:(double)arg1;
@property(nonatomic) double maximumWidth;
- (long long)verticalSpaceToPrecedingItemOfClassification:(long long)arg1;
@property(readonly, nonatomic) long long layoutClassification;
@property(readonly, nonatomic) long long layoutOrientation;
- (void)loadView;
@property(retain, nonatomic) IMTranscriptChatItem *chatTranscriptItem;
@property(readonly, nonatomic) IMTranscriptChatItem *chatItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

