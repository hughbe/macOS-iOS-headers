//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXViewController.h>

@class NSSlider, NSString, NSTextField;
@protocol KHPageCountPickerDelegate;

@interface KHPageCountPickerController : UXViewController
{
    id <KHPageCountPickerDelegate> _delegate;
    NSSlider *_pageCountSlider;
    unsigned long long _pageCount;
    NSString *_accessibilityValueDescriptionFormatString;
    NSTextField *_pageCountLabel;
    NSTextField *_pageCountTitle;
}

- (void).cxx_destruct;
@property(retain) NSTextField *pageCountTitle; // @synthesize pageCountTitle=_pageCountTitle;
@property(retain) NSTextField *pageCountLabel; // @synthesize pageCountLabel=_pageCountLabel;
@property(copy) NSString *accessibilityValueDescriptionFormatString; // @synthesize accessibilityValueDescriptionFormatString=_accessibilityValueDescriptionFormatString;
@property(nonatomic) unsigned long long pageCount; // @synthesize pageCount=_pageCount;
@property(retain) NSSlider *pageCountSlider; // @synthesize pageCountSlider=_pageCountSlider;
@property __weak id <KHPageCountPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sliderUpdated:(id)arg1;
- (void)loadView;

@end

