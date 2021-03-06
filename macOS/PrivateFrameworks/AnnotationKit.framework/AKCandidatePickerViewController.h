//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class AKController, AKShapesGridViewController, NSArray, NSButton, NSStackView;

@interface AKCandidatePickerViewController : NSViewController
{
    AKController *_controller;
    NSArray *_items;
    NSButton *_closeButton;
    long long _orientation;
    NSStackView *_stackView;
    AKShapesGridViewController *_shapesPicker;
    NSArray *_annotationImages;
}

+ (id)_imagesForAnnotations:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSArray *annotationImages; // @synthesize annotationImages=_annotationImages;
@property(retain) AKShapesGridViewController *shapesPicker; // @synthesize shapesPicker=_shapesPicker;
@property(retain) NSStackView *stackView; // @synthesize stackView=_stackView;
@property long long orientation; // @synthesize orientation=_orientation;
@property(retain) NSButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain) NSArray *items; // @synthesize items=_items;
@property __weak AKController *controller; // @synthesize controller=_controller;
- (BOOL)setSelectionIndexes:(id)arg1;
@property(copy) CDUnknownBlockType potentialActionBlock;
@property(copy) CDUnknownBlockType actionBlock;
- (void)closePicker:(id)arg1;
- (void)loadView;
- (id)initWithController:(id)arg1 items:(id)arg2 annotations:(id)arg3 orientation:(long long)arg4;

@end

