//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/WDRun.h>

@class NSData, WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDFieldMarker : WDRun
{
    WDCharacterProperties *mProperties;
    int mFieldPosition;
    int mMarkerType;
    unsigned char mFieldType;
    NSData *mData;
    unsigned int mZombieEmbed:1;
    unsigned int mResultDirty:1;
    unsigned int mResultEdited:1;
    unsigned int mLocked:1;
    unsigned int mPrivateResult:1;
    unsigned int mNested:1;
    unsigned int mHasSeparator:1;
}

- (id)description;
- (void)setData:(id)arg1;
- (id)data;
- (void)setHasSeparator:(BOOL)arg1;
- (BOOL)hasSeparator;
- (void)setNested:(BOOL)arg1;
- (BOOL)nested;
- (void)setPrivateResult:(BOOL)arg1;
- (BOOL)privateResult;
- (void)setLocked:(BOOL)arg1;
- (BOOL)locked;
- (void)setResultEdited:(BOOL)arg1;
- (BOOL)resultEdited;
- (void)setResultDirty:(BOOL)arg1;
- (BOOL)resultDirty;
- (void)setZombieEmbed:(BOOL)arg1;
- (BOOL)zombieEmbed;
- (int)runType;
- (void)setFieldType:(unsigned char)arg1;
- (unsigned char)fieldType;
- (void)setFieldMarkerType:(int)arg1;
- (int)fieldMarkerType;
- (void)setFieldPosition:(int)arg1;
- (int)fieldPosition;
- (void)dealloc;
- (id)initWithParagraph:(id)arg1;
- (void)clearProperties;
- (id)properties;

@end

