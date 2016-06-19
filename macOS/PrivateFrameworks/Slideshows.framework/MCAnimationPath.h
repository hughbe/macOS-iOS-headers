//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MCObjectLight.h>

@class NSString;

@interface MCAnimationPath : MCObjectLight
{
    BOOL mIsTriggered;
    BOOL mIsSnapshot;
    NSString *mKey;
}

+ (id)animationPathWithKey:(id)arg1;
- (BOOL)isSnapshot;
@property(nonatomic) BOOL isTriggered; // @synthesize isTriggered=mIsTriggered;
@property(copy) NSString *key; // @synthesize key=mKey;
- (void)_copySelfToSnapshot:(id)arg1;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1;

@end

