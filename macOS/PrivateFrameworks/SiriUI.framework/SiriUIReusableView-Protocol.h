//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class NSString, SiriUISnippetViewController;

@protocol SiriUIReusableView <NSObject>
+ (NSString *)elementKind;
+ (NSString *)reuseIdentifier;
+ (double)defaultHeight;

@optional
@property(nonatomic) __weak SiriUISnippetViewController *snippetViewController;
- (struct NSEdgeInsets)edgeInsets;
@end

