/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHLexiconCorrectionStep : CHPostprocessingStep {
    int  _autoCapitalizationMode;
    NSCharacterSet * _consumableStrokesCharSet;
    const struct _LXLexicon { } * _customLexicon;
    const struct _LXLexicon { } * _customPhraseLexicon;
    NSCharacterSet * _fullWidthPunctuationThatExpectsUppercaseAfter;
    NSLocale * _locale;
    const struct _LXLexicon { } * _phraseLexicon;
    CHRecognizer * _recognizer;
    bool  _shouldAutocapitalize;
    const struct _LXLexicon { } * _staticLexicon;
    NSDictionary * _textReplacements;
}

@property (nonatomic, readonly) int autoCapitalizationMode;
@property (nonatomic, retain) NSCharacterSet *consumableStrokesCharSet;
@property (nonatomic) const struct _LXLexicon { }*customLexicon;
@property (nonatomic) const struct _LXLexicon { }*customPhraseLexicon;
@property (nonatomic, retain) NSCharacterSet *fullWidthPunctuationThatExpectsUppercaseAfter;
@property (nonatomic) NSLocale *locale;
@property (nonatomic) const struct _LXLexicon { }*phraseLexicon;
@property (nonatomic) CHRecognizer *recognizer;
@property (nonatomic) bool shouldAutocapitalize;
@property (nonatomic) const struct _LXLexicon { }*staticLexicon;
@property (nonatomic, retain) NSDictionary *textReplacements;

- (id)applyLexiconCorrectionOnToken:(id)arg1 hasEmptyContext:(bool)arg2 history:(id)arg3 historyEndsAlphabetic:(bool)arg4 historyEndsWithLineBreak:(bool)arg5 prevToken:(id)arg6 shouldCapitalizeGivenHistory:(bool)arg7 tokenIndex:(long long)arg8 textReplacements:(id)arg9 shouldEntrySkipCorrection:(bool)arg10 contextBeforeToken:(id)arg11;
- (id)applyLexiconCorrections:(id)arg1 shouldCapitalizeWord:(bool)arg2 shouldSkipEntryCorrection:(bool)arg3 outBestTokenIndex:(long long*)arg4 bestLexiconTokenScore:(double*)arg5 textReplacements:(id)arg6 contextBeforeToken:(id)arg7;
- (int)autoCapitalizationMode;
- (id)capitalizeString:(id)arg1;
- (id)capitalizeToken:(id)arg1;
- (id)consumableStrokesCharSet;
- (const struct _LXLexicon { }*)customLexicon;
- (const struct _LXLexicon { }*)customPhraseLexicon;
- (void)dealloc;
- (id)fullWidthPunctuationThatExpectsUppercaseAfter;
- (id)getSpellCorrectedToken:(id)arg1 contextBeforeToken:(id)arg2;
- (id)initWithAutoCapitalizationMode:(int)arg1 locale:(id)arg2 staticLexicon:(struct _LXLexicon { }*)arg3 customLexicon:(struct _LXLexicon { }*)arg4 phraseLexicon:(struct _LXLexicon { }*)arg5 customPhraseLexicon:(struct _LXLexicon { }*)arg6 recognizer:(id)arg7 textReplacements:(id)arg8;
- (id)locale;
- (const struct _LXLexicon { }*)phraseLexicon;
- (id)process:(id)arg1;
- (id)recognizer;
- (void)setConsumableStrokesCharSet:(id)arg1;
- (void)setCustomLexicon:(const struct _LXLexicon { }*)arg1;
- (void)setCustomPhraseLexicon:(const struct _LXLexicon { }*)arg1;
- (void)setFullWidthPunctuationThatExpectsUppercaseAfter:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setPhraseLexicon:(const struct _LXLexicon { }*)arg1;
- (void)setRecognizer:(id)arg1;
- (void)setShouldAutocapitalize:(bool)arg1;
- (void)setStaticLexicon:(const struct _LXLexicon { }*)arg1;
- (void)setTextReplacements:(id)arg1;
- (bool)shouldAutocapitalize;
- (const struct _LXLexicon { }*)staticLexicon;
- (id)textReplacements;
- (bool)tokenIsExemptFromCorrection:(id)arg1 inPath:(id)arg2 withTokensInRow:(id)arg3;

@end
