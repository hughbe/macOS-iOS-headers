//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSDocumentConflictPanelController, NSTextField;

__attribute__((visibility("hidden")))
@interface _NSDocumentConflictTableCellView : NSTableCellView
{
    NSDocumentConflictPanelController *_controller;
    NSTextField *firstLine;
    NSTextField *secondLine;
}

@property NSDocumentConflictPanelController *controller; // @synthesize controller=_controller;
- (double)additionalWidthRequired;
- (void)showPreview:(id)arg1;

@end

