//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSAccessibilityElement.h>

@class NSString;

@interface CCAccessibilityElement : NSAccessibilityElement
{
    NSString *label;
    NSString *roleDescription;
    struct CGRect frame;
}

- (void).cxx_destruct;
@property struct CGRect frame; // @synthesize frame;
@property(retain) NSString *roleDescription; // @synthesize roleDescription;
@property(retain) NSString *label; // @synthesize label;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (id)accessibilityLabel;

@end

