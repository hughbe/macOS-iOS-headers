//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSLocale, NSLock, NSMutableArray, NSMutableDictionary, NSString, NSTimeZone, OITSUDateParserLibrary;

__attribute__((visibility("hidden")))
@interface OITSULocale : NSObject
{
    NSLocale *_locale;
    struct __CFLocale *_gregorianCalendarLocale;
    NSString *_languageCode;
    NSString *_localeIdentifier;
    NSString *_documentLanguageIdentifier;
    NSString *_currencyCode;
    NSString *_decimalSeparator;
    NSString *_currencyDecimalSeparator;
    NSString *_listSeparator;
    NSString *_groupingSeparator;
    NSString *_percentSymbol;
    int _dateComponentOrdering;
    NSArray *_standaloneMonthSymbols;
    NSArray *_weekdaySymbols;
    NSArray *_standaloneWeekdaySymbols;
    NSArray *_shortMonthSymbols;
    NSArray *_shortStandaloneMonthSymbols;
    NSArray *_shortStandaloneWeekdaySymbols;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _formattersMutex;
    NSMutableArray *_numberFormatters;
    NSMutableArray *_scientificNumberFormatters;
    OITSUDateParserLibrary *_dateParserLibrary;
    NSLock *_numberFormatterStringFromDoubleWithFormatLock;
    struct __CFNumberFormatter *_plainFormatter;
    struct __CFNumberFormatter *_noMinusSignPlainFormatter;
    struct __CFNumberFormatter *_currencyFormatter;
    struct __CFNumberFormatter *_noMinusSignCurrencyFormatter;
    NSString *_activeCurrencyCode;
    NSString *_activeNoMinusSignCurrencyCode;
    unsigned int _groupingSize;
    NSLock *_localeSpecificStorageLock;
    NSMutableDictionary *_localeSpecificStorage;
}

+ (void)saveLocaleForReuse:(id)arg1;
+ (id)localeForLocaleIdentifier:(id)arg1 documentLanguageIdentifier:(id)arg2;
+ (id)canonicalizeLocaleIdentifierWithLanguageScriptAndRegionOnly:(id)arg1;
+ (id)canonicalizeLocaleIdentifierWithLanguageAndScriptOnly:(id)arg1;
+ (id)canonicalizeLocaleIdentifierWithLanguageAndRegionOnly:(id)arg1;
+ (id)canonicalizeLocaleIdentifier:(id)arg1;
+ (id)currentLocale;
+ (id)preferredLanguages;
+ (void)setLocalizedStringBundle:(struct __CFBundle *)arg1;
+ (void)initialize;
@property(readonly) OITSUDateParserLibrary *dateParserLibrary; // @synthesize dateParserLibrary=_dateParserLibrary;
@property(readonly) NSArray *shortStandaloneWeekdaySymbols; // @synthesize shortStandaloneWeekdaySymbols=_shortStandaloneWeekdaySymbols;
@property(readonly) NSArray *shortStandaloneMonthSymbols; // @synthesize shortStandaloneMonthSymbols=_shortStandaloneMonthSymbols;
@property(readonly) NSArray *shortMonthSymbols; // @synthesize shortMonthSymbols=_shortMonthSymbols;
@property(readonly) NSArray *standaloneWeekdaySymbols; // @synthesize standaloneWeekdaySymbols=_standaloneWeekdaySymbols;
@property(readonly) NSArray *weekdaySymbols; // @synthesize weekdaySymbols=_weekdaySymbols;
@property(readonly) NSArray *standaloneMonthSymbols; // @synthesize standaloneMonthSymbols=_standaloneMonthSymbols;
@property(readonly) int dateComponentOrdering; // @synthesize dateComponentOrdering=_dateComponentOrdering;
@property(readonly) struct __CFLocale *cfGregorianCalendarLocale; // @synthesize cfGregorianCalendarLocale=_gregorianCalendarLocale;
@property(readonly) NSString *percentSymbol; // @synthesize percentSymbol=_percentSymbol;
@property(readonly) NSString *groupingSeparator; // @synthesize groupingSeparator=_groupingSeparator;
@property(readonly) unsigned int groupingSize; // @synthesize groupingSize=_groupingSize;
@property(readonly) NSString *listSeparator; // @synthesize listSeparator=_listSeparator;
@property(readonly) NSString *currencyDecimalSeparator; // @synthesize currencyDecimalSeparator=_currencyDecimalSeparator;
@property(readonly) NSString *decimalSeparator; // @synthesize decimalSeparator=_decimalSeparator;
@property(readonly) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(readonly) NSString *documentLanguageIdentifier; // @synthesize documentLanguageIdentifier=_documentLanguageIdentifier;
@property(readonly) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(readonly) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly) NSLocale *locale; // @synthesize locale=_locale;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundle:(struct __CFBundle *)arg4;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
@property(readonly) NSTimeZone *timeZone;
- (BOOL)localizedCaseInsensitiveIsEqual:(id)arg1 toString:(id)arg2;
- (long long)localizedCaseInsensitiveCompare:(id)arg1 toString:(id)arg2;
- (long long)localizedCompare:(id)arg1 toString:(id)arg2;
- (void)setLocaleSpecificStorage:(id)arg1 forKey:(id)arg2;
- (id)localeSpecificStorageForKey:(id)arg1;
- (id)numberFormatterStringFromDouble:(double)arg1 withFormat:(id)arg2 useDecimalPlaces:(BOOL)arg3 minDecimalPlaces:(unsigned short)arg4 decimalPlaces:(unsigned short)arg5 showThousandsSeparator:(BOOL)arg6 currencyCode:(id)arg7 suppressMinusSign:(BOOL)arg8;
- (void)_initializeNumberFormatterStringFromDoubleCache;
- (void)returnScientificNumberFormatter:(struct __CFNumberFormatter *)arg1;
- (struct __CFNumberFormatter *)checkoutScientificNumberFormatter;
- (void)returnNumberFormatter:(struct __CFNumberFormatter *)arg1;
- (struct __CFNumberFormatter *)checkoutNumberFormatter;
@property(readonly) NSString *arrayRowSeparator;
@property(readonly) NSLocale *gregorianCalendarLocale;
@property(readonly) struct __CFLocale *cfLocale;
- (id)description;
- (void)dealloc;
- (id)copyWithDocumentLanguageIdentifier:(id)arg1;
- (id)localeIdentifierWithLanguageScriptAndRegionOnly;
- (id)localeIdentifierWithLanguageAndRegionOnly;
- (id)initWithLocale:(id)arg1 documentLanguageIdentifier:(id)arg2 useAutoupdating:(BOOL)arg3;
- (id)initWithLocale:(id)arg1 documentLanguageIdentifier:(id)arg2;

@end

