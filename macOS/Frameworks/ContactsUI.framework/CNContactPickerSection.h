//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSView;
@protocol CNContactPickerSectionDelegate;

@interface CNContactPickerSection : NSObject
{
    NSString *_identifier;
    NSString *_displayName;
    NSView *_contentView;
    NSView *_rightTopBarView;
    id <CNContactPickerSectionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly) id <CNContactPickerSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSView *rightTopBarView; // @synthesize rightTopBarView=_rightTopBarView;
@property(readonly) NSView *contentView; // @synthesize contentView=_contentView;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)initWithDisplayName:(id)arg1 contentView:(id)arg2 rightTopBarView:(id)arg3 delegate:(id)arg4;
- (id)initWithDisplayName:(id)arg1 contentView:(id)arg2 rightTopBarView:(id)arg3;

@end

