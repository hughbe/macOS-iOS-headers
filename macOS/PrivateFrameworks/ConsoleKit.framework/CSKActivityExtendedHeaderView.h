//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConsoleKit/CSKActivityHeaderView.h>

@class NSTextField;

@interface CSKActivityExtendedHeaderView : CSKActivityHeaderView
{
    NSTextField *_threadIDTextField;
    NSTextField *_PIDTextField;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSTextField *PIDTextField; // @synthesize PIDTextField=_PIDTextField;
@property(nonatomic) __weak NSTextField *threadIDTextField; // @synthesize threadIDTextField=_threadIDTextField;
- (void)updateViewWithActivity:(id)arg1;

@end

