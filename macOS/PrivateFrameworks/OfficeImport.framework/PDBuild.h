//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface PDBuild : NSObject
{
    BOOL mIsAnimateBackground;
    OADDrawable *mDrawable;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)setDrawable:(id)arg1;
- (id)drawable;
- (void)setIsAnimateBackground:(BOOL)arg1;
- (BOOL)isAnimateBackground;
- (void)dealloc;
- (id)init;

@end

