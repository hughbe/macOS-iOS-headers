//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OADDrawable<OADDrawableContainer>, OADDrawableProperties;

@interface OADDrawable : NSObject
{
    BOOL mHidden;
    unsigned int mId;
    unsigned int mAltId;
    OADDrawableProperties *mDrawableProperties;
    id <OADClient> mClientData;
    OADDrawable<OADDrawableContainer> *mParent;
}

+ (unsigned int)generateOADDrawableId:(id)arg1;
- (id)description;
- (id)createOrientedBoundsWithBounds:(struct CGRect)arg1;
- (void)removeUnnecessaryOverrides;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (id)ensureClientDataOfClass:(Class)arg1;
- (id)clientData;
- (void)setClientData:(id)arg1;
- (void)setDrawableProperties:(id)arg1;
- (id)drawableProperties;
- (void)setAltId:(unsigned int)arg1;
- (unsigned int)altId;
- (void)setId:(unsigned int)arg1;
- (unsigned int)id;
- (void)setHidden:(BOOL)arg1;
- (BOOL)hidden;
- (void)dealloc;
- (id)initWithPropertiesClass:(Class)arg1;
- (id)createWordClientDataWithTextType:(int)arg1;

@end

