//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNUIViewRevealer : NSObject
{
    BOOL _shouldAnimate;
}

+ (id)defaultRevealer;
+ (id)animatingRevealer;
+ (id)revealer;
@property(nonatomic) BOOL shouldAnimate; // @synthesize shouldAnimate=_shouldAnimate;
- (void)hideView:(id)arg1;
- (void)showView:(id)arg1;
- (id)initWithShouldAnimte:(BOOL)arg1;

@end

