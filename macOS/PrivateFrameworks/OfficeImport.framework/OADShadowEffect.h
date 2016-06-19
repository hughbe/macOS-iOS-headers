//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADEffect.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADShadowEffect : OADEffect
{
    OADColor *mColor;
    float mBlurRadius;
    float mDistance;
    float mAngle;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setStyleColor:(id)arg1;
- (void)setAngle:(float)arg1;
- (float)angle;
- (void)setDistance:(float)arg1;
- (float)distance;
- (void)setBlurRadius:(float)arg1;
- (float)blurRadius;
- (void)setColor:(id)arg1;
- (id)color;
- (void)dealloc;
- (id)initWithShadowEffect:(id)arg1 type:(int)arg2;
- (id)initWithType:(int)arg1;

@end

