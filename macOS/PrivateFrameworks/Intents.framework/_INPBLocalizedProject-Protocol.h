//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBAppNames, _INPBIntentVocabulary, _INPBLanguageTag;

@protocol _INPBLocalizedProject <NSObject>
@property(readonly, nonatomic) BOOL hasLanguage;
@property(retain, nonatomic) _INPBLanguageTag *language;
@property(readonly, nonatomic) BOOL hasIntentVocabulary;
@property(retain, nonatomic) _INPBIntentVocabulary *intentVocabulary;
@property(readonly, nonatomic) BOOL hasAppNames;
@property(retain, nonatomic) _INPBAppNames *appNames;
@end

