//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSString, NSTextField;

@interface PKSimpleAlertViewController : NSViewController
{
    NSString *_messageText;
    NSTextField *_messageTextField;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTextField *messageTextField; // @synthesize messageTextField=_messageTextField;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
- (void)okButtonClicked:(id)arg1;
- (void)awakeFromNib;
- (id)nibName;
- (id)nibBundle;

@end

