//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OABShapeBaseManager.h>

#import <OfficeImport/OABPropertiesManager-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager>
{
    struct EshShape *mShape;
}

- (BOOL)hidden;
- (BOOL)textPathStrikethrough;
- (BOOL)textPathSmallcaps;
- (BOOL)textPathUnderline;
- (BOOL)textPathItalic;
- (BOOL)textPathBold;
- (id)textPathFontFamily;
- (int)textPathFontSize;
- (int)textPathTextAlignment;
- (id)textPathUnicodeString;
- (BOOL)isTextPath;
- (BOOL)isShadowed;
- (BOOL)isStroked;
- (BOOL)isFilled;
- (BOOL)isShadowOK;
- (BOOL)isStrokeOK;
- (BOOL)isFillOK;
- (id)initWithShape:(struct EshShape *)arg1;
- (id)initWithShape:(struct EshShape *)arg1 masterShape:(struct EshShape *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

